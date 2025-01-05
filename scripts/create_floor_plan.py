import argparse
import sys
import math
import json

from mapping import *

parser = argparse.ArgumentParser()

parser.add_argument('-o', help="destination xdc file", dest='outputFile', default = 'fpga_floorplan.xdc')
parser.add_argument('--scale_factor', dest='scale_factor', type = float, default = 1, help="Size of switch relative to the client (per dimension)")
parser.add_argument('--mode', dest='mode', default='torus', choices=['torus', 'torus_bp', 'torus_credit'])
parser.add_argument('--asic', dest='asic', action='store_true')
parser.add_argument('--folded', dest='folded', action='store_true')
parser.add_argument('--d_w', dest='d_w', default = 32, type = int)
parser.add_argument('--x_w', dest='x_w', default = 2, type = int)
parser.add_argument('--y_w', dest='y_w', default = 2, type = int)
parser.add_argument('--vc_w', dest='vc_w', default = 2, type = int)
parser.add_argument('--x_nodes', dest='x_nodes', default = 4, type=int)
parser.add_argument('--y_nodes', dest='y_nodes', default = 4, type=int)
parser.add_argument('--x_start', dest='x_start', default = 26, type=int)
parser.add_argument('--y_start', dest='y_start', default = 0, type=int)
parser.add_argument('--x_end', dest='x_end', default = 113, type=int)
parser.add_argument('--y_end', dest='y_end', default = 149, type=int)

args = parser.parse_args()
outFile = args.outputFile

def fpga_rect_formatter(rects, block_name):
    pblock_rect_format = '''
resize_pblock [get_pblocks {block_name}] -add {{SLICE_X{x_start:d}Y{y_start:d}:SLICE_X{x_end:d}Y{y_end:d}}}'''
    formatted_str = ""
    for r in rects:
        formatted_str += pblock_rect_format.format(
            block_name = block_name, 
            x_start = r.x_start,
            y_start = r.y_start,
            x_end = r.x_end,
            y_end = r.y_end
        )

    
    return formatted_str

def asic_rect_formatter(rects, block_name):
    rects_str = ""
    for r in rects:
        rects_str += f"{r.x_start:d} {r.y_start:d} {r.x_end:d} {r.y_end:d} "

    return f"create_group -name {block_name} -type {{fence}} -rects {{{rects_str}}}"

with open(outFile, 'w') as f:
    pblock_str = '''
create_pblock {block_name}
'''
    pblock_item_format = 'add_cells_to_pblock [get_pblocks {block_name}] [get_cells [list {{{obj_name}}}]]\n'

    asic_str = '''
createInstGroup {block_name}
'''
    asic_item_format = 'addInstToInstGroup {block_name} {obj_name}\n'


    str_to_format = asic_str if args.asic else pblock_str
    rect_formatter = asic_rect_formatter if args.asic else fpga_rect_formatter
    add_item_format = asic_item_format if args.asic else pblock_item_format

    info = ChipInfo(
        x_w     = args.x_w,
        y_w     = args.y_w,
        vc_w    = args.vc_w,
        data_w  = args.d_w,
        x_nodes = args.x_nodes,
        y_nodes = args.y_nodes,
        x_start = args.x_start, 
        y_start = args.y_start, 
        x_end   = args.x_end, 
        y_end   = args.y_end,
        mode    = args.mode,
        switch_scale = 1.4 if args.mode == 'torus_credit' else 1,
        blackouts_x = [] if args.asic else [(70,79)],
        blackouts_y = []
    )

    components = get_mappings(args.folded, info)

    i = 0
    for c in components:
        block_str = c.block_name if c.block_name else f"poly_group_{i}"
        f.write(str_to_format.format(block_name = block_str))
        f.write(rect_formatter(c.rects, block_str))
        f.write("\n")
        for obj in c.objs:
            f.write(add_item_format.format(block_name=block_str, obj_name=obj))
        f.write("\n")
        i+= 1;

    if args.asic:
        f.write('''
setAttribute -net s_tx* -top_preferred_routing_layer M8 -bottom_preferred_routing_layer M8
setAttribute -net e_tx* -top_preferred_routing_layer M7 -bottom_preferred_routing_layer M7
''')

#    sizes = dict()
#    for c in components:
#        if c.block_type not in sizes:
#            sizes[c.block_type] = {
#                'y_size': c.y_end - c.y_start+1,
#                'x_size': c.x_end - c.x_start+1,
#                'components': [c.block_name],
#                'block_count': 1
#            }
#            continue;
#        
#        assert sizes[c.block_type]['y_size'] == c.y_end - c.y_start+1, "Inconsistent y dimensions for block type {c.block_type}. " + c.block_name + " is inconsistent with other blocks of type " + c.block_type
#        assert sizes[c.block_type]['x_size'] == c.x_end - c.x_start+1, "Inconsistent x dimensions for block type {c.block_type}. " + c.block_name + " is inconsistent with other blocks of type " + c.block_type
#        sizes[c.block_type]['components'].append(c.block_name)
#        sizes[c.block_type]['block_count'] += 1;
#
#    print(json.dumps(sizes, indent=2, sort_keys=True))
