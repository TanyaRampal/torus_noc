from functools import cmp_to_key

from typing import List, Tuple
from dataclasses import dataclass, field

@dataclass
class Rect:
    x_start: int = 0
    y_start: int = 0

    x_end: int = 0
    y_end: int = 0


# Instantiate with BlockDesc(component_str="", x_start=<>, y_start=<>, x_end=int, y_end=int)
@dataclass
class BlockDesc:
    # Path of object to be placed within this bounding box
    objs: List[str]
    block_type: str

    # rects
    rects: List[Rect]

    # pblock_name (if None, will be poly<NUMBER> where number is total number of blocks placed so far
    block_name: str = None

# access with obj.x_start.. etc
@dataclass
class ChipInfo:
    x_w:      int = 2
    y_w:      int = 2
    vc_w:      int = 2
    data_w:   int = 28
    x_nodes:  int = 4
    y_nodes:  int = 4
    switch_scale: float = 1

    x_start:  int = 0
    x_end:    int = 499
    y_start:  int = 0
    y_end:    int = 499
    mode:     str = "torus" #torus, torus_bp, torus_credit
    # Optional blackouts, for better sizing, if ignored, PAR tool should still properly place
    blackouts_x:    List[Tuple[int, int]] = field(default_factory=list)
    blackouts_y:    List[Tuple[int, int]] = field(default_factory=list)

# Get mappings is what they would need to fill out, returns all mappings given these constraints
def get_mappings(folded, constraints: ChipInfo):
    components: list[BlockDesc] = []

    #gets the box dimensions
    x_size, y_size = get_bounding_box_size(constraints)

    for x in range(constraints.x_nodes):
        for y in range(constraints.y_nodes):
            # get bounding box bottom left corner for current component
            x_box_start, y_box_start = get_box_start(x, y, x_size, y_size, folded, constraints)

            # get box components (all given as offset start and end)
            box_components = get_box_components(x, y, x_size, y_size, folded, constraints)

            i = 0
            for component in box_components:
                rects_adjust = []
                for r in component.rects:
                    rects_adjust.append(
                        Rect(
                            x_start = r.x_start + x_box_start,
                            x_end   = r.x_end + x_box_start,
                            y_start = r.y_start + y_box_start,
                            y_end   = r.y_end + y_box_start
                        )
                    )

                components.append(
                    BlockDesc(
                        objs = component.objs,
                        block_type = component.block_type,
                        rects = rects_adjust,
                        block_name = component.block_name
                    )
                )
    return components

# TODO implement getting size of box.
def get_bounding_box_size(info: ChipInfo):
    # range/number of nodes gives how many x small boxes will each node take
    x_size = (info.x_end - info.x_start + 1) // info.x_nodes
    y_size = (info.y_end - info.y_start + 1) // info.y_nodes
    return x_size, y_size

# TODO: implement get_box_start. This should return the bottom left slice of box x, y.
# Folded is true if the mapping is for a folded layout
def get_box_start(x, y, x_size, y_size, folded, info: ChipInfo):
    x_start = 0
    y_start = 0

    if(folded):
        mid_x = (info.x_nodes + 1) // 2
        if x < mid_x:
            x_new = 2 * x
        else:
            x_new = 2 * (info.x_nodes - x) - 1

        mid_y = (info.y_nodes + 1) // 2
        if y < mid_y:
            y_new = 2 * y
        else:
            y_new = 2 * (info.y_nodes - y) - 1

        x_start = info.x_start + (x_new*x_size)
        y_start = info.y_start + (y_new*y_size)
    else:
        x_start = info.x_start + (x * x_size)
        y_start = info.y_start + (y * y_size)

    return x_start, y_start

# TODO in get_box_components:
#    1. Find the comment that says "============ Place Client and Switch ==============="
#    2. Look at the "objs" field of BlockDesc. Make sure that the path matches the path
#       to your switch and client components. If not, modify this portion accordingly.
#       a "block_type" has been added to a bit more clarity
#    3. Find the comment that says "================= Add objects to rx/tx blocks =================== "
#    4. You will find 4 arrays. Add your low_swing_rx/low_swing_tx objects to the proper array
#       description for each array is below the comment mentioned in 3.
#       Make sure that the instance paths match your rtl.

# This mapping does not give very good packing and wastes space.
# There are possibilities to make this better.
# E.g, overlapping logical boxes (bottom left rx/tx can be inside another without any physical constraint conflicts)
def get_box_components(x, y, x_size, y_size, folded, info: ChipInfo):
    box_components = []
    # Some arbitrary width for the rx/tx blocks
    rx_tx_w = max(2,min(x_size,y_size)//20)

    #Switch coordinates
    sw_x_width = int(((x_size - 2 * rx_tx_w) * info.switch_scale)//(1+info.switch_scale))
    sw_y_width = int(((y_size - 2 * rx_tx_w) * info.switch_scale)//(1+info.switch_scale))

    sw_x_end = x_size-1-rx_tx_w
    sw_y_end = y_size-1-rx_tx_w

    sw_x_start = sw_x_end - sw_x_width + 1
    sw_y_start = sw_y_end - sw_y_width + 1

    # Client coordinates (L rectangle/rectilinear box)
    # Horizontal portion
    cli_x_start = 0
    cli_x_end = x_size-1
    cli_y_start = 0
    cli_y_end = sw_y_start-rx_tx_w-1
    # Vertical portion
    vert_cli_x_start = 0
    vert_cli_x_end = sw_x_start-rx_tx_w-1
    vert_cli_y_start = cli_y_end
    vert_cli_y_end = y_size-1

    # ============ Place Client and Switch ===============
    box_components.append(
        BlockDesc(
            objs = [f"ys[{y:d}].xs[{x:d}].torus_switch_xy"],
            block_type = 'switch',
            rects = [Rect(x_start = sw_x_start, x_end = sw_x_end, y_start = sw_y_start, y_end = sw_y_end)],
            block_name = f"poly{x:d}_{y:d}_sw"
        )
    )

    box_components.append(
        BlockDesc(
            objs = [f"ys[{y:d}].xs[{x:d}].client_xy"],
            block_type = 'client',
            rects = [
                Rect(x_start = cli_x_start, x_end = cli_x_end, y_start = cli_y_start, y_end = cli_y_end),
                Rect(x_start = vert_cli_x_start, x_end = vert_cli_x_end, y_start = vert_cli_y_start, y_end = vert_cli_y_end)
            ],
            block_name = f"poly{x:d}_{y:d}_cli"
        )
    )

    # START CREATE LOW SWING RX TX bounding boxes

    #east-west rx/tx bounding boxes
    rx_ew_x_start = sw_x_start - rx_tx_w
    rx_ew_x_end = sw_x_start-1
    rx_ew_y_start = sw_y_start - rx_tx_w
    rx_ew_y_end = sw_y_end + rx_tx_w - 1

    tx_ew_x_start = sw_x_end+1
    tx_ew_x_end = tx_ew_x_start + rx_tx_w-1
    tx_ew_y_start = sw_y_start - rx_tx_w
    tx_ew_y_end = sw_y_end + rx_tx_w - 1

    #swap for folded conditions:)
    if(folded and x >= (info.x_nodes+1)//2):
        tx_ew_x_start, rx_ew_x_start = rx_ew_x_start, tx_ew_x_start
        tx_ew_x_end, rx_ew_x_end = rx_ew_x_end, tx_ew_x_end

    #north-south rx/tx bounding boxes
    rx_ns_x_start = sw_x_start
    rx_ns_x_end = sw_x_end
    rx_ns_y_start = sw_y_end+1
    rx_ns_y_end = rx_ns_y_start+rx_tx_w-1

    tx_ns_x_start = sw_x_start
    tx_ns_x_end = sw_x_end
    tx_ns_y_start = sw_y_start-rx_tx_w
    tx_ns_y_end = sw_y_start-1

    #swap for folded conditions:)
    if(folded and y >= (info.y_nodes+1)//2):
        tx_ns_y_start, rx_ns_y_start = rx_ns_y_start, tx_ns_y_start
        tx_ns_y_end, rx_ns_y_end = rx_ns_y_end, tx_ns_y_end

    # Generate objects for each block (low_swing_rx/low_swing_tx each of the 1 bit blocks...)
    # ================= Add objects to rx/tx blocks ===================
    ew_rx_items = [] # East West RX items   - those to place on left of switch   (or right when folded criteria are met)
    ew_tx_items = [] # East West TX items   - those to place on right of switch  (or left when folded criteria are met)
    ns_rx_items = [] # North South RX items - those to place on top of switch    (or bottom when folded criteria are met)
    ns_tx_items = [] # North South TX items - those to place on bottom of switch (or top when folded criteria are met)

    # You may access if it is 'torus', 'torus_credit', or 'torus_bp' through info.mod

    #if info.mode == 'torus_credit':
    #    #...
    #
    #elif info.mode == 'torus_bp':
    #    #
    #else:
    #    #

    msg_w = info.data_w + info.x_w + info.y_w

    # for all switches, north rx and south tx are there. East and west rx/tx do not exist in torus_credit
    for i in range (msg_w):
        ns_rx_items += [f"ys[{y:d}].xs[{x:d}].msg_txrx[{i:d}].north_rx"]
        ns_tx_items += [f"ys[{y:d}].xs[{x:d}].msg_txrx[{i:d}].south_tx"]
        if(info.mode == 'torus' or info.mode == 'torus_bp'):
            ew_rx_items += [f"ys[{y:d}].xs[{x:d}].msg_txrx[{i:d}].west_rx"]
            ew_tx_items += [f"ys[{y:d}].xs[{x:d}].msg_txrx[{i:d}].east_tx"]

    if info.mode == 'torus_bp':
        ew_rx_items += [f"ys[{y:d}].xs[{x:d}].east_bp_rx"]
        ew_tx_items += [f"ys[{y:d}].xs[{x:d}].west_bp_tx"]

    # rx means everything on west side, tx - everything on east side
    elif info.mode == 'torus_credit':
        for i in range (info.vc_w):
            ew_rx_items += [f"ys[{y:d}].xs[{x:d}].conns_vc_info[{i:d}].west_rx_vc",
                            f"ys[{y:d}].xs[{x:d}].conns_vc_info[{i:d}].west_tx_g"]
            ew_tx_items += [f"ys[{y:d}].xs[{x:d}].conns_vc_info[{i:d}].east_tx_vc",
                            f"ys[{y:d}].xs[{x:d}].conns_vc_info[{i:d}].east_rx_g"]

        for i in range (info.data_w):
            ew_rx_items += [f"ys[{y:d}].xs[{x:d}].conns_data[{i:d}].west_rx_data"]
            ew_tx_items += [f"ys[{y:d}].xs[{x:d}].conns_data[{i:d}].east_tx_data"]

        for i in range (info.x_w + info.y_w):
            ew_rx_items += [f"ys[{y:d}].xs[{x:d}].conns_addr[{i:d}].west_rx_addr"]
            ew_tx_items += [f"ys[{y:d}].xs[{x:d}].conns_addr[{i:d}].east_tx_addr"]




    #Place rx/tx blocks, no need to touch
    box_components.append(
        BlockDesc( objs = ew_rx_items,
            block_type = 'ew_tx_rx',
            rects=[Rect(x_start = rx_ew_x_start, x_end = rx_ew_x_end, y_start = rx_ew_y_start, y_end = rx_ew_y_end)],
            block_name = f"poly{x:d}_{y:d}_rx_ew"))

    box_components.append(
        BlockDesc( objs = ew_tx_items,
            block_type = 'ew_tx_rx',
            rects=[Rect(x_start = tx_ew_x_start, x_end = tx_ew_x_end, y_start = tx_ew_y_start, y_end = tx_ew_y_end)],
            block_name = f"poly{x:d}_{y:d}_tx_ew"))

    box_components.append(
        BlockDesc( objs = ns_rx_items,
            block_type = 'ns_tx_rx',
            rects=[Rect(x_start = rx_ns_x_start, x_end = rx_ns_x_end, y_start = rx_ns_y_start, y_end = rx_ns_y_end)],
            block_name = f"poly{x:d}_{y:d}_rx_ns"))

    box_components.append(
        BlockDesc( objs = ns_tx_items,
            block_type = 'ns_tx_rx',
            rects=[Rect(x_start = tx_ns_x_start, x_end = tx_ns_x_end, y_start = tx_ns_y_start, y_end = tx_ns_y_end)],
            block_name = f"poly{x:d}_{y:d}_tx_ns"))

    return box_components
