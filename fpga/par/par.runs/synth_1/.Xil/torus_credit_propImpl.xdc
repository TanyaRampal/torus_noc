set_property SRC_FILE_INFO {cfile:/home/t3rampal/ece720t7-f24/labs/t3rampal-lab5/fpga/floorplan.xdc rfile:../../../../floorplan.xdc id:1} [current_design]
set_property src_info {type:XDC file:1 line:2 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_0_sw
add_cells_to_pblock [get_pblocks poly0_0_sw] [get_cells -quiet [list {ys[0].xs[0].torus_switch_xy}]]
resize_pblock [get_pblocks poly0_0_sw] -add {SLICE_X36Y16:SLICE_X45Y34}
set_property src_info {type:XDC file:1 line:8 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_0_cli
add_cells_to_pblock [get_pblocks poly0_0_cli] [get_cells -quiet [list {ys[0].xs[0].client_xy}]]
resize_pblock [get_pblocks poly0_0_cli] -add {SLICE_X34Y0:SLICE_X47Y13 SLICE_X26Y0:SLICE_X33Y36}
set_property src_info {type:XDC file:1 line:15 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_0_rx_ew
add_cells_to_pblock [get_pblocks poly0_0_rx_ew] [get_cells -quiet [list \
          {ys[0].xs[0].conns_addr[0].west_rx_addr} \
          {ys[0].xs[0].conns_addr[1].west_rx_addr} \
          {ys[0].xs[0].conns_addr[2].west_rx_addr} \
          {ys[0].xs[0].conns_addr[3].west_rx_addr} \
          {ys[0].xs[0].conns_data[0].west_rx_data} \
          {ys[0].xs[0].conns_data[10].west_rx_data} \
          {ys[0].xs[0].conns_data[11].west_rx_data} \
          {ys[0].xs[0].conns_data[12].west_rx_data} \
          {ys[0].xs[0].conns_data[13].west_rx_data} \
          {ys[0].xs[0].conns_data[14].west_rx_data} \
          {ys[0].xs[0].conns_data[15].west_rx_data} \
          {ys[0].xs[0].conns_data[16].west_rx_data} \
          {ys[0].xs[0].conns_data[17].west_rx_data} \
          {ys[0].xs[0].conns_data[18].west_rx_data} \
          {ys[0].xs[0].conns_data[19].west_rx_data} \
          {ys[0].xs[0].conns_data[1].west_rx_data} \
          {ys[0].xs[0].conns_data[20].west_rx_data} \
          {ys[0].xs[0].conns_data[21].west_rx_data} \
          {ys[0].xs[0].conns_data[22].west_rx_data} \
          {ys[0].xs[0].conns_data[23].west_rx_data} \
          {ys[0].xs[0].conns_data[24].west_rx_data} \
          {ys[0].xs[0].conns_data[25].west_rx_data} \
          {ys[0].xs[0].conns_data[26].west_rx_data} \
          {ys[0].xs[0].conns_data[27].west_rx_data} \
          {ys[0].xs[0].conns_data[28].west_rx_data} \
          {ys[0].xs[0].conns_data[29].west_rx_data} \
          {ys[0].xs[0].conns_data[2].west_rx_data} \
          {ys[0].xs[0].conns_data[30].west_rx_data} \
          {ys[0].xs[0].conns_data[31].west_rx_data} \
          {ys[0].xs[0].conns_data[3].west_rx_data} \
          {ys[0].xs[0].conns_data[4].west_rx_data} \
          {ys[0].xs[0].conns_data[5].west_rx_data} \
          {ys[0].xs[0].conns_data[6].west_rx_data} \
          {ys[0].xs[0].conns_data[7].west_rx_data} \
          {ys[0].xs[0].conns_data[8].west_rx_data} \
          {ys[0].xs[0].conns_data[9].west_rx_data} \
          {ys[0].xs[0].conns_vc_info[0].west_rx_vc} \
          {ys[0].xs[0].conns_vc_info[0].west_tx_g} \
          {ys[0].xs[0].conns_vc_info[1].west_rx_vc} \
          {ys[0].xs[0].conns_vc_info[1].west_tx_g}]]
resize_pblock [get_pblocks poly0_0_rx_ew] -add {SLICE_X34Y14:SLICE_X35Y35}
set_property src_info {type:XDC file:1 line:60 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_0_tx_ew
add_cells_to_pblock [get_pblocks poly0_0_tx_ew] [get_cells -quiet [list \
          {ys[0].xs[0].conns_addr[0].east_tx_addr} \
          {ys[0].xs[0].conns_addr[1].east_tx_addr} \
          {ys[0].xs[0].conns_addr[2].east_tx_addr} \
          {ys[0].xs[0].conns_addr[3].east_tx_addr} \
          {ys[0].xs[0].conns_data[0].east_tx_data} \
          {ys[0].xs[0].conns_data[10].east_tx_data} \
          {ys[0].xs[0].conns_data[11].east_tx_data} \
          {ys[0].xs[0].conns_data[12].east_tx_data} \
          {ys[0].xs[0].conns_data[13].east_tx_data} \
          {ys[0].xs[0].conns_data[14].east_tx_data} \
          {ys[0].xs[0].conns_data[15].east_tx_data} \
          {ys[0].xs[0].conns_data[16].east_tx_data} \
          {ys[0].xs[0].conns_data[17].east_tx_data} \
          {ys[0].xs[0].conns_data[18].east_tx_data} \
          {ys[0].xs[0].conns_data[19].east_tx_data} \
          {ys[0].xs[0].conns_data[1].east_tx_data} \
          {ys[0].xs[0].conns_data[20].east_tx_data} \
          {ys[0].xs[0].conns_data[21].east_tx_data} \
          {ys[0].xs[0].conns_data[22].east_tx_data} \
          {ys[0].xs[0].conns_data[23].east_tx_data} \
          {ys[0].xs[0].conns_data[24].east_tx_data} \
          {ys[0].xs[0].conns_data[25].east_tx_data} \
          {ys[0].xs[0].conns_data[26].east_tx_data} \
          {ys[0].xs[0].conns_data[27].east_tx_data} \
          {ys[0].xs[0].conns_data[28].east_tx_data} \
          {ys[0].xs[0].conns_data[29].east_tx_data} \
          {ys[0].xs[0].conns_data[2].east_tx_data} \
          {ys[0].xs[0].conns_data[30].east_tx_data} \
          {ys[0].xs[0].conns_data[31].east_tx_data} \
          {ys[0].xs[0].conns_data[3].east_tx_data} \
          {ys[0].xs[0].conns_data[4].east_tx_data} \
          {ys[0].xs[0].conns_data[5].east_tx_data} \
          {ys[0].xs[0].conns_data[6].east_tx_data} \
          {ys[0].xs[0].conns_data[7].east_tx_data} \
          {ys[0].xs[0].conns_data[8].east_tx_data} \
          {ys[0].xs[0].conns_data[9].east_tx_data} \
          {ys[0].xs[0].conns_vc_info[0].east_rx_g} \
          {ys[0].xs[0].conns_vc_info[0].east_tx_vc} \
          {ys[0].xs[0].conns_vc_info[1].east_rx_g} \
          {ys[0].xs[0].conns_vc_info[1].east_tx_vc}]]
resize_pblock [get_pblocks poly0_0_tx_ew] -add {SLICE_X46Y14:SLICE_X47Y35}
set_property src_info {type:XDC file:1 line:105 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_0_rx_ns
add_cells_to_pblock [get_pblocks poly0_0_rx_ns] [get_cells -quiet [list \
          {ys[0].xs[0].msg_txrx[0].north_rx} \
          {ys[0].xs[0].msg_txrx[10].north_rx} \
          {ys[0].xs[0].msg_txrx[11].north_rx} \
          {ys[0].xs[0].msg_txrx[12].north_rx} \
          {ys[0].xs[0].msg_txrx[13].north_rx} \
          {ys[0].xs[0].msg_txrx[14].north_rx} \
          {ys[0].xs[0].msg_txrx[15].north_rx} \
          {ys[0].xs[0].msg_txrx[16].north_rx} \
          {ys[0].xs[0].msg_txrx[17].north_rx} \
          {ys[0].xs[0].msg_txrx[18].north_rx} \
          {ys[0].xs[0].msg_txrx[19].north_rx} \
          {ys[0].xs[0].msg_txrx[1].north_rx} \
          {ys[0].xs[0].msg_txrx[20].north_rx} \
          {ys[0].xs[0].msg_txrx[21].north_rx} \
          {ys[0].xs[0].msg_txrx[22].north_rx} \
          {ys[0].xs[0].msg_txrx[23].north_rx} \
          {ys[0].xs[0].msg_txrx[24].north_rx} \
          {ys[0].xs[0].msg_txrx[25].north_rx} \
          {ys[0].xs[0].msg_txrx[26].north_rx} \
          {ys[0].xs[0].msg_txrx[27].north_rx} \
          {ys[0].xs[0].msg_txrx[28].north_rx} \
          {ys[0].xs[0].msg_txrx[29].north_rx} \
          {ys[0].xs[0].msg_txrx[2].north_rx} \
          {ys[0].xs[0].msg_txrx[30].north_rx} \
          {ys[0].xs[0].msg_txrx[31].north_rx} \
          {ys[0].xs[0].msg_txrx[32].north_rx} \
          {ys[0].xs[0].msg_txrx[33].north_rx} \
          {ys[0].xs[0].msg_txrx[34].north_rx} \
          {ys[0].xs[0].msg_txrx[35].north_rx} \
          {ys[0].xs[0].msg_txrx[3].north_rx} \
          {ys[0].xs[0].msg_txrx[4].north_rx} \
          {ys[0].xs[0].msg_txrx[5].north_rx} \
          {ys[0].xs[0].msg_txrx[6].north_rx} \
          {ys[0].xs[0].msg_txrx[7].north_rx} \
          {ys[0].xs[0].msg_txrx[8].north_rx} \
          {ys[0].xs[0].msg_txrx[9].north_rx}]]
resize_pblock [get_pblocks poly0_0_rx_ns] -add {SLICE_X36Y35:SLICE_X45Y36}
set_property src_info {type:XDC file:1 line:146 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_0_tx_ns
add_cells_to_pblock [get_pblocks poly0_0_tx_ns] [get_cells -quiet [list \
          {ys[0].xs[0].msg_txrx[0].south_tx} \
          {ys[0].xs[0].msg_txrx[10].south_tx} \
          {ys[0].xs[0].msg_txrx[11].south_tx} \
          {ys[0].xs[0].msg_txrx[12].south_tx} \
          {ys[0].xs[0].msg_txrx[13].south_tx} \
          {ys[0].xs[0].msg_txrx[14].south_tx} \
          {ys[0].xs[0].msg_txrx[15].south_tx} \
          {ys[0].xs[0].msg_txrx[16].south_tx} \
          {ys[0].xs[0].msg_txrx[17].south_tx} \
          {ys[0].xs[0].msg_txrx[18].south_tx} \
          {ys[0].xs[0].msg_txrx[19].south_tx} \
          {ys[0].xs[0].msg_txrx[1].south_tx} \
          {ys[0].xs[0].msg_txrx[20].south_tx} \
          {ys[0].xs[0].msg_txrx[21].south_tx} \
          {ys[0].xs[0].msg_txrx[22].south_tx} \
          {ys[0].xs[0].msg_txrx[23].south_tx} \
          {ys[0].xs[0].msg_txrx[24].south_tx} \
          {ys[0].xs[0].msg_txrx[25].south_tx} \
          {ys[0].xs[0].msg_txrx[26].south_tx} \
          {ys[0].xs[0].msg_txrx[27].south_tx} \
          {ys[0].xs[0].msg_txrx[28].south_tx} \
          {ys[0].xs[0].msg_txrx[29].south_tx} \
          {ys[0].xs[0].msg_txrx[2].south_tx} \
          {ys[0].xs[0].msg_txrx[30].south_tx} \
          {ys[0].xs[0].msg_txrx[31].south_tx} \
          {ys[0].xs[0].msg_txrx[32].south_tx} \
          {ys[0].xs[0].msg_txrx[33].south_tx} \
          {ys[0].xs[0].msg_txrx[34].south_tx} \
          {ys[0].xs[0].msg_txrx[35].south_tx} \
          {ys[0].xs[0].msg_txrx[3].south_tx} \
          {ys[0].xs[0].msg_txrx[4].south_tx} \
          {ys[0].xs[0].msg_txrx[5].south_tx} \
          {ys[0].xs[0].msg_txrx[6].south_tx} \
          {ys[0].xs[0].msg_txrx[7].south_tx} \
          {ys[0].xs[0].msg_txrx[8].south_tx} \
          {ys[0].xs[0].msg_txrx[9].south_tx}]]
resize_pblock [get_pblocks poly0_0_tx_ns] -add {SLICE_X36Y14:SLICE_X45Y15}
set_property src_info {type:XDC file:1 line:187 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_1_sw
add_cells_to_pblock [get_pblocks poly0_1_sw] [get_cells -quiet [list {ys[1].xs[0].torus_switch_xy}]]
resize_pblock [get_pblocks poly0_1_sw] -add {SLICE_X36Y90:SLICE_X45Y108}
set_property src_info {type:XDC file:1 line:193 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_1_cli
add_cells_to_pblock [get_pblocks poly0_1_cli] [get_cells -quiet [list {ys[1].xs[0].client_xy}]]
resize_pblock [get_pblocks poly0_1_cli] -add {SLICE_X34Y74:SLICE_X47Y87 SLICE_X26Y74:SLICE_X33Y110}
set_property src_info {type:XDC file:1 line:200 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_1_rx_ew
add_cells_to_pblock [get_pblocks poly0_1_rx_ew] [get_cells -quiet [list \
          {ys[1].xs[0].conns_addr[0].west_rx_addr} \
          {ys[1].xs[0].conns_addr[1].west_rx_addr} \
          {ys[1].xs[0].conns_addr[2].west_rx_addr} \
          {ys[1].xs[0].conns_addr[3].west_rx_addr} \
          {ys[1].xs[0].conns_data[0].west_rx_data} \
          {ys[1].xs[0].conns_data[10].west_rx_data} \
          {ys[1].xs[0].conns_data[11].west_rx_data} \
          {ys[1].xs[0].conns_data[12].west_rx_data} \
          {ys[1].xs[0].conns_data[13].west_rx_data} \
          {ys[1].xs[0].conns_data[14].west_rx_data} \
          {ys[1].xs[0].conns_data[15].west_rx_data} \
          {ys[1].xs[0].conns_data[16].west_rx_data} \
          {ys[1].xs[0].conns_data[17].west_rx_data} \
          {ys[1].xs[0].conns_data[18].west_rx_data} \
          {ys[1].xs[0].conns_data[19].west_rx_data} \
          {ys[1].xs[0].conns_data[1].west_rx_data} \
          {ys[1].xs[0].conns_data[20].west_rx_data} \
          {ys[1].xs[0].conns_data[21].west_rx_data} \
          {ys[1].xs[0].conns_data[22].west_rx_data} \
          {ys[1].xs[0].conns_data[23].west_rx_data} \
          {ys[1].xs[0].conns_data[24].west_rx_data} \
          {ys[1].xs[0].conns_data[25].west_rx_data} \
          {ys[1].xs[0].conns_data[26].west_rx_data} \
          {ys[1].xs[0].conns_data[27].west_rx_data} \
          {ys[1].xs[0].conns_data[28].west_rx_data} \
          {ys[1].xs[0].conns_data[29].west_rx_data} \
          {ys[1].xs[0].conns_data[2].west_rx_data} \
          {ys[1].xs[0].conns_data[30].west_rx_data} \
          {ys[1].xs[0].conns_data[31].west_rx_data} \
          {ys[1].xs[0].conns_data[3].west_rx_data} \
          {ys[1].xs[0].conns_data[4].west_rx_data} \
          {ys[1].xs[0].conns_data[5].west_rx_data} \
          {ys[1].xs[0].conns_data[6].west_rx_data} \
          {ys[1].xs[0].conns_data[7].west_rx_data} \
          {ys[1].xs[0].conns_data[8].west_rx_data} \
          {ys[1].xs[0].conns_data[9].west_rx_data} \
          {ys[1].xs[0].conns_vc_info[0].west_rx_vc} \
          {ys[1].xs[0].conns_vc_info[0].west_tx_g} \
          {ys[1].xs[0].conns_vc_info[1].west_rx_vc} \
          {ys[1].xs[0].conns_vc_info[1].west_tx_g}]]
resize_pblock [get_pblocks poly0_1_rx_ew] -add {SLICE_X34Y88:SLICE_X35Y109}
set_property src_info {type:XDC file:1 line:245 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_1_tx_ew
add_cells_to_pblock [get_pblocks poly0_1_tx_ew] [get_cells -quiet [list \
          {ys[1].xs[0].conns_addr[0].east_tx_addr} \
          {ys[1].xs[0].conns_addr[1].east_tx_addr} \
          {ys[1].xs[0].conns_addr[2].east_tx_addr} \
          {ys[1].xs[0].conns_addr[3].east_tx_addr} \
          {ys[1].xs[0].conns_data[0].east_tx_data} \
          {ys[1].xs[0].conns_data[10].east_tx_data} \
          {ys[1].xs[0].conns_data[11].east_tx_data} \
          {ys[1].xs[0].conns_data[12].east_tx_data} \
          {ys[1].xs[0].conns_data[13].east_tx_data} \
          {ys[1].xs[0].conns_data[14].east_tx_data} \
          {ys[1].xs[0].conns_data[15].east_tx_data} \
          {ys[1].xs[0].conns_data[16].east_tx_data} \
          {ys[1].xs[0].conns_data[17].east_tx_data} \
          {ys[1].xs[0].conns_data[18].east_tx_data} \
          {ys[1].xs[0].conns_data[19].east_tx_data} \
          {ys[1].xs[0].conns_data[1].east_tx_data} \
          {ys[1].xs[0].conns_data[20].east_tx_data} \
          {ys[1].xs[0].conns_data[21].east_tx_data} \
          {ys[1].xs[0].conns_data[22].east_tx_data} \
          {ys[1].xs[0].conns_data[23].east_tx_data} \
          {ys[1].xs[0].conns_data[24].east_tx_data} \
          {ys[1].xs[0].conns_data[25].east_tx_data} \
          {ys[1].xs[0].conns_data[26].east_tx_data} \
          {ys[1].xs[0].conns_data[27].east_tx_data} \
          {ys[1].xs[0].conns_data[28].east_tx_data} \
          {ys[1].xs[0].conns_data[29].east_tx_data} \
          {ys[1].xs[0].conns_data[2].east_tx_data} \
          {ys[1].xs[0].conns_data[30].east_tx_data} \
          {ys[1].xs[0].conns_data[31].east_tx_data} \
          {ys[1].xs[0].conns_data[3].east_tx_data} \
          {ys[1].xs[0].conns_data[4].east_tx_data} \
          {ys[1].xs[0].conns_data[5].east_tx_data} \
          {ys[1].xs[0].conns_data[6].east_tx_data} \
          {ys[1].xs[0].conns_data[7].east_tx_data} \
          {ys[1].xs[0].conns_data[8].east_tx_data} \
          {ys[1].xs[0].conns_data[9].east_tx_data} \
          {ys[1].xs[0].conns_vc_info[0].east_rx_g} \
          {ys[1].xs[0].conns_vc_info[0].east_tx_vc} \
          {ys[1].xs[0].conns_vc_info[1].east_rx_g} \
          {ys[1].xs[0].conns_vc_info[1].east_tx_vc}]]
resize_pblock [get_pblocks poly0_1_tx_ew] -add {SLICE_X46Y88:SLICE_X47Y109}
set_property src_info {type:XDC file:1 line:290 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_1_rx_ns
add_cells_to_pblock [get_pblocks poly0_1_rx_ns] [get_cells -quiet [list \
          {ys[1].xs[0].msg_txrx[0].north_rx} \
          {ys[1].xs[0].msg_txrx[10].north_rx} \
          {ys[1].xs[0].msg_txrx[11].north_rx} \
          {ys[1].xs[0].msg_txrx[12].north_rx} \
          {ys[1].xs[0].msg_txrx[13].north_rx} \
          {ys[1].xs[0].msg_txrx[14].north_rx} \
          {ys[1].xs[0].msg_txrx[15].north_rx} \
          {ys[1].xs[0].msg_txrx[16].north_rx} \
          {ys[1].xs[0].msg_txrx[17].north_rx} \
          {ys[1].xs[0].msg_txrx[18].north_rx} \
          {ys[1].xs[0].msg_txrx[19].north_rx} \
          {ys[1].xs[0].msg_txrx[1].north_rx} \
          {ys[1].xs[0].msg_txrx[20].north_rx} \
          {ys[1].xs[0].msg_txrx[21].north_rx} \
          {ys[1].xs[0].msg_txrx[22].north_rx} \
          {ys[1].xs[0].msg_txrx[23].north_rx} \
          {ys[1].xs[0].msg_txrx[24].north_rx} \
          {ys[1].xs[0].msg_txrx[25].north_rx} \
          {ys[1].xs[0].msg_txrx[26].north_rx} \
          {ys[1].xs[0].msg_txrx[27].north_rx} \
          {ys[1].xs[0].msg_txrx[28].north_rx} \
          {ys[1].xs[0].msg_txrx[29].north_rx} \
          {ys[1].xs[0].msg_txrx[2].north_rx} \
          {ys[1].xs[0].msg_txrx[30].north_rx} \
          {ys[1].xs[0].msg_txrx[31].north_rx} \
          {ys[1].xs[0].msg_txrx[32].north_rx} \
          {ys[1].xs[0].msg_txrx[33].north_rx} \
          {ys[1].xs[0].msg_txrx[34].north_rx} \
          {ys[1].xs[0].msg_txrx[35].north_rx} \
          {ys[1].xs[0].msg_txrx[3].north_rx} \
          {ys[1].xs[0].msg_txrx[4].north_rx} \
          {ys[1].xs[0].msg_txrx[5].north_rx} \
          {ys[1].xs[0].msg_txrx[6].north_rx} \
          {ys[1].xs[0].msg_txrx[7].north_rx} \
          {ys[1].xs[0].msg_txrx[8].north_rx} \
          {ys[1].xs[0].msg_txrx[9].north_rx}]]
resize_pblock [get_pblocks poly0_1_rx_ns] -add {SLICE_X36Y109:SLICE_X45Y110}
set_property src_info {type:XDC file:1 line:331 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_1_tx_ns
add_cells_to_pblock [get_pblocks poly0_1_tx_ns] [get_cells -quiet [list \
          {ys[1].xs[0].msg_txrx[0].south_tx} \
          {ys[1].xs[0].msg_txrx[10].south_tx} \
          {ys[1].xs[0].msg_txrx[11].south_tx} \
          {ys[1].xs[0].msg_txrx[12].south_tx} \
          {ys[1].xs[0].msg_txrx[13].south_tx} \
          {ys[1].xs[0].msg_txrx[14].south_tx} \
          {ys[1].xs[0].msg_txrx[15].south_tx} \
          {ys[1].xs[0].msg_txrx[16].south_tx} \
          {ys[1].xs[0].msg_txrx[17].south_tx} \
          {ys[1].xs[0].msg_txrx[18].south_tx} \
          {ys[1].xs[0].msg_txrx[19].south_tx} \
          {ys[1].xs[0].msg_txrx[1].south_tx} \
          {ys[1].xs[0].msg_txrx[20].south_tx} \
          {ys[1].xs[0].msg_txrx[21].south_tx} \
          {ys[1].xs[0].msg_txrx[22].south_tx} \
          {ys[1].xs[0].msg_txrx[23].south_tx} \
          {ys[1].xs[0].msg_txrx[24].south_tx} \
          {ys[1].xs[0].msg_txrx[25].south_tx} \
          {ys[1].xs[0].msg_txrx[26].south_tx} \
          {ys[1].xs[0].msg_txrx[27].south_tx} \
          {ys[1].xs[0].msg_txrx[28].south_tx} \
          {ys[1].xs[0].msg_txrx[29].south_tx} \
          {ys[1].xs[0].msg_txrx[2].south_tx} \
          {ys[1].xs[0].msg_txrx[30].south_tx} \
          {ys[1].xs[0].msg_txrx[31].south_tx} \
          {ys[1].xs[0].msg_txrx[32].south_tx} \
          {ys[1].xs[0].msg_txrx[33].south_tx} \
          {ys[1].xs[0].msg_txrx[34].south_tx} \
          {ys[1].xs[0].msg_txrx[35].south_tx} \
          {ys[1].xs[0].msg_txrx[3].south_tx} \
          {ys[1].xs[0].msg_txrx[4].south_tx} \
          {ys[1].xs[0].msg_txrx[5].south_tx} \
          {ys[1].xs[0].msg_txrx[6].south_tx} \
          {ys[1].xs[0].msg_txrx[7].south_tx} \
          {ys[1].xs[0].msg_txrx[8].south_tx} \
          {ys[1].xs[0].msg_txrx[9].south_tx}]]
resize_pblock [get_pblocks poly0_1_tx_ns] -add {SLICE_X36Y88:SLICE_X45Y89}
set_property src_info {type:XDC file:1 line:372 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_2_sw
add_cells_to_pblock [get_pblocks poly0_2_sw] [get_cells -quiet [list {ys[2].xs[0].torus_switch_xy}]]
resize_pblock [get_pblocks poly0_2_sw] -add {SLICE_X36Y127:SLICE_X45Y145}
set_property src_info {type:XDC file:1 line:378 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_2_cli
add_cells_to_pblock [get_pblocks poly0_2_cli] [get_cells -quiet [list {ys[2].xs[0].client_xy}]]
resize_pblock [get_pblocks poly0_2_cli] -add {SLICE_X34Y111:SLICE_X47Y124 SLICE_X26Y111:SLICE_X33Y147}
set_property src_info {type:XDC file:1 line:385 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_2_rx_ew
add_cells_to_pblock [get_pblocks poly0_2_rx_ew] [get_cells -quiet [list \
          {ys[2].xs[0].conns_addr[0].west_rx_addr} \
          {ys[2].xs[0].conns_addr[1].west_rx_addr} \
          {ys[2].xs[0].conns_addr[2].west_rx_addr} \
          {ys[2].xs[0].conns_addr[3].west_rx_addr} \
          {ys[2].xs[0].conns_data[0].west_rx_data} \
          {ys[2].xs[0].conns_data[10].west_rx_data} \
          {ys[2].xs[0].conns_data[11].west_rx_data} \
          {ys[2].xs[0].conns_data[12].west_rx_data} \
          {ys[2].xs[0].conns_data[13].west_rx_data} \
          {ys[2].xs[0].conns_data[14].west_rx_data} \
          {ys[2].xs[0].conns_data[15].west_rx_data} \
          {ys[2].xs[0].conns_data[16].west_rx_data} \
          {ys[2].xs[0].conns_data[17].west_rx_data} \
          {ys[2].xs[0].conns_data[18].west_rx_data} \
          {ys[2].xs[0].conns_data[19].west_rx_data} \
          {ys[2].xs[0].conns_data[1].west_rx_data} \
          {ys[2].xs[0].conns_data[20].west_rx_data} \
          {ys[2].xs[0].conns_data[21].west_rx_data} \
          {ys[2].xs[0].conns_data[22].west_rx_data} \
          {ys[2].xs[0].conns_data[23].west_rx_data} \
          {ys[2].xs[0].conns_data[24].west_rx_data} \
          {ys[2].xs[0].conns_data[25].west_rx_data} \
          {ys[2].xs[0].conns_data[26].west_rx_data} \
          {ys[2].xs[0].conns_data[27].west_rx_data} \
          {ys[2].xs[0].conns_data[28].west_rx_data} \
          {ys[2].xs[0].conns_data[29].west_rx_data} \
          {ys[2].xs[0].conns_data[2].west_rx_data} \
          {ys[2].xs[0].conns_data[30].west_rx_data} \
          {ys[2].xs[0].conns_data[31].west_rx_data} \
          {ys[2].xs[0].conns_data[3].west_rx_data} \
          {ys[2].xs[0].conns_data[4].west_rx_data} \
          {ys[2].xs[0].conns_data[5].west_rx_data} \
          {ys[2].xs[0].conns_data[6].west_rx_data} \
          {ys[2].xs[0].conns_data[7].west_rx_data} \
          {ys[2].xs[0].conns_data[8].west_rx_data} \
          {ys[2].xs[0].conns_data[9].west_rx_data} \
          {ys[2].xs[0].conns_vc_info[0].west_rx_vc} \
          {ys[2].xs[0].conns_vc_info[0].west_tx_g} \
          {ys[2].xs[0].conns_vc_info[1].west_rx_vc} \
          {ys[2].xs[0].conns_vc_info[1].west_tx_g}]]
resize_pblock [get_pblocks poly0_2_rx_ew] -add {SLICE_X34Y125:SLICE_X35Y146}
set_property src_info {type:XDC file:1 line:430 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_2_tx_ew
add_cells_to_pblock [get_pblocks poly0_2_tx_ew] [get_cells -quiet [list \
          {ys[2].xs[0].conns_addr[0].east_tx_addr} \
          {ys[2].xs[0].conns_addr[1].east_tx_addr} \
          {ys[2].xs[0].conns_addr[2].east_tx_addr} \
          {ys[2].xs[0].conns_addr[3].east_tx_addr} \
          {ys[2].xs[0].conns_data[0].east_tx_data} \
          {ys[2].xs[0].conns_data[10].east_tx_data} \
          {ys[2].xs[0].conns_data[11].east_tx_data} \
          {ys[2].xs[0].conns_data[12].east_tx_data} \
          {ys[2].xs[0].conns_data[13].east_tx_data} \
          {ys[2].xs[0].conns_data[14].east_tx_data} \
          {ys[2].xs[0].conns_data[15].east_tx_data} \
          {ys[2].xs[0].conns_data[16].east_tx_data} \
          {ys[2].xs[0].conns_data[17].east_tx_data} \
          {ys[2].xs[0].conns_data[18].east_tx_data} \
          {ys[2].xs[0].conns_data[19].east_tx_data} \
          {ys[2].xs[0].conns_data[1].east_tx_data} \
          {ys[2].xs[0].conns_data[20].east_tx_data} \
          {ys[2].xs[0].conns_data[21].east_tx_data} \
          {ys[2].xs[0].conns_data[22].east_tx_data} \
          {ys[2].xs[0].conns_data[23].east_tx_data} \
          {ys[2].xs[0].conns_data[24].east_tx_data} \
          {ys[2].xs[0].conns_data[25].east_tx_data} \
          {ys[2].xs[0].conns_data[26].east_tx_data} \
          {ys[2].xs[0].conns_data[27].east_tx_data} \
          {ys[2].xs[0].conns_data[28].east_tx_data} \
          {ys[2].xs[0].conns_data[29].east_tx_data} \
          {ys[2].xs[0].conns_data[2].east_tx_data} \
          {ys[2].xs[0].conns_data[30].east_tx_data} \
          {ys[2].xs[0].conns_data[31].east_tx_data} \
          {ys[2].xs[0].conns_data[3].east_tx_data} \
          {ys[2].xs[0].conns_data[4].east_tx_data} \
          {ys[2].xs[0].conns_data[5].east_tx_data} \
          {ys[2].xs[0].conns_data[6].east_tx_data} \
          {ys[2].xs[0].conns_data[7].east_tx_data} \
          {ys[2].xs[0].conns_data[8].east_tx_data} \
          {ys[2].xs[0].conns_data[9].east_tx_data} \
          {ys[2].xs[0].conns_vc_info[0].east_rx_g} \
          {ys[2].xs[0].conns_vc_info[0].east_tx_vc} \
          {ys[2].xs[0].conns_vc_info[1].east_rx_g} \
          {ys[2].xs[0].conns_vc_info[1].east_tx_vc}]]
resize_pblock [get_pblocks poly0_2_tx_ew] -add {SLICE_X46Y125:SLICE_X47Y146}
set_property src_info {type:XDC file:1 line:475 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_2_rx_ns
add_cells_to_pblock [get_pblocks poly0_2_rx_ns] [get_cells -quiet [list \
          {ys[2].xs[0].msg_txrx[0].north_rx} \
          {ys[2].xs[0].msg_txrx[10].north_rx} \
          {ys[2].xs[0].msg_txrx[11].north_rx} \
          {ys[2].xs[0].msg_txrx[12].north_rx} \
          {ys[2].xs[0].msg_txrx[13].north_rx} \
          {ys[2].xs[0].msg_txrx[14].north_rx} \
          {ys[2].xs[0].msg_txrx[15].north_rx} \
          {ys[2].xs[0].msg_txrx[16].north_rx} \
          {ys[2].xs[0].msg_txrx[17].north_rx} \
          {ys[2].xs[0].msg_txrx[18].north_rx} \
          {ys[2].xs[0].msg_txrx[19].north_rx} \
          {ys[2].xs[0].msg_txrx[1].north_rx} \
          {ys[2].xs[0].msg_txrx[20].north_rx} \
          {ys[2].xs[0].msg_txrx[21].north_rx} \
          {ys[2].xs[0].msg_txrx[22].north_rx} \
          {ys[2].xs[0].msg_txrx[23].north_rx} \
          {ys[2].xs[0].msg_txrx[24].north_rx} \
          {ys[2].xs[0].msg_txrx[25].north_rx} \
          {ys[2].xs[0].msg_txrx[26].north_rx} \
          {ys[2].xs[0].msg_txrx[27].north_rx} \
          {ys[2].xs[0].msg_txrx[28].north_rx} \
          {ys[2].xs[0].msg_txrx[29].north_rx} \
          {ys[2].xs[0].msg_txrx[2].north_rx} \
          {ys[2].xs[0].msg_txrx[30].north_rx} \
          {ys[2].xs[0].msg_txrx[31].north_rx} \
          {ys[2].xs[0].msg_txrx[32].north_rx} \
          {ys[2].xs[0].msg_txrx[33].north_rx} \
          {ys[2].xs[0].msg_txrx[34].north_rx} \
          {ys[2].xs[0].msg_txrx[35].north_rx} \
          {ys[2].xs[0].msg_txrx[3].north_rx} \
          {ys[2].xs[0].msg_txrx[4].north_rx} \
          {ys[2].xs[0].msg_txrx[5].north_rx} \
          {ys[2].xs[0].msg_txrx[6].north_rx} \
          {ys[2].xs[0].msg_txrx[7].north_rx} \
          {ys[2].xs[0].msg_txrx[8].north_rx} \
          {ys[2].xs[0].msg_txrx[9].north_rx}]]
resize_pblock [get_pblocks poly0_2_rx_ns] -add {SLICE_X36Y125:SLICE_X45Y126}
set_property src_info {type:XDC file:1 line:516 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_2_tx_ns
add_cells_to_pblock [get_pblocks poly0_2_tx_ns] [get_cells -quiet [list \
          {ys[2].xs[0].msg_txrx[0].south_tx} \
          {ys[2].xs[0].msg_txrx[10].south_tx} \
          {ys[2].xs[0].msg_txrx[11].south_tx} \
          {ys[2].xs[0].msg_txrx[12].south_tx} \
          {ys[2].xs[0].msg_txrx[13].south_tx} \
          {ys[2].xs[0].msg_txrx[14].south_tx} \
          {ys[2].xs[0].msg_txrx[15].south_tx} \
          {ys[2].xs[0].msg_txrx[16].south_tx} \
          {ys[2].xs[0].msg_txrx[17].south_tx} \
          {ys[2].xs[0].msg_txrx[18].south_tx} \
          {ys[2].xs[0].msg_txrx[19].south_tx} \
          {ys[2].xs[0].msg_txrx[1].south_tx} \
          {ys[2].xs[0].msg_txrx[20].south_tx} \
          {ys[2].xs[0].msg_txrx[21].south_tx} \
          {ys[2].xs[0].msg_txrx[22].south_tx} \
          {ys[2].xs[0].msg_txrx[23].south_tx} \
          {ys[2].xs[0].msg_txrx[24].south_tx} \
          {ys[2].xs[0].msg_txrx[25].south_tx} \
          {ys[2].xs[0].msg_txrx[26].south_tx} \
          {ys[2].xs[0].msg_txrx[27].south_tx} \
          {ys[2].xs[0].msg_txrx[28].south_tx} \
          {ys[2].xs[0].msg_txrx[29].south_tx} \
          {ys[2].xs[0].msg_txrx[2].south_tx} \
          {ys[2].xs[0].msg_txrx[30].south_tx} \
          {ys[2].xs[0].msg_txrx[31].south_tx} \
          {ys[2].xs[0].msg_txrx[32].south_tx} \
          {ys[2].xs[0].msg_txrx[33].south_tx} \
          {ys[2].xs[0].msg_txrx[34].south_tx} \
          {ys[2].xs[0].msg_txrx[35].south_tx} \
          {ys[2].xs[0].msg_txrx[3].south_tx} \
          {ys[2].xs[0].msg_txrx[4].south_tx} \
          {ys[2].xs[0].msg_txrx[5].south_tx} \
          {ys[2].xs[0].msg_txrx[6].south_tx} \
          {ys[2].xs[0].msg_txrx[7].south_tx} \
          {ys[2].xs[0].msg_txrx[8].south_tx} \
          {ys[2].xs[0].msg_txrx[9].south_tx}]]
resize_pblock [get_pblocks poly0_2_tx_ns] -add {SLICE_X36Y146:SLICE_X45Y147}
set_property src_info {type:XDC file:1 line:557 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_3_sw
add_cells_to_pblock [get_pblocks poly0_3_sw] [get_cells -quiet [list {ys[3].xs[0].torus_switch_xy}]]
resize_pblock [get_pblocks poly0_3_sw] -add {SLICE_X36Y53:SLICE_X45Y71}
set_property src_info {type:XDC file:1 line:563 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_3_cli
add_cells_to_pblock [get_pblocks poly0_3_cli] [get_cells -quiet [list {ys[3].xs[0].client_xy}]]
resize_pblock [get_pblocks poly0_3_cli] -add {SLICE_X34Y37:SLICE_X47Y50 SLICE_X26Y37:SLICE_X33Y73}
set_property src_info {type:XDC file:1 line:570 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_3_rx_ew
add_cells_to_pblock [get_pblocks poly0_3_rx_ew] [get_cells -quiet [list \
          {ys[3].xs[0].conns_addr[0].west_rx_addr} \
          {ys[3].xs[0].conns_addr[1].west_rx_addr} \
          {ys[3].xs[0].conns_addr[2].west_rx_addr} \
          {ys[3].xs[0].conns_addr[3].west_rx_addr} \
          {ys[3].xs[0].conns_data[0].west_rx_data} \
          {ys[3].xs[0].conns_data[10].west_rx_data} \
          {ys[3].xs[0].conns_data[11].west_rx_data} \
          {ys[3].xs[0].conns_data[12].west_rx_data} \
          {ys[3].xs[0].conns_data[13].west_rx_data} \
          {ys[3].xs[0].conns_data[14].west_rx_data} \
          {ys[3].xs[0].conns_data[15].west_rx_data} \
          {ys[3].xs[0].conns_data[16].west_rx_data} \
          {ys[3].xs[0].conns_data[17].west_rx_data} \
          {ys[3].xs[0].conns_data[18].west_rx_data} \
          {ys[3].xs[0].conns_data[19].west_rx_data} \
          {ys[3].xs[0].conns_data[1].west_rx_data} \
          {ys[3].xs[0].conns_data[20].west_rx_data} \
          {ys[3].xs[0].conns_data[21].west_rx_data} \
          {ys[3].xs[0].conns_data[22].west_rx_data} \
          {ys[3].xs[0].conns_data[23].west_rx_data} \
          {ys[3].xs[0].conns_data[24].west_rx_data} \
          {ys[3].xs[0].conns_data[25].west_rx_data} \
          {ys[3].xs[0].conns_data[26].west_rx_data} \
          {ys[3].xs[0].conns_data[27].west_rx_data} \
          {ys[3].xs[0].conns_data[28].west_rx_data} \
          {ys[3].xs[0].conns_data[29].west_rx_data} \
          {ys[3].xs[0].conns_data[2].west_rx_data} \
          {ys[3].xs[0].conns_data[30].west_rx_data} \
          {ys[3].xs[0].conns_data[31].west_rx_data} \
          {ys[3].xs[0].conns_data[3].west_rx_data} \
          {ys[3].xs[0].conns_data[4].west_rx_data} \
          {ys[3].xs[0].conns_data[5].west_rx_data} \
          {ys[3].xs[0].conns_data[6].west_rx_data} \
          {ys[3].xs[0].conns_data[7].west_rx_data} \
          {ys[3].xs[0].conns_data[8].west_rx_data} \
          {ys[3].xs[0].conns_data[9].west_rx_data} \
          {ys[3].xs[0].conns_vc_info[0].west_rx_vc} \
          {ys[3].xs[0].conns_vc_info[0].west_tx_g} \
          {ys[3].xs[0].conns_vc_info[1].west_rx_vc} \
          {ys[3].xs[0].conns_vc_info[1].west_tx_g}]]
resize_pblock [get_pblocks poly0_3_rx_ew] -add {SLICE_X34Y51:SLICE_X35Y72}
set_property src_info {type:XDC file:1 line:615 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_3_tx_ew
add_cells_to_pblock [get_pblocks poly0_3_tx_ew] [get_cells -quiet [list \
          {ys[3].xs[0].conns_addr[0].east_tx_addr} \
          {ys[3].xs[0].conns_addr[1].east_tx_addr} \
          {ys[3].xs[0].conns_addr[2].east_tx_addr} \
          {ys[3].xs[0].conns_addr[3].east_tx_addr} \
          {ys[3].xs[0].conns_data[0].east_tx_data} \
          {ys[3].xs[0].conns_data[10].east_tx_data} \
          {ys[3].xs[0].conns_data[11].east_tx_data} \
          {ys[3].xs[0].conns_data[12].east_tx_data} \
          {ys[3].xs[0].conns_data[13].east_tx_data} \
          {ys[3].xs[0].conns_data[14].east_tx_data} \
          {ys[3].xs[0].conns_data[15].east_tx_data} \
          {ys[3].xs[0].conns_data[16].east_tx_data} \
          {ys[3].xs[0].conns_data[17].east_tx_data} \
          {ys[3].xs[0].conns_data[18].east_tx_data} \
          {ys[3].xs[0].conns_data[19].east_tx_data} \
          {ys[3].xs[0].conns_data[1].east_tx_data} \
          {ys[3].xs[0].conns_data[20].east_tx_data} \
          {ys[3].xs[0].conns_data[21].east_tx_data} \
          {ys[3].xs[0].conns_data[22].east_tx_data} \
          {ys[3].xs[0].conns_data[23].east_tx_data} \
          {ys[3].xs[0].conns_data[24].east_tx_data} \
          {ys[3].xs[0].conns_data[25].east_tx_data} \
          {ys[3].xs[0].conns_data[26].east_tx_data} \
          {ys[3].xs[0].conns_data[27].east_tx_data} \
          {ys[3].xs[0].conns_data[28].east_tx_data} \
          {ys[3].xs[0].conns_data[29].east_tx_data} \
          {ys[3].xs[0].conns_data[2].east_tx_data} \
          {ys[3].xs[0].conns_data[30].east_tx_data} \
          {ys[3].xs[0].conns_data[31].east_tx_data} \
          {ys[3].xs[0].conns_data[3].east_tx_data} \
          {ys[3].xs[0].conns_data[4].east_tx_data} \
          {ys[3].xs[0].conns_data[5].east_tx_data} \
          {ys[3].xs[0].conns_data[6].east_tx_data} \
          {ys[3].xs[0].conns_data[7].east_tx_data} \
          {ys[3].xs[0].conns_data[8].east_tx_data} \
          {ys[3].xs[0].conns_data[9].east_tx_data} \
          {ys[3].xs[0].conns_vc_info[0].east_rx_g} \
          {ys[3].xs[0].conns_vc_info[0].east_tx_vc} \
          {ys[3].xs[0].conns_vc_info[1].east_rx_g} \
          {ys[3].xs[0].conns_vc_info[1].east_tx_vc}]]
resize_pblock [get_pblocks poly0_3_tx_ew] -add {SLICE_X46Y51:SLICE_X47Y72}
set_property src_info {type:XDC file:1 line:660 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_3_rx_ns
add_cells_to_pblock [get_pblocks poly0_3_rx_ns] [get_cells -quiet [list \
          {ys[3].xs[0].msg_txrx[0].north_rx} \
          {ys[3].xs[0].msg_txrx[10].north_rx} \
          {ys[3].xs[0].msg_txrx[11].north_rx} \
          {ys[3].xs[0].msg_txrx[12].north_rx} \
          {ys[3].xs[0].msg_txrx[13].north_rx} \
          {ys[3].xs[0].msg_txrx[14].north_rx} \
          {ys[3].xs[0].msg_txrx[15].north_rx} \
          {ys[3].xs[0].msg_txrx[16].north_rx} \
          {ys[3].xs[0].msg_txrx[17].north_rx} \
          {ys[3].xs[0].msg_txrx[18].north_rx} \
          {ys[3].xs[0].msg_txrx[19].north_rx} \
          {ys[3].xs[0].msg_txrx[1].north_rx} \
          {ys[3].xs[0].msg_txrx[20].north_rx} \
          {ys[3].xs[0].msg_txrx[21].north_rx} \
          {ys[3].xs[0].msg_txrx[22].north_rx} \
          {ys[3].xs[0].msg_txrx[23].north_rx} \
          {ys[3].xs[0].msg_txrx[24].north_rx} \
          {ys[3].xs[0].msg_txrx[25].north_rx} \
          {ys[3].xs[0].msg_txrx[26].north_rx} \
          {ys[3].xs[0].msg_txrx[27].north_rx} \
          {ys[3].xs[0].msg_txrx[28].north_rx} \
          {ys[3].xs[0].msg_txrx[29].north_rx} \
          {ys[3].xs[0].msg_txrx[2].north_rx} \
          {ys[3].xs[0].msg_txrx[30].north_rx} \
          {ys[3].xs[0].msg_txrx[31].north_rx} \
          {ys[3].xs[0].msg_txrx[32].north_rx} \
          {ys[3].xs[0].msg_txrx[33].north_rx} \
          {ys[3].xs[0].msg_txrx[34].north_rx} \
          {ys[3].xs[0].msg_txrx[35].north_rx} \
          {ys[3].xs[0].msg_txrx[3].north_rx} \
          {ys[3].xs[0].msg_txrx[4].north_rx} \
          {ys[3].xs[0].msg_txrx[5].north_rx} \
          {ys[3].xs[0].msg_txrx[6].north_rx} \
          {ys[3].xs[0].msg_txrx[7].north_rx} \
          {ys[3].xs[0].msg_txrx[8].north_rx} \
          {ys[3].xs[0].msg_txrx[9].north_rx}]]
resize_pblock [get_pblocks poly0_3_rx_ns] -add {SLICE_X36Y51:SLICE_X45Y52}
set_property src_info {type:XDC file:1 line:701 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly0_3_tx_ns
add_cells_to_pblock [get_pblocks poly0_3_tx_ns] [get_cells -quiet [list \
          {ys[3].xs[0].msg_txrx[0].south_tx} \
          {ys[3].xs[0].msg_txrx[10].south_tx} \
          {ys[3].xs[0].msg_txrx[11].south_tx} \
          {ys[3].xs[0].msg_txrx[12].south_tx} \
          {ys[3].xs[0].msg_txrx[13].south_tx} \
          {ys[3].xs[0].msg_txrx[14].south_tx} \
          {ys[3].xs[0].msg_txrx[15].south_tx} \
          {ys[3].xs[0].msg_txrx[16].south_tx} \
          {ys[3].xs[0].msg_txrx[17].south_tx} \
          {ys[3].xs[0].msg_txrx[18].south_tx} \
          {ys[3].xs[0].msg_txrx[19].south_tx} \
          {ys[3].xs[0].msg_txrx[1].south_tx} \
          {ys[3].xs[0].msg_txrx[20].south_tx} \
          {ys[3].xs[0].msg_txrx[21].south_tx} \
          {ys[3].xs[0].msg_txrx[22].south_tx} \
          {ys[3].xs[0].msg_txrx[23].south_tx} \
          {ys[3].xs[0].msg_txrx[24].south_tx} \
          {ys[3].xs[0].msg_txrx[25].south_tx} \
          {ys[3].xs[0].msg_txrx[26].south_tx} \
          {ys[3].xs[0].msg_txrx[27].south_tx} \
          {ys[3].xs[0].msg_txrx[28].south_tx} \
          {ys[3].xs[0].msg_txrx[29].south_tx} \
          {ys[3].xs[0].msg_txrx[2].south_tx} \
          {ys[3].xs[0].msg_txrx[30].south_tx} \
          {ys[3].xs[0].msg_txrx[31].south_tx} \
          {ys[3].xs[0].msg_txrx[32].south_tx} \
          {ys[3].xs[0].msg_txrx[33].south_tx} \
          {ys[3].xs[0].msg_txrx[34].south_tx} \
          {ys[3].xs[0].msg_txrx[35].south_tx} \
          {ys[3].xs[0].msg_txrx[3].south_tx} \
          {ys[3].xs[0].msg_txrx[4].south_tx} \
          {ys[3].xs[0].msg_txrx[5].south_tx} \
          {ys[3].xs[0].msg_txrx[6].south_tx} \
          {ys[3].xs[0].msg_txrx[7].south_tx} \
          {ys[3].xs[0].msg_txrx[8].south_tx} \
          {ys[3].xs[0].msg_txrx[9].south_tx}]]
resize_pblock [get_pblocks poly0_3_tx_ns] -add {SLICE_X36Y72:SLICE_X45Y73}
set_property src_info {type:XDC file:1 line:742 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_0_sw
add_cells_to_pblock [get_pblocks poly1_0_sw] [get_cells -quiet [list {ys[0].xs[1].torus_switch_xy}]]
resize_pblock [get_pblocks poly1_0_sw] -add {SLICE_X80Y16:SLICE_X89Y34}
set_property src_info {type:XDC file:1 line:748 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_0_cli
add_cells_to_pblock [get_pblocks poly1_0_cli] [get_cells -quiet [list {ys[0].xs[1].client_xy}]]
resize_pblock [get_pblocks poly1_0_cli] -add {SLICE_X78Y0:SLICE_X91Y13 SLICE_X70Y0:SLICE_X77Y36}
set_property src_info {type:XDC file:1 line:755 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_0_rx_ew
add_cells_to_pblock [get_pblocks poly1_0_rx_ew] [get_cells -quiet [list \
          {ys[0].xs[1].conns_addr[0].west_rx_addr} \
          {ys[0].xs[1].conns_addr[1].west_rx_addr} \
          {ys[0].xs[1].conns_addr[2].west_rx_addr} \
          {ys[0].xs[1].conns_addr[3].west_rx_addr} \
          {ys[0].xs[1].conns_data[0].west_rx_data} \
          {ys[0].xs[1].conns_data[10].west_rx_data} \
          {ys[0].xs[1].conns_data[11].west_rx_data} \
          {ys[0].xs[1].conns_data[12].west_rx_data} \
          {ys[0].xs[1].conns_data[13].west_rx_data} \
          {ys[0].xs[1].conns_data[14].west_rx_data} \
          {ys[0].xs[1].conns_data[15].west_rx_data} \
          {ys[0].xs[1].conns_data[16].west_rx_data} \
          {ys[0].xs[1].conns_data[17].west_rx_data} \
          {ys[0].xs[1].conns_data[18].west_rx_data} \
          {ys[0].xs[1].conns_data[19].west_rx_data} \
          {ys[0].xs[1].conns_data[1].west_rx_data} \
          {ys[0].xs[1].conns_data[20].west_rx_data} \
          {ys[0].xs[1].conns_data[21].west_rx_data} \
          {ys[0].xs[1].conns_data[22].west_rx_data} \
          {ys[0].xs[1].conns_data[23].west_rx_data} \
          {ys[0].xs[1].conns_data[24].west_rx_data} \
          {ys[0].xs[1].conns_data[25].west_rx_data} \
          {ys[0].xs[1].conns_data[26].west_rx_data} \
          {ys[0].xs[1].conns_data[27].west_rx_data} \
          {ys[0].xs[1].conns_data[28].west_rx_data} \
          {ys[0].xs[1].conns_data[29].west_rx_data} \
          {ys[0].xs[1].conns_data[2].west_rx_data} \
          {ys[0].xs[1].conns_data[30].west_rx_data} \
          {ys[0].xs[1].conns_data[31].west_rx_data} \
          {ys[0].xs[1].conns_data[3].west_rx_data} \
          {ys[0].xs[1].conns_data[4].west_rx_data} \
          {ys[0].xs[1].conns_data[5].west_rx_data} \
          {ys[0].xs[1].conns_data[6].west_rx_data} \
          {ys[0].xs[1].conns_data[7].west_rx_data} \
          {ys[0].xs[1].conns_data[8].west_rx_data} \
          {ys[0].xs[1].conns_data[9].west_rx_data} \
          {ys[0].xs[1].conns_vc_info[0].west_rx_vc} \
          {ys[0].xs[1].conns_vc_info[0].west_tx_g} \
          {ys[0].xs[1].conns_vc_info[1].west_rx_vc} \
          {ys[0].xs[1].conns_vc_info[1].west_tx_g}]]
resize_pblock [get_pblocks poly1_0_rx_ew] -add {SLICE_X78Y14:SLICE_X79Y35}
set_property src_info {type:XDC file:1 line:800 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_0_tx_ew
add_cells_to_pblock [get_pblocks poly1_0_tx_ew] [get_cells -quiet [list \
          {ys[0].xs[1].conns_addr[0].east_tx_addr} \
          {ys[0].xs[1].conns_addr[1].east_tx_addr} \
          {ys[0].xs[1].conns_addr[2].east_tx_addr} \
          {ys[0].xs[1].conns_addr[3].east_tx_addr} \
          {ys[0].xs[1].conns_data[0].east_tx_data} \
          {ys[0].xs[1].conns_data[10].east_tx_data} \
          {ys[0].xs[1].conns_data[11].east_tx_data} \
          {ys[0].xs[1].conns_data[12].east_tx_data} \
          {ys[0].xs[1].conns_data[13].east_tx_data} \
          {ys[0].xs[1].conns_data[14].east_tx_data} \
          {ys[0].xs[1].conns_data[15].east_tx_data} \
          {ys[0].xs[1].conns_data[16].east_tx_data} \
          {ys[0].xs[1].conns_data[17].east_tx_data} \
          {ys[0].xs[1].conns_data[18].east_tx_data} \
          {ys[0].xs[1].conns_data[19].east_tx_data} \
          {ys[0].xs[1].conns_data[1].east_tx_data} \
          {ys[0].xs[1].conns_data[20].east_tx_data} \
          {ys[0].xs[1].conns_data[21].east_tx_data} \
          {ys[0].xs[1].conns_data[22].east_tx_data} \
          {ys[0].xs[1].conns_data[23].east_tx_data} \
          {ys[0].xs[1].conns_data[24].east_tx_data} \
          {ys[0].xs[1].conns_data[25].east_tx_data} \
          {ys[0].xs[1].conns_data[26].east_tx_data} \
          {ys[0].xs[1].conns_data[27].east_tx_data} \
          {ys[0].xs[1].conns_data[28].east_tx_data} \
          {ys[0].xs[1].conns_data[29].east_tx_data} \
          {ys[0].xs[1].conns_data[2].east_tx_data} \
          {ys[0].xs[1].conns_data[30].east_tx_data} \
          {ys[0].xs[1].conns_data[31].east_tx_data} \
          {ys[0].xs[1].conns_data[3].east_tx_data} \
          {ys[0].xs[1].conns_data[4].east_tx_data} \
          {ys[0].xs[1].conns_data[5].east_tx_data} \
          {ys[0].xs[1].conns_data[6].east_tx_data} \
          {ys[0].xs[1].conns_data[7].east_tx_data} \
          {ys[0].xs[1].conns_data[8].east_tx_data} \
          {ys[0].xs[1].conns_data[9].east_tx_data} \
          {ys[0].xs[1].conns_vc_info[0].east_rx_g} \
          {ys[0].xs[1].conns_vc_info[0].east_tx_vc} \
          {ys[0].xs[1].conns_vc_info[1].east_rx_g} \
          {ys[0].xs[1].conns_vc_info[1].east_tx_vc}]]
resize_pblock [get_pblocks poly1_0_tx_ew] -add {SLICE_X90Y14:SLICE_X91Y35}
set_property src_info {type:XDC file:1 line:845 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_0_rx_ns
add_cells_to_pblock [get_pblocks poly1_0_rx_ns] [get_cells -quiet [list \
          {ys[0].xs[1].msg_txrx[0].north_rx} \
          {ys[0].xs[1].msg_txrx[10].north_rx} \
          {ys[0].xs[1].msg_txrx[11].north_rx} \
          {ys[0].xs[1].msg_txrx[12].north_rx} \
          {ys[0].xs[1].msg_txrx[13].north_rx} \
          {ys[0].xs[1].msg_txrx[14].north_rx} \
          {ys[0].xs[1].msg_txrx[15].north_rx} \
          {ys[0].xs[1].msg_txrx[16].north_rx} \
          {ys[0].xs[1].msg_txrx[17].north_rx} \
          {ys[0].xs[1].msg_txrx[18].north_rx} \
          {ys[0].xs[1].msg_txrx[19].north_rx} \
          {ys[0].xs[1].msg_txrx[1].north_rx} \
          {ys[0].xs[1].msg_txrx[20].north_rx} \
          {ys[0].xs[1].msg_txrx[21].north_rx} \
          {ys[0].xs[1].msg_txrx[22].north_rx} \
          {ys[0].xs[1].msg_txrx[23].north_rx} \
          {ys[0].xs[1].msg_txrx[24].north_rx} \
          {ys[0].xs[1].msg_txrx[25].north_rx} \
          {ys[0].xs[1].msg_txrx[26].north_rx} \
          {ys[0].xs[1].msg_txrx[27].north_rx} \
          {ys[0].xs[1].msg_txrx[28].north_rx} \
          {ys[0].xs[1].msg_txrx[29].north_rx} \
          {ys[0].xs[1].msg_txrx[2].north_rx} \
          {ys[0].xs[1].msg_txrx[30].north_rx} \
          {ys[0].xs[1].msg_txrx[31].north_rx} \
          {ys[0].xs[1].msg_txrx[32].north_rx} \
          {ys[0].xs[1].msg_txrx[33].north_rx} \
          {ys[0].xs[1].msg_txrx[34].north_rx} \
          {ys[0].xs[1].msg_txrx[35].north_rx} \
          {ys[0].xs[1].msg_txrx[3].north_rx} \
          {ys[0].xs[1].msg_txrx[4].north_rx} \
          {ys[0].xs[1].msg_txrx[5].north_rx} \
          {ys[0].xs[1].msg_txrx[6].north_rx} \
          {ys[0].xs[1].msg_txrx[7].north_rx} \
          {ys[0].xs[1].msg_txrx[8].north_rx} \
          {ys[0].xs[1].msg_txrx[9].north_rx}]]
resize_pblock [get_pblocks poly1_0_rx_ns] -add {SLICE_X80Y35:SLICE_X89Y36}
set_property src_info {type:XDC file:1 line:886 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_0_tx_ns
add_cells_to_pblock [get_pblocks poly1_0_tx_ns] [get_cells -quiet [list \
          {ys[0].xs[1].msg_txrx[0].south_tx} \
          {ys[0].xs[1].msg_txrx[10].south_tx} \
          {ys[0].xs[1].msg_txrx[11].south_tx} \
          {ys[0].xs[1].msg_txrx[12].south_tx} \
          {ys[0].xs[1].msg_txrx[13].south_tx} \
          {ys[0].xs[1].msg_txrx[14].south_tx} \
          {ys[0].xs[1].msg_txrx[15].south_tx} \
          {ys[0].xs[1].msg_txrx[16].south_tx} \
          {ys[0].xs[1].msg_txrx[17].south_tx} \
          {ys[0].xs[1].msg_txrx[18].south_tx} \
          {ys[0].xs[1].msg_txrx[19].south_tx} \
          {ys[0].xs[1].msg_txrx[1].south_tx} \
          {ys[0].xs[1].msg_txrx[20].south_tx} \
          {ys[0].xs[1].msg_txrx[21].south_tx} \
          {ys[0].xs[1].msg_txrx[22].south_tx} \
          {ys[0].xs[1].msg_txrx[23].south_tx} \
          {ys[0].xs[1].msg_txrx[24].south_tx} \
          {ys[0].xs[1].msg_txrx[25].south_tx} \
          {ys[0].xs[1].msg_txrx[26].south_tx} \
          {ys[0].xs[1].msg_txrx[27].south_tx} \
          {ys[0].xs[1].msg_txrx[28].south_tx} \
          {ys[0].xs[1].msg_txrx[29].south_tx} \
          {ys[0].xs[1].msg_txrx[2].south_tx} \
          {ys[0].xs[1].msg_txrx[30].south_tx} \
          {ys[0].xs[1].msg_txrx[31].south_tx} \
          {ys[0].xs[1].msg_txrx[32].south_tx} \
          {ys[0].xs[1].msg_txrx[33].south_tx} \
          {ys[0].xs[1].msg_txrx[34].south_tx} \
          {ys[0].xs[1].msg_txrx[35].south_tx} \
          {ys[0].xs[1].msg_txrx[3].south_tx} \
          {ys[0].xs[1].msg_txrx[4].south_tx} \
          {ys[0].xs[1].msg_txrx[5].south_tx} \
          {ys[0].xs[1].msg_txrx[6].south_tx} \
          {ys[0].xs[1].msg_txrx[7].south_tx} \
          {ys[0].xs[1].msg_txrx[8].south_tx} \
          {ys[0].xs[1].msg_txrx[9].south_tx}]]
resize_pblock [get_pblocks poly1_0_tx_ns] -add {SLICE_X80Y14:SLICE_X89Y15}
set_property src_info {type:XDC file:1 line:927 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_1_sw
add_cells_to_pblock [get_pblocks poly1_1_sw] [get_cells -quiet [list {ys[1].xs[1].torus_switch_xy}]]
resize_pblock [get_pblocks poly1_1_sw] -add {SLICE_X80Y90:SLICE_X89Y108}
set_property src_info {type:XDC file:1 line:933 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_1_cli
add_cells_to_pblock [get_pblocks poly1_1_cli] [get_cells -quiet [list {ys[1].xs[1].client_xy}]]
resize_pblock [get_pblocks poly1_1_cli] -add {SLICE_X80Y74:SLICE_X91Y87}
set_property src_info {type:XDC file:1 line:940 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_1_rx_ew
add_cells_to_pblock [get_pblocks poly1_1_rx_ew] [get_cells -quiet [list \
          {ys[1].xs[1].conns_addr[0].west_rx_addr} \
          {ys[1].xs[1].conns_addr[1].west_rx_addr} \
          {ys[1].xs[1].conns_addr[2].west_rx_addr} \
          {ys[1].xs[1].conns_addr[3].west_rx_addr} \
          {ys[1].xs[1].conns_data[0].west_rx_data} \
          {ys[1].xs[1].conns_data[10].west_rx_data} \
          {ys[1].xs[1].conns_data[11].west_rx_data} \
          {ys[1].xs[1].conns_data[12].west_rx_data} \
          {ys[1].xs[1].conns_data[13].west_rx_data} \
          {ys[1].xs[1].conns_data[14].west_rx_data} \
          {ys[1].xs[1].conns_data[15].west_rx_data} \
          {ys[1].xs[1].conns_data[16].west_rx_data} \
          {ys[1].xs[1].conns_data[17].west_rx_data} \
          {ys[1].xs[1].conns_data[18].west_rx_data} \
          {ys[1].xs[1].conns_data[19].west_rx_data} \
          {ys[1].xs[1].conns_data[1].west_rx_data} \
          {ys[1].xs[1].conns_data[20].west_rx_data} \
          {ys[1].xs[1].conns_data[21].west_rx_data} \
          {ys[1].xs[1].conns_data[22].west_rx_data} \
          {ys[1].xs[1].conns_data[23].west_rx_data} \
          {ys[1].xs[1].conns_data[24].west_rx_data} \
          {ys[1].xs[1].conns_data[25].west_rx_data} \
          {ys[1].xs[1].conns_data[26].west_rx_data} \
          {ys[1].xs[1].conns_data[27].west_rx_data} \
          {ys[1].xs[1].conns_data[28].west_rx_data} \
          {ys[1].xs[1].conns_data[29].west_rx_data} \
          {ys[1].xs[1].conns_data[2].west_rx_data} \
          {ys[1].xs[1].conns_data[30].west_rx_data} \
          {ys[1].xs[1].conns_data[31].west_rx_data} \
          {ys[1].xs[1].conns_data[3].west_rx_data} \
          {ys[1].xs[1].conns_data[4].west_rx_data} \
          {ys[1].xs[1].conns_data[5].west_rx_data} \
          {ys[1].xs[1].conns_data[6].west_rx_data} \
          {ys[1].xs[1].conns_data[7].west_rx_data} \
          {ys[1].xs[1].conns_data[8].west_rx_data} \
          {ys[1].xs[1].conns_data[9].west_rx_data} \
          {ys[1].xs[1].conns_vc_info[0].west_rx_vc} \
          {ys[1].xs[1].conns_vc_info[0].west_tx_g} \
          {ys[1].xs[1].conns_vc_info[1].west_rx_vc} \
          {ys[1].xs[1].conns_vc_info[1].west_tx_g}]]
set_property src_info {type:XDC file:1 line:985 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_1_tx_ew
add_cells_to_pblock [get_pblocks poly1_1_tx_ew] [get_cells -quiet [list \
          {ys[1].xs[1].conns_addr[0].east_tx_addr} \
          {ys[1].xs[1].conns_addr[1].east_tx_addr} \
          {ys[1].xs[1].conns_addr[2].east_tx_addr} \
          {ys[1].xs[1].conns_addr[3].east_tx_addr} \
          {ys[1].xs[1].conns_data[0].east_tx_data} \
          {ys[1].xs[1].conns_data[10].east_tx_data} \
          {ys[1].xs[1].conns_data[11].east_tx_data} \
          {ys[1].xs[1].conns_data[12].east_tx_data} \
          {ys[1].xs[1].conns_data[13].east_tx_data} \
          {ys[1].xs[1].conns_data[14].east_tx_data} \
          {ys[1].xs[1].conns_data[15].east_tx_data} \
          {ys[1].xs[1].conns_data[16].east_tx_data} \
          {ys[1].xs[1].conns_data[17].east_tx_data} \
          {ys[1].xs[1].conns_data[18].east_tx_data} \
          {ys[1].xs[1].conns_data[19].east_tx_data} \
          {ys[1].xs[1].conns_data[1].east_tx_data} \
          {ys[1].xs[1].conns_data[20].east_tx_data} \
          {ys[1].xs[1].conns_data[21].east_tx_data} \
          {ys[1].xs[1].conns_data[22].east_tx_data} \
          {ys[1].xs[1].conns_data[23].east_tx_data} \
          {ys[1].xs[1].conns_data[24].east_tx_data} \
          {ys[1].xs[1].conns_data[25].east_tx_data} \
          {ys[1].xs[1].conns_data[26].east_tx_data} \
          {ys[1].xs[1].conns_data[27].east_tx_data} \
          {ys[1].xs[1].conns_data[28].east_tx_data} \
          {ys[1].xs[1].conns_data[29].east_tx_data} \
          {ys[1].xs[1].conns_data[2].east_tx_data} \
          {ys[1].xs[1].conns_data[30].east_tx_data} \
          {ys[1].xs[1].conns_data[31].east_tx_data} \
          {ys[1].xs[1].conns_data[3].east_tx_data} \
          {ys[1].xs[1].conns_data[4].east_tx_data} \
          {ys[1].xs[1].conns_data[5].east_tx_data} \
          {ys[1].xs[1].conns_data[6].east_tx_data} \
          {ys[1].xs[1].conns_data[7].east_tx_data} \
          {ys[1].xs[1].conns_data[8].east_tx_data} \
          {ys[1].xs[1].conns_data[9].east_tx_data} \
          {ys[1].xs[1].conns_vc_info[0].east_rx_g} \
          {ys[1].xs[1].conns_vc_info[0].east_tx_vc} \
          {ys[1].xs[1].conns_vc_info[1].east_rx_g} \
          {ys[1].xs[1].conns_vc_info[1].east_tx_vc}]]
resize_pblock [get_pblocks poly1_1_tx_ew] -add {SLICE_X90Y88:SLICE_X91Y109}
set_property src_info {type:XDC file:1 line:1030 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_1_rx_ns
add_cells_to_pblock [get_pblocks poly1_1_rx_ns] [get_cells -quiet [list \
          {ys[1].xs[1].msg_txrx[0].north_rx} \
          {ys[1].xs[1].msg_txrx[10].north_rx} \
          {ys[1].xs[1].msg_txrx[11].north_rx} \
          {ys[1].xs[1].msg_txrx[12].north_rx} \
          {ys[1].xs[1].msg_txrx[13].north_rx} \
          {ys[1].xs[1].msg_txrx[14].north_rx} \
          {ys[1].xs[1].msg_txrx[15].north_rx} \
          {ys[1].xs[1].msg_txrx[16].north_rx} \
          {ys[1].xs[1].msg_txrx[17].north_rx} \
          {ys[1].xs[1].msg_txrx[18].north_rx} \
          {ys[1].xs[1].msg_txrx[19].north_rx} \
          {ys[1].xs[1].msg_txrx[1].north_rx} \
          {ys[1].xs[1].msg_txrx[20].north_rx} \
          {ys[1].xs[1].msg_txrx[21].north_rx} \
          {ys[1].xs[1].msg_txrx[22].north_rx} \
          {ys[1].xs[1].msg_txrx[23].north_rx} \
          {ys[1].xs[1].msg_txrx[24].north_rx} \
          {ys[1].xs[1].msg_txrx[25].north_rx} \
          {ys[1].xs[1].msg_txrx[26].north_rx} \
          {ys[1].xs[1].msg_txrx[27].north_rx} \
          {ys[1].xs[1].msg_txrx[28].north_rx} \
          {ys[1].xs[1].msg_txrx[29].north_rx} \
          {ys[1].xs[1].msg_txrx[2].north_rx} \
          {ys[1].xs[1].msg_txrx[30].north_rx} \
          {ys[1].xs[1].msg_txrx[31].north_rx} \
          {ys[1].xs[1].msg_txrx[32].north_rx} \
          {ys[1].xs[1].msg_txrx[33].north_rx} \
          {ys[1].xs[1].msg_txrx[34].north_rx} \
          {ys[1].xs[1].msg_txrx[35].north_rx} \
          {ys[1].xs[1].msg_txrx[3].north_rx} \
          {ys[1].xs[1].msg_txrx[4].north_rx} \
          {ys[1].xs[1].msg_txrx[5].north_rx} \
          {ys[1].xs[1].msg_txrx[6].north_rx} \
          {ys[1].xs[1].msg_txrx[7].north_rx} \
          {ys[1].xs[1].msg_txrx[8].north_rx} \
          {ys[1].xs[1].msg_txrx[9].north_rx}]]
resize_pblock [get_pblocks poly1_1_rx_ns] -add {SLICE_X80Y109:SLICE_X89Y110}
set_property src_info {type:XDC file:1 line:1071 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_1_tx_ns
add_cells_to_pblock [get_pblocks poly1_1_tx_ns] [get_cells -quiet [list \
          {ys[1].xs[1].msg_txrx[0].south_tx} \
          {ys[1].xs[1].msg_txrx[10].south_tx} \
          {ys[1].xs[1].msg_txrx[11].south_tx} \
          {ys[1].xs[1].msg_txrx[12].south_tx} \
          {ys[1].xs[1].msg_txrx[13].south_tx} \
          {ys[1].xs[1].msg_txrx[14].south_tx} \
          {ys[1].xs[1].msg_txrx[15].south_tx} \
          {ys[1].xs[1].msg_txrx[16].south_tx} \
          {ys[1].xs[1].msg_txrx[17].south_tx} \
          {ys[1].xs[1].msg_txrx[18].south_tx} \
          {ys[1].xs[1].msg_txrx[19].south_tx} \
          {ys[1].xs[1].msg_txrx[1].south_tx} \
          {ys[1].xs[1].msg_txrx[20].south_tx} \
          {ys[1].xs[1].msg_txrx[21].south_tx} \
          {ys[1].xs[1].msg_txrx[22].south_tx} \
          {ys[1].xs[1].msg_txrx[23].south_tx} \
          {ys[1].xs[1].msg_txrx[24].south_tx} \
          {ys[1].xs[1].msg_txrx[25].south_tx} \
          {ys[1].xs[1].msg_txrx[26].south_tx} \
          {ys[1].xs[1].msg_txrx[27].south_tx} \
          {ys[1].xs[1].msg_txrx[28].south_tx} \
          {ys[1].xs[1].msg_txrx[29].south_tx} \
          {ys[1].xs[1].msg_txrx[2].south_tx} \
          {ys[1].xs[1].msg_txrx[30].south_tx} \
          {ys[1].xs[1].msg_txrx[31].south_tx} \
          {ys[1].xs[1].msg_txrx[32].south_tx} \
          {ys[1].xs[1].msg_txrx[33].south_tx} \
          {ys[1].xs[1].msg_txrx[34].south_tx} \
          {ys[1].xs[1].msg_txrx[35].south_tx} \
          {ys[1].xs[1].msg_txrx[3].south_tx} \
          {ys[1].xs[1].msg_txrx[4].south_tx} \
          {ys[1].xs[1].msg_txrx[5].south_tx} \
          {ys[1].xs[1].msg_txrx[6].south_tx} \
          {ys[1].xs[1].msg_txrx[7].south_tx} \
          {ys[1].xs[1].msg_txrx[8].south_tx} \
          {ys[1].xs[1].msg_txrx[9].south_tx}]]
resize_pblock [get_pblocks poly1_1_tx_ns] -add {SLICE_X80Y88:SLICE_X89Y89}
set_property src_info {type:XDC file:1 line:1112 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_2_sw
add_cells_to_pblock [get_pblocks poly1_2_sw] [get_cells -quiet [list {ys[2].xs[1].torus_switch_xy}]]
resize_pblock [get_pblocks poly1_2_sw] -add {SLICE_X80Y127:SLICE_X89Y145}
set_property src_info {type:XDC file:1 line:1118 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_2_cli
add_cells_to_pblock [get_pblocks poly1_2_cli] [get_cells -quiet [list {ys[2].xs[1].client_xy}]]
resize_pblock [get_pblocks poly1_2_cli] -add {SLICE_X80Y111:SLICE_X91Y124}
set_property src_info {type:XDC file:1 line:1125 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_2_rx_ew
add_cells_to_pblock [get_pblocks poly1_2_rx_ew] [get_cells -quiet [list \
          {ys[2].xs[1].conns_addr[0].west_rx_addr} \
          {ys[2].xs[1].conns_addr[1].west_rx_addr} \
          {ys[2].xs[1].conns_addr[2].west_rx_addr} \
          {ys[2].xs[1].conns_addr[3].west_rx_addr} \
          {ys[2].xs[1].conns_data[0].west_rx_data} \
          {ys[2].xs[1].conns_data[10].west_rx_data} \
          {ys[2].xs[1].conns_data[11].west_rx_data} \
          {ys[2].xs[1].conns_data[12].west_rx_data} \
          {ys[2].xs[1].conns_data[13].west_rx_data} \
          {ys[2].xs[1].conns_data[14].west_rx_data} \
          {ys[2].xs[1].conns_data[15].west_rx_data} \
          {ys[2].xs[1].conns_data[16].west_rx_data} \
          {ys[2].xs[1].conns_data[17].west_rx_data} \
          {ys[2].xs[1].conns_data[18].west_rx_data} \
          {ys[2].xs[1].conns_data[19].west_rx_data} \
          {ys[2].xs[1].conns_data[1].west_rx_data} \
          {ys[2].xs[1].conns_data[20].west_rx_data} \
          {ys[2].xs[1].conns_data[21].west_rx_data} \
          {ys[2].xs[1].conns_data[22].west_rx_data} \
          {ys[2].xs[1].conns_data[23].west_rx_data} \
          {ys[2].xs[1].conns_data[24].west_rx_data} \
          {ys[2].xs[1].conns_data[25].west_rx_data} \
          {ys[2].xs[1].conns_data[26].west_rx_data} \
          {ys[2].xs[1].conns_data[27].west_rx_data} \
          {ys[2].xs[1].conns_data[28].west_rx_data} \
          {ys[2].xs[1].conns_data[29].west_rx_data} \
          {ys[2].xs[1].conns_data[2].west_rx_data} \
          {ys[2].xs[1].conns_data[30].west_rx_data} \
          {ys[2].xs[1].conns_data[31].west_rx_data} \
          {ys[2].xs[1].conns_data[3].west_rx_data} \
          {ys[2].xs[1].conns_data[4].west_rx_data} \
          {ys[2].xs[1].conns_data[5].west_rx_data} \
          {ys[2].xs[1].conns_data[6].west_rx_data} \
          {ys[2].xs[1].conns_data[7].west_rx_data} \
          {ys[2].xs[1].conns_data[8].west_rx_data} \
          {ys[2].xs[1].conns_data[9].west_rx_data} \
          {ys[2].xs[1].conns_vc_info[0].west_rx_vc} \
          {ys[2].xs[1].conns_vc_info[0].west_tx_g} \
          {ys[2].xs[1].conns_vc_info[1].west_rx_vc} \
          {ys[2].xs[1].conns_vc_info[1].west_tx_g}]]
set_property src_info {type:XDC file:1 line:1170 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_2_tx_ew
add_cells_to_pblock [get_pblocks poly1_2_tx_ew] [get_cells -quiet [list \
          {ys[2].xs[1].conns_addr[0].east_tx_addr} \
          {ys[2].xs[1].conns_addr[1].east_tx_addr} \
          {ys[2].xs[1].conns_addr[2].east_tx_addr} \
          {ys[2].xs[1].conns_addr[3].east_tx_addr} \
          {ys[2].xs[1].conns_data[0].east_tx_data} \
          {ys[2].xs[1].conns_data[10].east_tx_data} \
          {ys[2].xs[1].conns_data[11].east_tx_data} \
          {ys[2].xs[1].conns_data[12].east_tx_data} \
          {ys[2].xs[1].conns_data[13].east_tx_data} \
          {ys[2].xs[1].conns_data[14].east_tx_data} \
          {ys[2].xs[1].conns_data[15].east_tx_data} \
          {ys[2].xs[1].conns_data[16].east_tx_data} \
          {ys[2].xs[1].conns_data[17].east_tx_data} \
          {ys[2].xs[1].conns_data[18].east_tx_data} \
          {ys[2].xs[1].conns_data[19].east_tx_data} \
          {ys[2].xs[1].conns_data[1].east_tx_data} \
          {ys[2].xs[1].conns_data[20].east_tx_data} \
          {ys[2].xs[1].conns_data[21].east_tx_data} \
          {ys[2].xs[1].conns_data[22].east_tx_data} \
          {ys[2].xs[1].conns_data[23].east_tx_data} \
          {ys[2].xs[1].conns_data[24].east_tx_data} \
          {ys[2].xs[1].conns_data[25].east_tx_data} \
          {ys[2].xs[1].conns_data[26].east_tx_data} \
          {ys[2].xs[1].conns_data[27].east_tx_data} \
          {ys[2].xs[1].conns_data[28].east_tx_data} \
          {ys[2].xs[1].conns_data[29].east_tx_data} \
          {ys[2].xs[1].conns_data[2].east_tx_data} \
          {ys[2].xs[1].conns_data[30].east_tx_data} \
          {ys[2].xs[1].conns_data[31].east_tx_data} \
          {ys[2].xs[1].conns_data[3].east_tx_data} \
          {ys[2].xs[1].conns_data[4].east_tx_data} \
          {ys[2].xs[1].conns_data[5].east_tx_data} \
          {ys[2].xs[1].conns_data[6].east_tx_data} \
          {ys[2].xs[1].conns_data[7].east_tx_data} \
          {ys[2].xs[1].conns_data[8].east_tx_data} \
          {ys[2].xs[1].conns_data[9].east_tx_data} \
          {ys[2].xs[1].conns_vc_info[0].east_rx_g} \
          {ys[2].xs[1].conns_vc_info[0].east_tx_vc} \
          {ys[2].xs[1].conns_vc_info[1].east_rx_g} \
          {ys[2].xs[1].conns_vc_info[1].east_tx_vc}]]
resize_pblock [get_pblocks poly1_2_tx_ew] -add {SLICE_X90Y125:SLICE_X91Y146}
set_property src_info {type:XDC file:1 line:1215 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_2_rx_ns
add_cells_to_pblock [get_pblocks poly1_2_rx_ns] [get_cells -quiet [list \
          {ys[2].xs[1].msg_txrx[0].north_rx} \
          {ys[2].xs[1].msg_txrx[10].north_rx} \
          {ys[2].xs[1].msg_txrx[11].north_rx} \
          {ys[2].xs[1].msg_txrx[12].north_rx} \
          {ys[2].xs[1].msg_txrx[13].north_rx} \
          {ys[2].xs[1].msg_txrx[14].north_rx} \
          {ys[2].xs[1].msg_txrx[15].north_rx} \
          {ys[2].xs[1].msg_txrx[16].north_rx} \
          {ys[2].xs[1].msg_txrx[17].north_rx} \
          {ys[2].xs[1].msg_txrx[18].north_rx} \
          {ys[2].xs[1].msg_txrx[19].north_rx} \
          {ys[2].xs[1].msg_txrx[1].north_rx} \
          {ys[2].xs[1].msg_txrx[20].north_rx} \
          {ys[2].xs[1].msg_txrx[21].north_rx} \
          {ys[2].xs[1].msg_txrx[22].north_rx} \
          {ys[2].xs[1].msg_txrx[23].north_rx} \
          {ys[2].xs[1].msg_txrx[24].north_rx} \
          {ys[2].xs[1].msg_txrx[25].north_rx} \
          {ys[2].xs[1].msg_txrx[26].north_rx} \
          {ys[2].xs[1].msg_txrx[27].north_rx} \
          {ys[2].xs[1].msg_txrx[28].north_rx} \
          {ys[2].xs[1].msg_txrx[29].north_rx} \
          {ys[2].xs[1].msg_txrx[2].north_rx} \
          {ys[2].xs[1].msg_txrx[30].north_rx} \
          {ys[2].xs[1].msg_txrx[31].north_rx} \
          {ys[2].xs[1].msg_txrx[32].north_rx} \
          {ys[2].xs[1].msg_txrx[33].north_rx} \
          {ys[2].xs[1].msg_txrx[34].north_rx} \
          {ys[2].xs[1].msg_txrx[35].north_rx} \
          {ys[2].xs[1].msg_txrx[3].north_rx} \
          {ys[2].xs[1].msg_txrx[4].north_rx} \
          {ys[2].xs[1].msg_txrx[5].north_rx} \
          {ys[2].xs[1].msg_txrx[6].north_rx} \
          {ys[2].xs[1].msg_txrx[7].north_rx} \
          {ys[2].xs[1].msg_txrx[8].north_rx} \
          {ys[2].xs[1].msg_txrx[9].north_rx}]]
resize_pblock [get_pblocks poly1_2_rx_ns] -add {SLICE_X80Y125:SLICE_X89Y126}
set_property src_info {type:XDC file:1 line:1256 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_2_tx_ns
add_cells_to_pblock [get_pblocks poly1_2_tx_ns] [get_cells -quiet [list \
          {ys[2].xs[1].msg_txrx[0].south_tx} \
          {ys[2].xs[1].msg_txrx[10].south_tx} \
          {ys[2].xs[1].msg_txrx[11].south_tx} \
          {ys[2].xs[1].msg_txrx[12].south_tx} \
          {ys[2].xs[1].msg_txrx[13].south_tx} \
          {ys[2].xs[1].msg_txrx[14].south_tx} \
          {ys[2].xs[1].msg_txrx[15].south_tx} \
          {ys[2].xs[1].msg_txrx[16].south_tx} \
          {ys[2].xs[1].msg_txrx[17].south_tx} \
          {ys[2].xs[1].msg_txrx[18].south_tx} \
          {ys[2].xs[1].msg_txrx[19].south_tx} \
          {ys[2].xs[1].msg_txrx[1].south_tx} \
          {ys[2].xs[1].msg_txrx[20].south_tx} \
          {ys[2].xs[1].msg_txrx[21].south_tx} \
          {ys[2].xs[1].msg_txrx[22].south_tx} \
          {ys[2].xs[1].msg_txrx[23].south_tx} \
          {ys[2].xs[1].msg_txrx[24].south_tx} \
          {ys[2].xs[1].msg_txrx[25].south_tx} \
          {ys[2].xs[1].msg_txrx[26].south_tx} \
          {ys[2].xs[1].msg_txrx[27].south_tx} \
          {ys[2].xs[1].msg_txrx[28].south_tx} \
          {ys[2].xs[1].msg_txrx[29].south_tx} \
          {ys[2].xs[1].msg_txrx[2].south_tx} \
          {ys[2].xs[1].msg_txrx[30].south_tx} \
          {ys[2].xs[1].msg_txrx[31].south_tx} \
          {ys[2].xs[1].msg_txrx[32].south_tx} \
          {ys[2].xs[1].msg_txrx[33].south_tx} \
          {ys[2].xs[1].msg_txrx[34].south_tx} \
          {ys[2].xs[1].msg_txrx[35].south_tx} \
          {ys[2].xs[1].msg_txrx[3].south_tx} \
          {ys[2].xs[1].msg_txrx[4].south_tx} \
          {ys[2].xs[1].msg_txrx[5].south_tx} \
          {ys[2].xs[1].msg_txrx[6].south_tx} \
          {ys[2].xs[1].msg_txrx[7].south_tx} \
          {ys[2].xs[1].msg_txrx[8].south_tx} \
          {ys[2].xs[1].msg_txrx[9].south_tx}]]
resize_pblock [get_pblocks poly1_2_tx_ns] -add {SLICE_X80Y146:SLICE_X89Y147}
set_property src_info {type:XDC file:1 line:1297 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_3_sw
add_cells_to_pblock [get_pblocks poly1_3_sw] [get_cells -quiet [list {ys[3].xs[1].torus_switch_xy}]]
resize_pblock [get_pblocks poly1_3_sw] -add {SLICE_X80Y53:SLICE_X89Y71}
set_property src_info {type:XDC file:1 line:1303 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_3_cli
add_cells_to_pblock [get_pblocks poly1_3_cli] [get_cells -quiet [list {ys[3].xs[1].client_xy}]]
resize_pblock [get_pblocks poly1_3_cli] -add {SLICE_X70Y37:SLICE_X91Y50}
set_property src_info {type:XDC file:1 line:1310 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_3_rx_ew
add_cells_to_pblock [get_pblocks poly1_3_rx_ew] [get_cells -quiet [list \
          {ys[3].xs[1].conns_addr[0].west_rx_addr} \
          {ys[3].xs[1].conns_addr[1].west_rx_addr} \
          {ys[3].xs[1].conns_addr[2].west_rx_addr} \
          {ys[3].xs[1].conns_addr[3].west_rx_addr} \
          {ys[3].xs[1].conns_data[0].west_rx_data} \
          {ys[3].xs[1].conns_data[10].west_rx_data} \
          {ys[3].xs[1].conns_data[11].west_rx_data} \
          {ys[3].xs[1].conns_data[12].west_rx_data} \
          {ys[3].xs[1].conns_data[13].west_rx_data} \
          {ys[3].xs[1].conns_data[14].west_rx_data} \
          {ys[3].xs[1].conns_data[15].west_rx_data} \
          {ys[3].xs[1].conns_data[16].west_rx_data} \
          {ys[3].xs[1].conns_data[17].west_rx_data} \
          {ys[3].xs[1].conns_data[18].west_rx_data} \
          {ys[3].xs[1].conns_data[19].west_rx_data} \
          {ys[3].xs[1].conns_data[1].west_rx_data} \
          {ys[3].xs[1].conns_data[20].west_rx_data} \
          {ys[3].xs[1].conns_data[21].west_rx_data} \
          {ys[3].xs[1].conns_data[22].west_rx_data} \
          {ys[3].xs[1].conns_data[23].west_rx_data} \
          {ys[3].xs[1].conns_data[24].west_rx_data} \
          {ys[3].xs[1].conns_data[25].west_rx_data} \
          {ys[3].xs[1].conns_data[26].west_rx_data} \
          {ys[3].xs[1].conns_data[27].west_rx_data} \
          {ys[3].xs[1].conns_data[28].west_rx_data} \
          {ys[3].xs[1].conns_data[29].west_rx_data} \
          {ys[3].xs[1].conns_data[2].west_rx_data} \
          {ys[3].xs[1].conns_data[30].west_rx_data} \
          {ys[3].xs[1].conns_data[31].west_rx_data} \
          {ys[3].xs[1].conns_data[3].west_rx_data} \
          {ys[3].xs[1].conns_data[4].west_rx_data} \
          {ys[3].xs[1].conns_data[5].west_rx_data} \
          {ys[3].xs[1].conns_data[6].west_rx_data} \
          {ys[3].xs[1].conns_data[7].west_rx_data} \
          {ys[3].xs[1].conns_data[8].west_rx_data} \
          {ys[3].xs[1].conns_data[9].west_rx_data} \
          {ys[3].xs[1].conns_vc_info[0].west_rx_vc} \
          {ys[3].xs[1].conns_vc_info[0].west_tx_g} \
          {ys[3].xs[1].conns_vc_info[1].west_rx_vc} \
          {ys[3].xs[1].conns_vc_info[1].west_tx_g}]]
set_property src_info {type:XDC file:1 line:1355 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_3_tx_ew
add_cells_to_pblock [get_pblocks poly1_3_tx_ew] [get_cells -quiet [list \
          {ys[3].xs[1].conns_addr[0].east_tx_addr} \
          {ys[3].xs[1].conns_addr[1].east_tx_addr} \
          {ys[3].xs[1].conns_addr[2].east_tx_addr} \
          {ys[3].xs[1].conns_addr[3].east_tx_addr} \
          {ys[3].xs[1].conns_data[0].east_tx_data} \
          {ys[3].xs[1].conns_data[10].east_tx_data} \
          {ys[3].xs[1].conns_data[11].east_tx_data} \
          {ys[3].xs[1].conns_data[12].east_tx_data} \
          {ys[3].xs[1].conns_data[13].east_tx_data} \
          {ys[3].xs[1].conns_data[14].east_tx_data} \
          {ys[3].xs[1].conns_data[15].east_tx_data} \
          {ys[3].xs[1].conns_data[16].east_tx_data} \
          {ys[3].xs[1].conns_data[17].east_tx_data} \
          {ys[3].xs[1].conns_data[18].east_tx_data} \
          {ys[3].xs[1].conns_data[19].east_tx_data} \
          {ys[3].xs[1].conns_data[1].east_tx_data} \
          {ys[3].xs[1].conns_data[20].east_tx_data} \
          {ys[3].xs[1].conns_data[21].east_tx_data} \
          {ys[3].xs[1].conns_data[22].east_tx_data} \
          {ys[3].xs[1].conns_data[23].east_tx_data} \
          {ys[3].xs[1].conns_data[24].east_tx_data} \
          {ys[3].xs[1].conns_data[25].east_tx_data} \
          {ys[3].xs[1].conns_data[26].east_tx_data} \
          {ys[3].xs[1].conns_data[27].east_tx_data} \
          {ys[3].xs[1].conns_data[28].east_tx_data} \
          {ys[3].xs[1].conns_data[29].east_tx_data} \
          {ys[3].xs[1].conns_data[2].east_tx_data} \
          {ys[3].xs[1].conns_data[30].east_tx_data} \
          {ys[3].xs[1].conns_data[31].east_tx_data} \
          {ys[3].xs[1].conns_data[3].east_tx_data} \
          {ys[3].xs[1].conns_data[4].east_tx_data} \
          {ys[3].xs[1].conns_data[5].east_tx_data} \
          {ys[3].xs[1].conns_data[6].east_tx_data} \
          {ys[3].xs[1].conns_data[7].east_tx_data} \
          {ys[3].xs[1].conns_data[8].east_tx_data} \
          {ys[3].xs[1].conns_data[9].east_tx_data} \
          {ys[3].xs[1].conns_vc_info[0].east_rx_g} \
          {ys[3].xs[1].conns_vc_info[0].east_tx_vc} \
          {ys[3].xs[1].conns_vc_info[1].east_rx_g} \
          {ys[3].xs[1].conns_vc_info[1].east_tx_vc}]]
resize_pblock [get_pblocks poly1_3_tx_ew] -add {SLICE_X90Y51:SLICE_X91Y72}
set_property src_info {type:XDC file:1 line:1400 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_3_rx_ns
add_cells_to_pblock [get_pblocks poly1_3_rx_ns] [get_cells -quiet [list \
          {ys[3].xs[1].msg_txrx[0].north_rx} \
          {ys[3].xs[1].msg_txrx[10].north_rx} \
          {ys[3].xs[1].msg_txrx[11].north_rx} \
          {ys[3].xs[1].msg_txrx[12].north_rx} \
          {ys[3].xs[1].msg_txrx[13].north_rx} \
          {ys[3].xs[1].msg_txrx[14].north_rx} \
          {ys[3].xs[1].msg_txrx[15].north_rx} \
          {ys[3].xs[1].msg_txrx[16].north_rx} \
          {ys[3].xs[1].msg_txrx[17].north_rx} \
          {ys[3].xs[1].msg_txrx[18].north_rx} \
          {ys[3].xs[1].msg_txrx[19].north_rx} \
          {ys[3].xs[1].msg_txrx[1].north_rx} \
          {ys[3].xs[1].msg_txrx[20].north_rx} \
          {ys[3].xs[1].msg_txrx[21].north_rx} \
          {ys[3].xs[1].msg_txrx[22].north_rx} \
          {ys[3].xs[1].msg_txrx[23].north_rx} \
          {ys[3].xs[1].msg_txrx[24].north_rx} \
          {ys[3].xs[1].msg_txrx[25].north_rx} \
          {ys[3].xs[1].msg_txrx[26].north_rx} \
          {ys[3].xs[1].msg_txrx[27].north_rx} \
          {ys[3].xs[1].msg_txrx[28].north_rx} \
          {ys[3].xs[1].msg_txrx[29].north_rx} \
          {ys[3].xs[1].msg_txrx[2].north_rx} \
          {ys[3].xs[1].msg_txrx[30].north_rx} \
          {ys[3].xs[1].msg_txrx[31].north_rx} \
          {ys[3].xs[1].msg_txrx[32].north_rx} \
          {ys[3].xs[1].msg_txrx[33].north_rx} \
          {ys[3].xs[1].msg_txrx[34].north_rx} \
          {ys[3].xs[1].msg_txrx[35].north_rx} \
          {ys[3].xs[1].msg_txrx[3].north_rx} \
          {ys[3].xs[1].msg_txrx[4].north_rx} \
          {ys[3].xs[1].msg_txrx[5].north_rx} \
          {ys[3].xs[1].msg_txrx[6].north_rx} \
          {ys[3].xs[1].msg_txrx[7].north_rx} \
          {ys[3].xs[1].msg_txrx[8].north_rx} \
          {ys[3].xs[1].msg_txrx[9].north_rx}]]
resize_pblock [get_pblocks poly1_3_rx_ns] -add {SLICE_X80Y51:SLICE_X89Y52}
set_property src_info {type:XDC file:1 line:1441 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly1_3_tx_ns
add_cells_to_pblock [get_pblocks poly1_3_tx_ns] [get_cells -quiet [list \
          {ys[3].xs[1].msg_txrx[0].south_tx} \
          {ys[3].xs[1].msg_txrx[10].south_tx} \
          {ys[3].xs[1].msg_txrx[11].south_tx} \
          {ys[3].xs[1].msg_txrx[12].south_tx} \
          {ys[3].xs[1].msg_txrx[13].south_tx} \
          {ys[3].xs[1].msg_txrx[14].south_tx} \
          {ys[3].xs[1].msg_txrx[15].south_tx} \
          {ys[3].xs[1].msg_txrx[16].south_tx} \
          {ys[3].xs[1].msg_txrx[17].south_tx} \
          {ys[3].xs[1].msg_txrx[18].south_tx} \
          {ys[3].xs[1].msg_txrx[19].south_tx} \
          {ys[3].xs[1].msg_txrx[1].south_tx} \
          {ys[3].xs[1].msg_txrx[20].south_tx} \
          {ys[3].xs[1].msg_txrx[21].south_tx} \
          {ys[3].xs[1].msg_txrx[22].south_tx} \
          {ys[3].xs[1].msg_txrx[23].south_tx} \
          {ys[3].xs[1].msg_txrx[24].south_tx} \
          {ys[3].xs[1].msg_txrx[25].south_tx} \
          {ys[3].xs[1].msg_txrx[26].south_tx} \
          {ys[3].xs[1].msg_txrx[27].south_tx} \
          {ys[3].xs[1].msg_txrx[28].south_tx} \
          {ys[3].xs[1].msg_txrx[29].south_tx} \
          {ys[3].xs[1].msg_txrx[2].south_tx} \
          {ys[3].xs[1].msg_txrx[30].south_tx} \
          {ys[3].xs[1].msg_txrx[31].south_tx} \
          {ys[3].xs[1].msg_txrx[32].south_tx} \
          {ys[3].xs[1].msg_txrx[33].south_tx} \
          {ys[3].xs[1].msg_txrx[34].south_tx} \
          {ys[3].xs[1].msg_txrx[35].south_tx} \
          {ys[3].xs[1].msg_txrx[3].south_tx} \
          {ys[3].xs[1].msg_txrx[4].south_tx} \
          {ys[3].xs[1].msg_txrx[5].south_tx} \
          {ys[3].xs[1].msg_txrx[6].south_tx} \
          {ys[3].xs[1].msg_txrx[7].south_tx} \
          {ys[3].xs[1].msg_txrx[8].south_tx} \
          {ys[3].xs[1].msg_txrx[9].south_tx}]]
resize_pblock [get_pblocks poly1_3_tx_ns] -add {SLICE_X80Y72:SLICE_X89Y73}
set_property src_info {type:XDC file:1 line:1482 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_0_sw
add_cells_to_pblock [get_pblocks poly2_0_sw] [get_cells -quiet [list {ys[0].xs[2].torus_switch_xy}]]
resize_pblock [get_pblocks poly2_0_sw] -add {SLICE_X102Y16:SLICE_X111Y34}
set_property src_info {type:XDC file:1 line:1488 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_0_cli
add_cells_to_pblock [get_pblocks poly2_0_cli] [get_cells -quiet [list {ys[0].xs[2].client_xy}]]
resize_pblock [get_pblocks poly2_0_cli] -add {SLICE_X100Y0:SLICE_X113Y13 SLICE_X92Y0:SLICE_X99Y36}
set_property src_info {type:XDC file:1 line:1495 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_0_rx_ew
add_cells_to_pblock [get_pblocks poly2_0_rx_ew] [get_cells -quiet [list \
          {ys[0].xs[2].conns_addr[0].west_rx_addr} \
          {ys[0].xs[2].conns_addr[1].west_rx_addr} \
          {ys[0].xs[2].conns_addr[2].west_rx_addr} \
          {ys[0].xs[2].conns_addr[3].west_rx_addr} \
          {ys[0].xs[2].conns_data[0].west_rx_data} \
          {ys[0].xs[2].conns_data[10].west_rx_data} \
          {ys[0].xs[2].conns_data[11].west_rx_data} \
          {ys[0].xs[2].conns_data[12].west_rx_data} \
          {ys[0].xs[2].conns_data[13].west_rx_data} \
          {ys[0].xs[2].conns_data[14].west_rx_data} \
          {ys[0].xs[2].conns_data[15].west_rx_data} \
          {ys[0].xs[2].conns_data[16].west_rx_data} \
          {ys[0].xs[2].conns_data[17].west_rx_data} \
          {ys[0].xs[2].conns_data[18].west_rx_data} \
          {ys[0].xs[2].conns_data[19].west_rx_data} \
          {ys[0].xs[2].conns_data[1].west_rx_data} \
          {ys[0].xs[2].conns_data[20].west_rx_data} \
          {ys[0].xs[2].conns_data[21].west_rx_data} \
          {ys[0].xs[2].conns_data[22].west_rx_data} \
          {ys[0].xs[2].conns_data[23].west_rx_data} \
          {ys[0].xs[2].conns_data[24].west_rx_data} \
          {ys[0].xs[2].conns_data[25].west_rx_data} \
          {ys[0].xs[2].conns_data[26].west_rx_data} \
          {ys[0].xs[2].conns_data[27].west_rx_data} \
          {ys[0].xs[2].conns_data[28].west_rx_data} \
          {ys[0].xs[2].conns_data[29].west_rx_data} \
          {ys[0].xs[2].conns_data[2].west_rx_data} \
          {ys[0].xs[2].conns_data[30].west_rx_data} \
          {ys[0].xs[2].conns_data[31].west_rx_data} \
          {ys[0].xs[2].conns_data[3].west_rx_data} \
          {ys[0].xs[2].conns_data[4].west_rx_data} \
          {ys[0].xs[2].conns_data[5].west_rx_data} \
          {ys[0].xs[2].conns_data[6].west_rx_data} \
          {ys[0].xs[2].conns_data[7].west_rx_data} \
          {ys[0].xs[2].conns_data[8].west_rx_data} \
          {ys[0].xs[2].conns_data[9].west_rx_data} \
          {ys[0].xs[2].conns_vc_info[0].west_rx_vc} \
          {ys[0].xs[2].conns_vc_info[0].west_tx_g} \
          {ys[0].xs[2].conns_vc_info[1].west_rx_vc} \
          {ys[0].xs[2].conns_vc_info[1].west_tx_g}]]
resize_pblock [get_pblocks poly2_0_rx_ew] -add {SLICE_X112Y14:SLICE_X113Y35}
set_property src_info {type:XDC file:1 line:1540 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_0_tx_ew
add_cells_to_pblock [get_pblocks poly2_0_tx_ew] [get_cells -quiet [list \
          {ys[0].xs[2].conns_addr[0].east_tx_addr} \
          {ys[0].xs[2].conns_addr[1].east_tx_addr} \
          {ys[0].xs[2].conns_addr[2].east_tx_addr} \
          {ys[0].xs[2].conns_addr[3].east_tx_addr} \
          {ys[0].xs[2].conns_data[0].east_tx_data} \
          {ys[0].xs[2].conns_data[10].east_tx_data} \
          {ys[0].xs[2].conns_data[11].east_tx_data} \
          {ys[0].xs[2].conns_data[12].east_tx_data} \
          {ys[0].xs[2].conns_data[13].east_tx_data} \
          {ys[0].xs[2].conns_data[14].east_tx_data} \
          {ys[0].xs[2].conns_data[15].east_tx_data} \
          {ys[0].xs[2].conns_data[16].east_tx_data} \
          {ys[0].xs[2].conns_data[17].east_tx_data} \
          {ys[0].xs[2].conns_data[18].east_tx_data} \
          {ys[0].xs[2].conns_data[19].east_tx_data} \
          {ys[0].xs[2].conns_data[1].east_tx_data} \
          {ys[0].xs[2].conns_data[20].east_tx_data} \
          {ys[0].xs[2].conns_data[21].east_tx_data} \
          {ys[0].xs[2].conns_data[22].east_tx_data} \
          {ys[0].xs[2].conns_data[23].east_tx_data} \
          {ys[0].xs[2].conns_data[24].east_tx_data} \
          {ys[0].xs[2].conns_data[25].east_tx_data} \
          {ys[0].xs[2].conns_data[26].east_tx_data} \
          {ys[0].xs[2].conns_data[27].east_tx_data} \
          {ys[0].xs[2].conns_data[28].east_tx_data} \
          {ys[0].xs[2].conns_data[29].east_tx_data} \
          {ys[0].xs[2].conns_data[2].east_tx_data} \
          {ys[0].xs[2].conns_data[30].east_tx_data} \
          {ys[0].xs[2].conns_data[31].east_tx_data} \
          {ys[0].xs[2].conns_data[3].east_tx_data} \
          {ys[0].xs[2].conns_data[4].east_tx_data} \
          {ys[0].xs[2].conns_data[5].east_tx_data} \
          {ys[0].xs[2].conns_data[6].east_tx_data} \
          {ys[0].xs[2].conns_data[7].east_tx_data} \
          {ys[0].xs[2].conns_data[8].east_tx_data} \
          {ys[0].xs[2].conns_data[9].east_tx_data} \
          {ys[0].xs[2].conns_vc_info[0].east_rx_g} \
          {ys[0].xs[2].conns_vc_info[0].east_tx_vc} \
          {ys[0].xs[2].conns_vc_info[1].east_rx_g} \
          {ys[0].xs[2].conns_vc_info[1].east_tx_vc}]]
resize_pblock [get_pblocks poly2_0_tx_ew] -add {SLICE_X100Y14:SLICE_X101Y35}
set_property src_info {type:XDC file:1 line:1585 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_0_rx_ns
add_cells_to_pblock [get_pblocks poly2_0_rx_ns] [get_cells -quiet [list \
          {ys[0].xs[2].msg_txrx[0].north_rx} \
          {ys[0].xs[2].msg_txrx[10].north_rx} \
          {ys[0].xs[2].msg_txrx[11].north_rx} \
          {ys[0].xs[2].msg_txrx[12].north_rx} \
          {ys[0].xs[2].msg_txrx[13].north_rx} \
          {ys[0].xs[2].msg_txrx[14].north_rx} \
          {ys[0].xs[2].msg_txrx[15].north_rx} \
          {ys[0].xs[2].msg_txrx[16].north_rx} \
          {ys[0].xs[2].msg_txrx[17].north_rx} \
          {ys[0].xs[2].msg_txrx[18].north_rx} \
          {ys[0].xs[2].msg_txrx[19].north_rx} \
          {ys[0].xs[2].msg_txrx[1].north_rx} \
          {ys[0].xs[2].msg_txrx[20].north_rx} \
          {ys[0].xs[2].msg_txrx[21].north_rx} \
          {ys[0].xs[2].msg_txrx[22].north_rx} \
          {ys[0].xs[2].msg_txrx[23].north_rx} \
          {ys[0].xs[2].msg_txrx[24].north_rx} \
          {ys[0].xs[2].msg_txrx[25].north_rx} \
          {ys[0].xs[2].msg_txrx[26].north_rx} \
          {ys[0].xs[2].msg_txrx[27].north_rx} \
          {ys[0].xs[2].msg_txrx[28].north_rx} \
          {ys[0].xs[2].msg_txrx[29].north_rx} \
          {ys[0].xs[2].msg_txrx[2].north_rx} \
          {ys[0].xs[2].msg_txrx[30].north_rx} \
          {ys[0].xs[2].msg_txrx[31].north_rx} \
          {ys[0].xs[2].msg_txrx[32].north_rx} \
          {ys[0].xs[2].msg_txrx[33].north_rx} \
          {ys[0].xs[2].msg_txrx[34].north_rx} \
          {ys[0].xs[2].msg_txrx[35].north_rx} \
          {ys[0].xs[2].msg_txrx[3].north_rx} \
          {ys[0].xs[2].msg_txrx[4].north_rx} \
          {ys[0].xs[2].msg_txrx[5].north_rx} \
          {ys[0].xs[2].msg_txrx[6].north_rx} \
          {ys[0].xs[2].msg_txrx[7].north_rx} \
          {ys[0].xs[2].msg_txrx[8].north_rx} \
          {ys[0].xs[2].msg_txrx[9].north_rx}]]
resize_pblock [get_pblocks poly2_0_rx_ns] -add {SLICE_X102Y35:SLICE_X111Y36}
set_property src_info {type:XDC file:1 line:1626 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_0_tx_ns
add_cells_to_pblock [get_pblocks poly2_0_tx_ns] [get_cells -quiet [list \
          {ys[0].xs[2].msg_txrx[0].south_tx} \
          {ys[0].xs[2].msg_txrx[10].south_tx} \
          {ys[0].xs[2].msg_txrx[11].south_tx} \
          {ys[0].xs[2].msg_txrx[12].south_tx} \
          {ys[0].xs[2].msg_txrx[13].south_tx} \
          {ys[0].xs[2].msg_txrx[14].south_tx} \
          {ys[0].xs[2].msg_txrx[15].south_tx} \
          {ys[0].xs[2].msg_txrx[16].south_tx} \
          {ys[0].xs[2].msg_txrx[17].south_tx} \
          {ys[0].xs[2].msg_txrx[18].south_tx} \
          {ys[0].xs[2].msg_txrx[19].south_tx} \
          {ys[0].xs[2].msg_txrx[1].south_tx} \
          {ys[0].xs[2].msg_txrx[20].south_tx} \
          {ys[0].xs[2].msg_txrx[21].south_tx} \
          {ys[0].xs[2].msg_txrx[22].south_tx} \
          {ys[0].xs[2].msg_txrx[23].south_tx} \
          {ys[0].xs[2].msg_txrx[24].south_tx} \
          {ys[0].xs[2].msg_txrx[25].south_tx} \
          {ys[0].xs[2].msg_txrx[26].south_tx} \
          {ys[0].xs[2].msg_txrx[27].south_tx} \
          {ys[0].xs[2].msg_txrx[28].south_tx} \
          {ys[0].xs[2].msg_txrx[29].south_tx} \
          {ys[0].xs[2].msg_txrx[2].south_tx} \
          {ys[0].xs[2].msg_txrx[30].south_tx} \
          {ys[0].xs[2].msg_txrx[31].south_tx} \
          {ys[0].xs[2].msg_txrx[32].south_tx} \
          {ys[0].xs[2].msg_txrx[33].south_tx} \
          {ys[0].xs[2].msg_txrx[34].south_tx} \
          {ys[0].xs[2].msg_txrx[35].south_tx} \
          {ys[0].xs[2].msg_txrx[3].south_tx} \
          {ys[0].xs[2].msg_txrx[4].south_tx} \
          {ys[0].xs[2].msg_txrx[5].south_tx} \
          {ys[0].xs[2].msg_txrx[6].south_tx} \
          {ys[0].xs[2].msg_txrx[7].south_tx} \
          {ys[0].xs[2].msg_txrx[8].south_tx} \
          {ys[0].xs[2].msg_txrx[9].south_tx}]]
resize_pblock [get_pblocks poly2_0_tx_ns] -add {SLICE_X102Y14:SLICE_X111Y15}
set_property src_info {type:XDC file:1 line:1667 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_1_sw
add_cells_to_pblock [get_pblocks poly2_1_sw] [get_cells -quiet [list {ys[1].xs[2].torus_switch_xy}]]
resize_pblock [get_pblocks poly2_1_sw] -add {SLICE_X102Y90:SLICE_X111Y108}
set_property src_info {type:XDC file:1 line:1673 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_1_cli
add_cells_to_pblock [get_pblocks poly2_1_cli] [get_cells -quiet [list {ys[1].xs[2].client_xy}]]
resize_pblock [get_pblocks poly2_1_cli] -add {SLICE_X100Y74:SLICE_X113Y87 SLICE_X92Y74:SLICE_X99Y110}
set_property src_info {type:XDC file:1 line:1680 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_1_rx_ew
add_cells_to_pblock [get_pblocks poly2_1_rx_ew] [get_cells -quiet [list \
          {ys[1].xs[2].conns_addr[0].west_rx_addr} \
          {ys[1].xs[2].conns_addr[1].west_rx_addr} \
          {ys[1].xs[2].conns_addr[2].west_rx_addr} \
          {ys[1].xs[2].conns_addr[3].west_rx_addr} \
          {ys[1].xs[2].conns_data[0].west_rx_data} \
          {ys[1].xs[2].conns_data[10].west_rx_data} \
          {ys[1].xs[2].conns_data[11].west_rx_data} \
          {ys[1].xs[2].conns_data[12].west_rx_data} \
          {ys[1].xs[2].conns_data[13].west_rx_data} \
          {ys[1].xs[2].conns_data[14].west_rx_data} \
          {ys[1].xs[2].conns_data[15].west_rx_data} \
          {ys[1].xs[2].conns_data[16].west_rx_data} \
          {ys[1].xs[2].conns_data[17].west_rx_data} \
          {ys[1].xs[2].conns_data[18].west_rx_data} \
          {ys[1].xs[2].conns_data[19].west_rx_data} \
          {ys[1].xs[2].conns_data[1].west_rx_data} \
          {ys[1].xs[2].conns_data[20].west_rx_data} \
          {ys[1].xs[2].conns_data[21].west_rx_data} \
          {ys[1].xs[2].conns_data[22].west_rx_data} \
          {ys[1].xs[2].conns_data[23].west_rx_data} \
          {ys[1].xs[2].conns_data[24].west_rx_data} \
          {ys[1].xs[2].conns_data[25].west_rx_data} \
          {ys[1].xs[2].conns_data[26].west_rx_data} \
          {ys[1].xs[2].conns_data[27].west_rx_data} \
          {ys[1].xs[2].conns_data[28].west_rx_data} \
          {ys[1].xs[2].conns_data[29].west_rx_data} \
          {ys[1].xs[2].conns_data[2].west_rx_data} \
          {ys[1].xs[2].conns_data[30].west_rx_data} \
          {ys[1].xs[2].conns_data[31].west_rx_data} \
          {ys[1].xs[2].conns_data[3].west_rx_data} \
          {ys[1].xs[2].conns_data[4].west_rx_data} \
          {ys[1].xs[2].conns_data[5].west_rx_data} \
          {ys[1].xs[2].conns_data[6].west_rx_data} \
          {ys[1].xs[2].conns_data[7].west_rx_data} \
          {ys[1].xs[2].conns_data[8].west_rx_data} \
          {ys[1].xs[2].conns_data[9].west_rx_data} \
          {ys[1].xs[2].conns_vc_info[0].west_rx_vc} \
          {ys[1].xs[2].conns_vc_info[0].west_tx_g} \
          {ys[1].xs[2].conns_vc_info[1].west_rx_vc} \
          {ys[1].xs[2].conns_vc_info[1].west_tx_g}]]
resize_pblock [get_pblocks poly2_1_rx_ew] -add {SLICE_X112Y88:SLICE_X113Y109}
set_property src_info {type:XDC file:1 line:1725 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_1_tx_ew
add_cells_to_pblock [get_pblocks poly2_1_tx_ew] [get_cells -quiet [list \
          {ys[1].xs[2].conns_addr[0].east_tx_addr} \
          {ys[1].xs[2].conns_addr[1].east_tx_addr} \
          {ys[1].xs[2].conns_addr[2].east_tx_addr} \
          {ys[1].xs[2].conns_addr[3].east_tx_addr} \
          {ys[1].xs[2].conns_data[0].east_tx_data} \
          {ys[1].xs[2].conns_data[10].east_tx_data} \
          {ys[1].xs[2].conns_data[11].east_tx_data} \
          {ys[1].xs[2].conns_data[12].east_tx_data} \
          {ys[1].xs[2].conns_data[13].east_tx_data} \
          {ys[1].xs[2].conns_data[14].east_tx_data} \
          {ys[1].xs[2].conns_data[15].east_tx_data} \
          {ys[1].xs[2].conns_data[16].east_tx_data} \
          {ys[1].xs[2].conns_data[17].east_tx_data} \
          {ys[1].xs[2].conns_data[18].east_tx_data} \
          {ys[1].xs[2].conns_data[19].east_tx_data} \
          {ys[1].xs[2].conns_data[1].east_tx_data} \
          {ys[1].xs[2].conns_data[20].east_tx_data} \
          {ys[1].xs[2].conns_data[21].east_tx_data} \
          {ys[1].xs[2].conns_data[22].east_tx_data} \
          {ys[1].xs[2].conns_data[23].east_tx_data} \
          {ys[1].xs[2].conns_data[24].east_tx_data} \
          {ys[1].xs[2].conns_data[25].east_tx_data} \
          {ys[1].xs[2].conns_data[26].east_tx_data} \
          {ys[1].xs[2].conns_data[27].east_tx_data} \
          {ys[1].xs[2].conns_data[28].east_tx_data} \
          {ys[1].xs[2].conns_data[29].east_tx_data} \
          {ys[1].xs[2].conns_data[2].east_tx_data} \
          {ys[1].xs[2].conns_data[30].east_tx_data} \
          {ys[1].xs[2].conns_data[31].east_tx_data} \
          {ys[1].xs[2].conns_data[3].east_tx_data} \
          {ys[1].xs[2].conns_data[4].east_tx_data} \
          {ys[1].xs[2].conns_data[5].east_tx_data} \
          {ys[1].xs[2].conns_data[6].east_tx_data} \
          {ys[1].xs[2].conns_data[7].east_tx_data} \
          {ys[1].xs[2].conns_data[8].east_tx_data} \
          {ys[1].xs[2].conns_data[9].east_tx_data} \
          {ys[1].xs[2].conns_vc_info[0].east_rx_g} \
          {ys[1].xs[2].conns_vc_info[0].east_tx_vc} \
          {ys[1].xs[2].conns_vc_info[1].east_rx_g} \
          {ys[1].xs[2].conns_vc_info[1].east_tx_vc}]]
resize_pblock [get_pblocks poly2_1_tx_ew] -add {SLICE_X100Y88:SLICE_X101Y109}
set_property src_info {type:XDC file:1 line:1770 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_1_rx_ns
add_cells_to_pblock [get_pblocks poly2_1_rx_ns] [get_cells -quiet [list \
          {ys[1].xs[2].msg_txrx[0].north_rx} \
          {ys[1].xs[2].msg_txrx[10].north_rx} \
          {ys[1].xs[2].msg_txrx[11].north_rx} \
          {ys[1].xs[2].msg_txrx[12].north_rx} \
          {ys[1].xs[2].msg_txrx[13].north_rx} \
          {ys[1].xs[2].msg_txrx[14].north_rx} \
          {ys[1].xs[2].msg_txrx[15].north_rx} \
          {ys[1].xs[2].msg_txrx[16].north_rx} \
          {ys[1].xs[2].msg_txrx[17].north_rx} \
          {ys[1].xs[2].msg_txrx[18].north_rx} \
          {ys[1].xs[2].msg_txrx[19].north_rx} \
          {ys[1].xs[2].msg_txrx[1].north_rx} \
          {ys[1].xs[2].msg_txrx[20].north_rx} \
          {ys[1].xs[2].msg_txrx[21].north_rx} \
          {ys[1].xs[2].msg_txrx[22].north_rx} \
          {ys[1].xs[2].msg_txrx[23].north_rx} \
          {ys[1].xs[2].msg_txrx[24].north_rx} \
          {ys[1].xs[2].msg_txrx[25].north_rx} \
          {ys[1].xs[2].msg_txrx[26].north_rx} \
          {ys[1].xs[2].msg_txrx[27].north_rx} \
          {ys[1].xs[2].msg_txrx[28].north_rx} \
          {ys[1].xs[2].msg_txrx[29].north_rx} \
          {ys[1].xs[2].msg_txrx[2].north_rx} \
          {ys[1].xs[2].msg_txrx[30].north_rx} \
          {ys[1].xs[2].msg_txrx[31].north_rx} \
          {ys[1].xs[2].msg_txrx[32].north_rx} \
          {ys[1].xs[2].msg_txrx[33].north_rx} \
          {ys[1].xs[2].msg_txrx[34].north_rx} \
          {ys[1].xs[2].msg_txrx[35].north_rx} \
          {ys[1].xs[2].msg_txrx[3].north_rx} \
          {ys[1].xs[2].msg_txrx[4].north_rx} \
          {ys[1].xs[2].msg_txrx[5].north_rx} \
          {ys[1].xs[2].msg_txrx[6].north_rx} \
          {ys[1].xs[2].msg_txrx[7].north_rx} \
          {ys[1].xs[2].msg_txrx[8].north_rx} \
          {ys[1].xs[2].msg_txrx[9].north_rx}]]
resize_pblock [get_pblocks poly2_1_rx_ns] -add {SLICE_X102Y109:SLICE_X111Y110}
set_property src_info {type:XDC file:1 line:1811 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_1_tx_ns
add_cells_to_pblock [get_pblocks poly2_1_tx_ns] [get_cells -quiet [list \
          {ys[1].xs[2].msg_txrx[0].south_tx} \
          {ys[1].xs[2].msg_txrx[10].south_tx} \
          {ys[1].xs[2].msg_txrx[11].south_tx} \
          {ys[1].xs[2].msg_txrx[12].south_tx} \
          {ys[1].xs[2].msg_txrx[13].south_tx} \
          {ys[1].xs[2].msg_txrx[14].south_tx} \
          {ys[1].xs[2].msg_txrx[15].south_tx} \
          {ys[1].xs[2].msg_txrx[16].south_tx} \
          {ys[1].xs[2].msg_txrx[17].south_tx} \
          {ys[1].xs[2].msg_txrx[18].south_tx} \
          {ys[1].xs[2].msg_txrx[19].south_tx} \
          {ys[1].xs[2].msg_txrx[1].south_tx} \
          {ys[1].xs[2].msg_txrx[20].south_tx} \
          {ys[1].xs[2].msg_txrx[21].south_tx} \
          {ys[1].xs[2].msg_txrx[22].south_tx} \
          {ys[1].xs[2].msg_txrx[23].south_tx} \
          {ys[1].xs[2].msg_txrx[24].south_tx} \
          {ys[1].xs[2].msg_txrx[25].south_tx} \
          {ys[1].xs[2].msg_txrx[26].south_tx} \
          {ys[1].xs[2].msg_txrx[27].south_tx} \
          {ys[1].xs[2].msg_txrx[28].south_tx} \
          {ys[1].xs[2].msg_txrx[29].south_tx} \
          {ys[1].xs[2].msg_txrx[2].south_tx} \
          {ys[1].xs[2].msg_txrx[30].south_tx} \
          {ys[1].xs[2].msg_txrx[31].south_tx} \
          {ys[1].xs[2].msg_txrx[32].south_tx} \
          {ys[1].xs[2].msg_txrx[33].south_tx} \
          {ys[1].xs[2].msg_txrx[34].south_tx} \
          {ys[1].xs[2].msg_txrx[35].south_tx} \
          {ys[1].xs[2].msg_txrx[3].south_tx} \
          {ys[1].xs[2].msg_txrx[4].south_tx} \
          {ys[1].xs[2].msg_txrx[5].south_tx} \
          {ys[1].xs[2].msg_txrx[6].south_tx} \
          {ys[1].xs[2].msg_txrx[7].south_tx} \
          {ys[1].xs[2].msg_txrx[8].south_tx} \
          {ys[1].xs[2].msg_txrx[9].south_tx}]]
resize_pblock [get_pblocks poly2_1_tx_ns] -add {SLICE_X102Y88:SLICE_X111Y89}
set_property src_info {type:XDC file:1 line:1852 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_2_sw
add_cells_to_pblock [get_pblocks poly2_2_sw] [get_cells -quiet [list {ys[2].xs[2].torus_switch_xy}]]
resize_pblock [get_pblocks poly2_2_sw] -add {SLICE_X102Y127:SLICE_X111Y145}
set_property src_info {type:XDC file:1 line:1858 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_2_cli
add_cells_to_pblock [get_pblocks poly2_2_cli] [get_cells -quiet [list {ys[2].xs[2].client_xy}]]
resize_pblock [get_pblocks poly2_2_cli] -add {SLICE_X100Y111:SLICE_X113Y124 SLICE_X92Y111:SLICE_X99Y147}
set_property src_info {type:XDC file:1 line:1865 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_2_rx_ew
add_cells_to_pblock [get_pblocks poly2_2_rx_ew] [get_cells -quiet [list \
          {ys[2].xs[2].conns_addr[0].west_rx_addr} \
          {ys[2].xs[2].conns_addr[1].west_rx_addr} \
          {ys[2].xs[2].conns_addr[2].west_rx_addr} \
          {ys[2].xs[2].conns_addr[3].west_rx_addr} \
          {ys[2].xs[2].conns_data[0].west_rx_data} \
          {ys[2].xs[2].conns_data[10].west_rx_data} \
          {ys[2].xs[2].conns_data[11].west_rx_data} \
          {ys[2].xs[2].conns_data[12].west_rx_data} \
          {ys[2].xs[2].conns_data[13].west_rx_data} \
          {ys[2].xs[2].conns_data[14].west_rx_data} \
          {ys[2].xs[2].conns_data[15].west_rx_data} \
          {ys[2].xs[2].conns_data[16].west_rx_data} \
          {ys[2].xs[2].conns_data[17].west_rx_data} \
          {ys[2].xs[2].conns_data[18].west_rx_data} \
          {ys[2].xs[2].conns_data[19].west_rx_data} \
          {ys[2].xs[2].conns_data[1].west_rx_data} \
          {ys[2].xs[2].conns_data[20].west_rx_data} \
          {ys[2].xs[2].conns_data[21].west_rx_data} \
          {ys[2].xs[2].conns_data[22].west_rx_data} \
          {ys[2].xs[2].conns_data[23].west_rx_data} \
          {ys[2].xs[2].conns_data[24].west_rx_data} \
          {ys[2].xs[2].conns_data[25].west_rx_data} \
          {ys[2].xs[2].conns_data[26].west_rx_data} \
          {ys[2].xs[2].conns_data[27].west_rx_data} \
          {ys[2].xs[2].conns_data[28].west_rx_data} \
          {ys[2].xs[2].conns_data[29].west_rx_data} \
          {ys[2].xs[2].conns_data[2].west_rx_data} \
          {ys[2].xs[2].conns_data[30].west_rx_data} \
          {ys[2].xs[2].conns_data[31].west_rx_data} \
          {ys[2].xs[2].conns_data[3].west_rx_data} \
          {ys[2].xs[2].conns_data[4].west_rx_data} \
          {ys[2].xs[2].conns_data[5].west_rx_data} \
          {ys[2].xs[2].conns_data[6].west_rx_data} \
          {ys[2].xs[2].conns_data[7].west_rx_data} \
          {ys[2].xs[2].conns_data[8].west_rx_data} \
          {ys[2].xs[2].conns_data[9].west_rx_data} \
          {ys[2].xs[2].conns_vc_info[0].west_rx_vc} \
          {ys[2].xs[2].conns_vc_info[0].west_tx_g} \
          {ys[2].xs[2].conns_vc_info[1].west_rx_vc} \
          {ys[2].xs[2].conns_vc_info[1].west_tx_g}]]
resize_pblock [get_pblocks poly2_2_rx_ew] -add {SLICE_X112Y125:SLICE_X113Y146}
set_property src_info {type:XDC file:1 line:1910 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_2_tx_ew
add_cells_to_pblock [get_pblocks poly2_2_tx_ew] [get_cells -quiet [list \
          {ys[2].xs[2].conns_addr[0].east_tx_addr} \
          {ys[2].xs[2].conns_addr[1].east_tx_addr} \
          {ys[2].xs[2].conns_addr[2].east_tx_addr} \
          {ys[2].xs[2].conns_addr[3].east_tx_addr} \
          {ys[2].xs[2].conns_data[0].east_tx_data} \
          {ys[2].xs[2].conns_data[10].east_tx_data} \
          {ys[2].xs[2].conns_data[11].east_tx_data} \
          {ys[2].xs[2].conns_data[12].east_tx_data} \
          {ys[2].xs[2].conns_data[13].east_tx_data} \
          {ys[2].xs[2].conns_data[14].east_tx_data} \
          {ys[2].xs[2].conns_data[15].east_tx_data} \
          {ys[2].xs[2].conns_data[16].east_tx_data} \
          {ys[2].xs[2].conns_data[17].east_tx_data} \
          {ys[2].xs[2].conns_data[18].east_tx_data} \
          {ys[2].xs[2].conns_data[19].east_tx_data} \
          {ys[2].xs[2].conns_data[1].east_tx_data} \
          {ys[2].xs[2].conns_data[20].east_tx_data} \
          {ys[2].xs[2].conns_data[21].east_tx_data} \
          {ys[2].xs[2].conns_data[22].east_tx_data} \
          {ys[2].xs[2].conns_data[23].east_tx_data} \
          {ys[2].xs[2].conns_data[24].east_tx_data} \
          {ys[2].xs[2].conns_data[25].east_tx_data} \
          {ys[2].xs[2].conns_data[26].east_tx_data} \
          {ys[2].xs[2].conns_data[27].east_tx_data} \
          {ys[2].xs[2].conns_data[28].east_tx_data} \
          {ys[2].xs[2].conns_data[29].east_tx_data} \
          {ys[2].xs[2].conns_data[2].east_tx_data} \
          {ys[2].xs[2].conns_data[30].east_tx_data} \
          {ys[2].xs[2].conns_data[31].east_tx_data} \
          {ys[2].xs[2].conns_data[3].east_tx_data} \
          {ys[2].xs[2].conns_data[4].east_tx_data} \
          {ys[2].xs[2].conns_data[5].east_tx_data} \
          {ys[2].xs[2].conns_data[6].east_tx_data} \
          {ys[2].xs[2].conns_data[7].east_tx_data} \
          {ys[2].xs[2].conns_data[8].east_tx_data} \
          {ys[2].xs[2].conns_data[9].east_tx_data} \
          {ys[2].xs[2].conns_vc_info[0].east_rx_g} \
          {ys[2].xs[2].conns_vc_info[0].east_tx_vc} \
          {ys[2].xs[2].conns_vc_info[1].east_rx_g} \
          {ys[2].xs[2].conns_vc_info[1].east_tx_vc}]]
resize_pblock [get_pblocks poly2_2_tx_ew] -add {SLICE_X100Y125:SLICE_X101Y146}
set_property src_info {type:XDC file:1 line:1955 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_2_rx_ns
add_cells_to_pblock [get_pblocks poly2_2_rx_ns] [get_cells -quiet [list \
          {ys[2].xs[2].msg_txrx[0].north_rx} \
          {ys[2].xs[2].msg_txrx[10].north_rx} \
          {ys[2].xs[2].msg_txrx[11].north_rx} \
          {ys[2].xs[2].msg_txrx[12].north_rx} \
          {ys[2].xs[2].msg_txrx[13].north_rx} \
          {ys[2].xs[2].msg_txrx[14].north_rx} \
          {ys[2].xs[2].msg_txrx[15].north_rx} \
          {ys[2].xs[2].msg_txrx[16].north_rx} \
          {ys[2].xs[2].msg_txrx[17].north_rx} \
          {ys[2].xs[2].msg_txrx[18].north_rx} \
          {ys[2].xs[2].msg_txrx[19].north_rx} \
          {ys[2].xs[2].msg_txrx[1].north_rx} \
          {ys[2].xs[2].msg_txrx[20].north_rx} \
          {ys[2].xs[2].msg_txrx[21].north_rx} \
          {ys[2].xs[2].msg_txrx[22].north_rx} \
          {ys[2].xs[2].msg_txrx[23].north_rx} \
          {ys[2].xs[2].msg_txrx[24].north_rx} \
          {ys[2].xs[2].msg_txrx[25].north_rx} \
          {ys[2].xs[2].msg_txrx[26].north_rx} \
          {ys[2].xs[2].msg_txrx[27].north_rx} \
          {ys[2].xs[2].msg_txrx[28].north_rx} \
          {ys[2].xs[2].msg_txrx[29].north_rx} \
          {ys[2].xs[2].msg_txrx[2].north_rx} \
          {ys[2].xs[2].msg_txrx[30].north_rx} \
          {ys[2].xs[2].msg_txrx[31].north_rx} \
          {ys[2].xs[2].msg_txrx[32].north_rx} \
          {ys[2].xs[2].msg_txrx[33].north_rx} \
          {ys[2].xs[2].msg_txrx[34].north_rx} \
          {ys[2].xs[2].msg_txrx[35].north_rx} \
          {ys[2].xs[2].msg_txrx[3].north_rx} \
          {ys[2].xs[2].msg_txrx[4].north_rx} \
          {ys[2].xs[2].msg_txrx[5].north_rx} \
          {ys[2].xs[2].msg_txrx[6].north_rx} \
          {ys[2].xs[2].msg_txrx[7].north_rx} \
          {ys[2].xs[2].msg_txrx[8].north_rx} \
          {ys[2].xs[2].msg_txrx[9].north_rx}]]
resize_pblock [get_pblocks poly2_2_rx_ns] -add {SLICE_X102Y125:SLICE_X111Y126}
set_property src_info {type:XDC file:1 line:1996 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_2_tx_ns
add_cells_to_pblock [get_pblocks poly2_2_tx_ns] [get_cells -quiet [list \
          {ys[2].xs[2].msg_txrx[0].south_tx} \
          {ys[2].xs[2].msg_txrx[10].south_tx} \
          {ys[2].xs[2].msg_txrx[11].south_tx} \
          {ys[2].xs[2].msg_txrx[12].south_tx} \
          {ys[2].xs[2].msg_txrx[13].south_tx} \
          {ys[2].xs[2].msg_txrx[14].south_tx} \
          {ys[2].xs[2].msg_txrx[15].south_tx} \
          {ys[2].xs[2].msg_txrx[16].south_tx} \
          {ys[2].xs[2].msg_txrx[17].south_tx} \
          {ys[2].xs[2].msg_txrx[18].south_tx} \
          {ys[2].xs[2].msg_txrx[19].south_tx} \
          {ys[2].xs[2].msg_txrx[1].south_tx} \
          {ys[2].xs[2].msg_txrx[20].south_tx} \
          {ys[2].xs[2].msg_txrx[21].south_tx} \
          {ys[2].xs[2].msg_txrx[22].south_tx} \
          {ys[2].xs[2].msg_txrx[23].south_tx} \
          {ys[2].xs[2].msg_txrx[24].south_tx} \
          {ys[2].xs[2].msg_txrx[25].south_tx} \
          {ys[2].xs[2].msg_txrx[26].south_tx} \
          {ys[2].xs[2].msg_txrx[27].south_tx} \
          {ys[2].xs[2].msg_txrx[28].south_tx} \
          {ys[2].xs[2].msg_txrx[29].south_tx} \
          {ys[2].xs[2].msg_txrx[2].south_tx} \
          {ys[2].xs[2].msg_txrx[30].south_tx} \
          {ys[2].xs[2].msg_txrx[31].south_tx} \
          {ys[2].xs[2].msg_txrx[32].south_tx} \
          {ys[2].xs[2].msg_txrx[33].south_tx} \
          {ys[2].xs[2].msg_txrx[34].south_tx} \
          {ys[2].xs[2].msg_txrx[35].south_tx} \
          {ys[2].xs[2].msg_txrx[3].south_tx} \
          {ys[2].xs[2].msg_txrx[4].south_tx} \
          {ys[2].xs[2].msg_txrx[5].south_tx} \
          {ys[2].xs[2].msg_txrx[6].south_tx} \
          {ys[2].xs[2].msg_txrx[7].south_tx} \
          {ys[2].xs[2].msg_txrx[8].south_tx} \
          {ys[2].xs[2].msg_txrx[9].south_tx}]]
resize_pblock [get_pblocks poly2_2_tx_ns] -add {SLICE_X102Y146:SLICE_X111Y147}
set_property src_info {type:XDC file:1 line:2037 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_3_sw
add_cells_to_pblock [get_pblocks poly2_3_sw] [get_cells -quiet [list {ys[3].xs[2].torus_switch_xy}]]
resize_pblock [get_pblocks poly2_3_sw] -add {SLICE_X102Y53:SLICE_X111Y71}
set_property src_info {type:XDC file:1 line:2043 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_3_cli
add_cells_to_pblock [get_pblocks poly2_3_cli] [get_cells -quiet [list {ys[3].xs[2].client_xy}]]
resize_pblock [get_pblocks poly2_3_cli] -add {SLICE_X100Y37:SLICE_X113Y50 SLICE_X92Y37:SLICE_X99Y73}
set_property src_info {type:XDC file:1 line:2050 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_3_rx_ew
add_cells_to_pblock [get_pblocks poly2_3_rx_ew] [get_cells -quiet [list \
          {ys[3].xs[2].conns_addr[0].west_rx_addr} \
          {ys[3].xs[2].conns_addr[1].west_rx_addr} \
          {ys[3].xs[2].conns_addr[2].west_rx_addr} \
          {ys[3].xs[2].conns_addr[3].west_rx_addr} \
          {ys[3].xs[2].conns_data[0].west_rx_data} \
          {ys[3].xs[2].conns_data[10].west_rx_data} \
          {ys[3].xs[2].conns_data[11].west_rx_data} \
          {ys[3].xs[2].conns_data[12].west_rx_data} \
          {ys[3].xs[2].conns_data[13].west_rx_data} \
          {ys[3].xs[2].conns_data[14].west_rx_data} \
          {ys[3].xs[2].conns_data[15].west_rx_data} \
          {ys[3].xs[2].conns_data[16].west_rx_data} \
          {ys[3].xs[2].conns_data[17].west_rx_data} \
          {ys[3].xs[2].conns_data[18].west_rx_data} \
          {ys[3].xs[2].conns_data[19].west_rx_data} \
          {ys[3].xs[2].conns_data[1].west_rx_data} \
          {ys[3].xs[2].conns_data[20].west_rx_data} \
          {ys[3].xs[2].conns_data[21].west_rx_data} \
          {ys[3].xs[2].conns_data[22].west_rx_data} \
          {ys[3].xs[2].conns_data[23].west_rx_data} \
          {ys[3].xs[2].conns_data[24].west_rx_data} \
          {ys[3].xs[2].conns_data[25].west_rx_data} \
          {ys[3].xs[2].conns_data[26].west_rx_data} \
          {ys[3].xs[2].conns_data[27].west_rx_data} \
          {ys[3].xs[2].conns_data[28].west_rx_data} \
          {ys[3].xs[2].conns_data[29].west_rx_data} \
          {ys[3].xs[2].conns_data[2].west_rx_data} \
          {ys[3].xs[2].conns_data[30].west_rx_data} \
          {ys[3].xs[2].conns_data[31].west_rx_data} \
          {ys[3].xs[2].conns_data[3].west_rx_data} \
          {ys[3].xs[2].conns_data[4].west_rx_data} \
          {ys[3].xs[2].conns_data[5].west_rx_data} \
          {ys[3].xs[2].conns_data[6].west_rx_data} \
          {ys[3].xs[2].conns_data[7].west_rx_data} \
          {ys[3].xs[2].conns_data[8].west_rx_data} \
          {ys[3].xs[2].conns_data[9].west_rx_data} \
          {ys[3].xs[2].conns_vc_info[0].west_rx_vc} \
          {ys[3].xs[2].conns_vc_info[0].west_tx_g} \
          {ys[3].xs[2].conns_vc_info[1].west_rx_vc} \
          {ys[3].xs[2].conns_vc_info[1].west_tx_g}]]
resize_pblock [get_pblocks poly2_3_rx_ew] -add {SLICE_X112Y51:SLICE_X113Y72}
set_property src_info {type:XDC file:1 line:2095 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_3_tx_ew
add_cells_to_pblock [get_pblocks poly2_3_tx_ew] [get_cells -quiet [list \
          {ys[3].xs[2].conns_addr[0].east_tx_addr} \
          {ys[3].xs[2].conns_addr[1].east_tx_addr} \
          {ys[3].xs[2].conns_addr[2].east_tx_addr} \
          {ys[3].xs[2].conns_addr[3].east_tx_addr} \
          {ys[3].xs[2].conns_data[0].east_tx_data} \
          {ys[3].xs[2].conns_data[10].east_tx_data} \
          {ys[3].xs[2].conns_data[11].east_tx_data} \
          {ys[3].xs[2].conns_data[12].east_tx_data} \
          {ys[3].xs[2].conns_data[13].east_tx_data} \
          {ys[3].xs[2].conns_data[14].east_tx_data} \
          {ys[3].xs[2].conns_data[15].east_tx_data} \
          {ys[3].xs[2].conns_data[16].east_tx_data} \
          {ys[3].xs[2].conns_data[17].east_tx_data} \
          {ys[3].xs[2].conns_data[18].east_tx_data} \
          {ys[3].xs[2].conns_data[19].east_tx_data} \
          {ys[3].xs[2].conns_data[1].east_tx_data} \
          {ys[3].xs[2].conns_data[20].east_tx_data} \
          {ys[3].xs[2].conns_data[21].east_tx_data} \
          {ys[3].xs[2].conns_data[22].east_tx_data} \
          {ys[3].xs[2].conns_data[23].east_tx_data} \
          {ys[3].xs[2].conns_data[24].east_tx_data} \
          {ys[3].xs[2].conns_data[25].east_tx_data} \
          {ys[3].xs[2].conns_data[26].east_tx_data} \
          {ys[3].xs[2].conns_data[27].east_tx_data} \
          {ys[3].xs[2].conns_data[28].east_tx_data} \
          {ys[3].xs[2].conns_data[29].east_tx_data} \
          {ys[3].xs[2].conns_data[2].east_tx_data} \
          {ys[3].xs[2].conns_data[30].east_tx_data} \
          {ys[3].xs[2].conns_data[31].east_tx_data} \
          {ys[3].xs[2].conns_data[3].east_tx_data} \
          {ys[3].xs[2].conns_data[4].east_tx_data} \
          {ys[3].xs[2].conns_data[5].east_tx_data} \
          {ys[3].xs[2].conns_data[6].east_tx_data} \
          {ys[3].xs[2].conns_data[7].east_tx_data} \
          {ys[3].xs[2].conns_data[8].east_tx_data} \
          {ys[3].xs[2].conns_data[9].east_tx_data} \
          {ys[3].xs[2].conns_vc_info[0].east_rx_g} \
          {ys[3].xs[2].conns_vc_info[0].east_tx_vc} \
          {ys[3].xs[2].conns_vc_info[1].east_rx_g} \
          {ys[3].xs[2].conns_vc_info[1].east_tx_vc}]]
resize_pblock [get_pblocks poly2_3_tx_ew] -add {SLICE_X100Y51:SLICE_X101Y72}
set_property src_info {type:XDC file:1 line:2140 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_3_rx_ns
add_cells_to_pblock [get_pblocks poly2_3_rx_ns] [get_cells -quiet [list \
          {ys[3].xs[2].msg_txrx[0].north_rx} \
          {ys[3].xs[2].msg_txrx[10].north_rx} \
          {ys[3].xs[2].msg_txrx[11].north_rx} \
          {ys[3].xs[2].msg_txrx[12].north_rx} \
          {ys[3].xs[2].msg_txrx[13].north_rx} \
          {ys[3].xs[2].msg_txrx[14].north_rx} \
          {ys[3].xs[2].msg_txrx[15].north_rx} \
          {ys[3].xs[2].msg_txrx[16].north_rx} \
          {ys[3].xs[2].msg_txrx[17].north_rx} \
          {ys[3].xs[2].msg_txrx[18].north_rx} \
          {ys[3].xs[2].msg_txrx[19].north_rx} \
          {ys[3].xs[2].msg_txrx[1].north_rx} \
          {ys[3].xs[2].msg_txrx[20].north_rx} \
          {ys[3].xs[2].msg_txrx[21].north_rx} \
          {ys[3].xs[2].msg_txrx[22].north_rx} \
          {ys[3].xs[2].msg_txrx[23].north_rx} \
          {ys[3].xs[2].msg_txrx[24].north_rx} \
          {ys[3].xs[2].msg_txrx[25].north_rx} \
          {ys[3].xs[2].msg_txrx[26].north_rx} \
          {ys[3].xs[2].msg_txrx[27].north_rx} \
          {ys[3].xs[2].msg_txrx[28].north_rx} \
          {ys[3].xs[2].msg_txrx[29].north_rx} \
          {ys[3].xs[2].msg_txrx[2].north_rx} \
          {ys[3].xs[2].msg_txrx[30].north_rx} \
          {ys[3].xs[2].msg_txrx[31].north_rx} \
          {ys[3].xs[2].msg_txrx[32].north_rx} \
          {ys[3].xs[2].msg_txrx[33].north_rx} \
          {ys[3].xs[2].msg_txrx[34].north_rx} \
          {ys[3].xs[2].msg_txrx[35].north_rx} \
          {ys[3].xs[2].msg_txrx[3].north_rx} \
          {ys[3].xs[2].msg_txrx[4].north_rx} \
          {ys[3].xs[2].msg_txrx[5].north_rx} \
          {ys[3].xs[2].msg_txrx[6].north_rx} \
          {ys[3].xs[2].msg_txrx[7].north_rx} \
          {ys[3].xs[2].msg_txrx[8].north_rx} \
          {ys[3].xs[2].msg_txrx[9].north_rx}]]
resize_pblock [get_pblocks poly2_3_rx_ns] -add {SLICE_X102Y51:SLICE_X111Y52}
set_property src_info {type:XDC file:1 line:2181 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly2_3_tx_ns
add_cells_to_pblock [get_pblocks poly2_3_tx_ns] [get_cells -quiet [list \
          {ys[3].xs[2].msg_txrx[0].south_tx} \
          {ys[3].xs[2].msg_txrx[10].south_tx} \
          {ys[3].xs[2].msg_txrx[11].south_tx} \
          {ys[3].xs[2].msg_txrx[12].south_tx} \
          {ys[3].xs[2].msg_txrx[13].south_tx} \
          {ys[3].xs[2].msg_txrx[14].south_tx} \
          {ys[3].xs[2].msg_txrx[15].south_tx} \
          {ys[3].xs[2].msg_txrx[16].south_tx} \
          {ys[3].xs[2].msg_txrx[17].south_tx} \
          {ys[3].xs[2].msg_txrx[18].south_tx} \
          {ys[3].xs[2].msg_txrx[19].south_tx} \
          {ys[3].xs[2].msg_txrx[1].south_tx} \
          {ys[3].xs[2].msg_txrx[20].south_tx} \
          {ys[3].xs[2].msg_txrx[21].south_tx} \
          {ys[3].xs[2].msg_txrx[22].south_tx} \
          {ys[3].xs[2].msg_txrx[23].south_tx} \
          {ys[3].xs[2].msg_txrx[24].south_tx} \
          {ys[3].xs[2].msg_txrx[25].south_tx} \
          {ys[3].xs[2].msg_txrx[26].south_tx} \
          {ys[3].xs[2].msg_txrx[27].south_tx} \
          {ys[3].xs[2].msg_txrx[28].south_tx} \
          {ys[3].xs[2].msg_txrx[29].south_tx} \
          {ys[3].xs[2].msg_txrx[2].south_tx} \
          {ys[3].xs[2].msg_txrx[30].south_tx} \
          {ys[3].xs[2].msg_txrx[31].south_tx} \
          {ys[3].xs[2].msg_txrx[32].south_tx} \
          {ys[3].xs[2].msg_txrx[33].south_tx} \
          {ys[3].xs[2].msg_txrx[34].south_tx} \
          {ys[3].xs[2].msg_txrx[35].south_tx} \
          {ys[3].xs[2].msg_txrx[3].south_tx} \
          {ys[3].xs[2].msg_txrx[4].south_tx} \
          {ys[3].xs[2].msg_txrx[5].south_tx} \
          {ys[3].xs[2].msg_txrx[6].south_tx} \
          {ys[3].xs[2].msg_txrx[7].south_tx} \
          {ys[3].xs[2].msg_txrx[8].south_tx} \
          {ys[3].xs[2].msg_txrx[9].south_tx}]]
resize_pblock [get_pblocks poly2_3_tx_ns] -add {SLICE_X102Y72:SLICE_X111Y73}
set_property src_info {type:XDC file:1 line:2222 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_0_sw
add_cells_to_pblock [get_pblocks poly3_0_sw] [get_cells -quiet [list {ys[0].xs[3].torus_switch_xy}]]
resize_pblock [get_pblocks poly3_0_sw] -add {SLICE_X58Y16:SLICE_X67Y34}
set_property src_info {type:XDC file:1 line:2228 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_0_cli
add_cells_to_pblock [get_pblocks poly3_0_cli] [get_cells -quiet [list {ys[0].xs[3].client_xy}]]
resize_pblock [get_pblocks poly3_0_cli] -add {SLICE_X56Y0:SLICE_X69Y13 SLICE_X48Y0:SLICE_X55Y36}
set_property src_info {type:XDC file:1 line:2235 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_0_rx_ew
add_cells_to_pblock [get_pblocks poly3_0_rx_ew] [get_cells -quiet [list \
          {ys[0].xs[3].conns_addr[0].west_rx_addr} \
          {ys[0].xs[3].conns_addr[1].west_rx_addr} \
          {ys[0].xs[3].conns_addr[2].west_rx_addr} \
          {ys[0].xs[3].conns_addr[3].west_rx_addr} \
          {ys[0].xs[3].conns_data[0].west_rx_data} \
          {ys[0].xs[3].conns_data[10].west_rx_data} \
          {ys[0].xs[3].conns_data[11].west_rx_data} \
          {ys[0].xs[3].conns_data[12].west_rx_data} \
          {ys[0].xs[3].conns_data[13].west_rx_data} \
          {ys[0].xs[3].conns_data[14].west_rx_data} \
          {ys[0].xs[3].conns_data[15].west_rx_data} \
          {ys[0].xs[3].conns_data[16].west_rx_data} \
          {ys[0].xs[3].conns_data[17].west_rx_data} \
          {ys[0].xs[3].conns_data[18].west_rx_data} \
          {ys[0].xs[3].conns_data[19].west_rx_data} \
          {ys[0].xs[3].conns_data[1].west_rx_data} \
          {ys[0].xs[3].conns_data[20].west_rx_data} \
          {ys[0].xs[3].conns_data[21].west_rx_data} \
          {ys[0].xs[3].conns_data[22].west_rx_data} \
          {ys[0].xs[3].conns_data[23].west_rx_data} \
          {ys[0].xs[3].conns_data[24].west_rx_data} \
          {ys[0].xs[3].conns_data[25].west_rx_data} \
          {ys[0].xs[3].conns_data[26].west_rx_data} \
          {ys[0].xs[3].conns_data[27].west_rx_data} \
          {ys[0].xs[3].conns_data[28].west_rx_data} \
          {ys[0].xs[3].conns_data[29].west_rx_data} \
          {ys[0].xs[3].conns_data[2].west_rx_data} \
          {ys[0].xs[3].conns_data[30].west_rx_data} \
          {ys[0].xs[3].conns_data[31].west_rx_data} \
          {ys[0].xs[3].conns_data[3].west_rx_data} \
          {ys[0].xs[3].conns_data[4].west_rx_data} \
          {ys[0].xs[3].conns_data[5].west_rx_data} \
          {ys[0].xs[3].conns_data[6].west_rx_data} \
          {ys[0].xs[3].conns_data[7].west_rx_data} \
          {ys[0].xs[3].conns_data[8].west_rx_data} \
          {ys[0].xs[3].conns_data[9].west_rx_data} \
          {ys[0].xs[3].conns_vc_info[0].west_rx_vc} \
          {ys[0].xs[3].conns_vc_info[0].west_tx_g} \
          {ys[0].xs[3].conns_vc_info[1].west_rx_vc} \
          {ys[0].xs[3].conns_vc_info[1].west_tx_g}]]
resize_pblock [get_pblocks poly3_0_rx_ew] -add {SLICE_X68Y14:SLICE_X69Y35}
set_property src_info {type:XDC file:1 line:2280 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_0_tx_ew
add_cells_to_pblock [get_pblocks poly3_0_tx_ew] [get_cells -quiet [list \
          {ys[0].xs[3].conns_addr[0].east_tx_addr} \
          {ys[0].xs[3].conns_addr[1].east_tx_addr} \
          {ys[0].xs[3].conns_addr[2].east_tx_addr} \
          {ys[0].xs[3].conns_addr[3].east_tx_addr} \
          {ys[0].xs[3].conns_data[0].east_tx_data} \
          {ys[0].xs[3].conns_data[10].east_tx_data} \
          {ys[0].xs[3].conns_data[11].east_tx_data} \
          {ys[0].xs[3].conns_data[12].east_tx_data} \
          {ys[0].xs[3].conns_data[13].east_tx_data} \
          {ys[0].xs[3].conns_data[14].east_tx_data} \
          {ys[0].xs[3].conns_data[15].east_tx_data} \
          {ys[0].xs[3].conns_data[16].east_tx_data} \
          {ys[0].xs[3].conns_data[17].east_tx_data} \
          {ys[0].xs[3].conns_data[18].east_tx_data} \
          {ys[0].xs[3].conns_data[19].east_tx_data} \
          {ys[0].xs[3].conns_data[1].east_tx_data} \
          {ys[0].xs[3].conns_data[20].east_tx_data} \
          {ys[0].xs[3].conns_data[21].east_tx_data} \
          {ys[0].xs[3].conns_data[22].east_tx_data} \
          {ys[0].xs[3].conns_data[23].east_tx_data} \
          {ys[0].xs[3].conns_data[24].east_tx_data} \
          {ys[0].xs[3].conns_data[25].east_tx_data} \
          {ys[0].xs[3].conns_data[26].east_tx_data} \
          {ys[0].xs[3].conns_data[27].east_tx_data} \
          {ys[0].xs[3].conns_data[28].east_tx_data} \
          {ys[0].xs[3].conns_data[29].east_tx_data} \
          {ys[0].xs[3].conns_data[2].east_tx_data} \
          {ys[0].xs[3].conns_data[30].east_tx_data} \
          {ys[0].xs[3].conns_data[31].east_tx_data} \
          {ys[0].xs[3].conns_data[3].east_tx_data} \
          {ys[0].xs[3].conns_data[4].east_tx_data} \
          {ys[0].xs[3].conns_data[5].east_tx_data} \
          {ys[0].xs[3].conns_data[6].east_tx_data} \
          {ys[0].xs[3].conns_data[7].east_tx_data} \
          {ys[0].xs[3].conns_data[8].east_tx_data} \
          {ys[0].xs[3].conns_data[9].east_tx_data} \
          {ys[0].xs[3].conns_vc_info[0].east_rx_g} \
          {ys[0].xs[3].conns_vc_info[0].east_tx_vc} \
          {ys[0].xs[3].conns_vc_info[1].east_rx_g} \
          {ys[0].xs[3].conns_vc_info[1].east_tx_vc}]]
resize_pblock [get_pblocks poly3_0_tx_ew] -add {SLICE_X56Y14:SLICE_X57Y35}
set_property src_info {type:XDC file:1 line:2325 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_0_rx_ns
add_cells_to_pblock [get_pblocks poly3_0_rx_ns] [get_cells -quiet [list \
          {ys[0].xs[3].msg_txrx[0].north_rx} \
          {ys[0].xs[3].msg_txrx[10].north_rx} \
          {ys[0].xs[3].msg_txrx[11].north_rx} \
          {ys[0].xs[3].msg_txrx[12].north_rx} \
          {ys[0].xs[3].msg_txrx[13].north_rx} \
          {ys[0].xs[3].msg_txrx[14].north_rx} \
          {ys[0].xs[3].msg_txrx[15].north_rx} \
          {ys[0].xs[3].msg_txrx[16].north_rx} \
          {ys[0].xs[3].msg_txrx[17].north_rx} \
          {ys[0].xs[3].msg_txrx[18].north_rx} \
          {ys[0].xs[3].msg_txrx[19].north_rx} \
          {ys[0].xs[3].msg_txrx[1].north_rx} \
          {ys[0].xs[3].msg_txrx[20].north_rx} \
          {ys[0].xs[3].msg_txrx[21].north_rx} \
          {ys[0].xs[3].msg_txrx[22].north_rx} \
          {ys[0].xs[3].msg_txrx[23].north_rx} \
          {ys[0].xs[3].msg_txrx[24].north_rx} \
          {ys[0].xs[3].msg_txrx[25].north_rx} \
          {ys[0].xs[3].msg_txrx[26].north_rx} \
          {ys[0].xs[3].msg_txrx[27].north_rx} \
          {ys[0].xs[3].msg_txrx[28].north_rx} \
          {ys[0].xs[3].msg_txrx[29].north_rx} \
          {ys[0].xs[3].msg_txrx[2].north_rx} \
          {ys[0].xs[3].msg_txrx[30].north_rx} \
          {ys[0].xs[3].msg_txrx[31].north_rx} \
          {ys[0].xs[3].msg_txrx[32].north_rx} \
          {ys[0].xs[3].msg_txrx[33].north_rx} \
          {ys[0].xs[3].msg_txrx[34].north_rx} \
          {ys[0].xs[3].msg_txrx[35].north_rx} \
          {ys[0].xs[3].msg_txrx[3].north_rx} \
          {ys[0].xs[3].msg_txrx[4].north_rx} \
          {ys[0].xs[3].msg_txrx[5].north_rx} \
          {ys[0].xs[3].msg_txrx[6].north_rx} \
          {ys[0].xs[3].msg_txrx[7].north_rx} \
          {ys[0].xs[3].msg_txrx[8].north_rx} \
          {ys[0].xs[3].msg_txrx[9].north_rx}]]
resize_pblock [get_pblocks poly3_0_rx_ns] -add {SLICE_X58Y35:SLICE_X67Y36}
set_property src_info {type:XDC file:1 line:2366 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_0_tx_ns
add_cells_to_pblock [get_pblocks poly3_0_tx_ns] [get_cells -quiet [list \
          {ys[0].xs[3].msg_txrx[0].south_tx} \
          {ys[0].xs[3].msg_txrx[10].south_tx} \
          {ys[0].xs[3].msg_txrx[11].south_tx} \
          {ys[0].xs[3].msg_txrx[12].south_tx} \
          {ys[0].xs[3].msg_txrx[13].south_tx} \
          {ys[0].xs[3].msg_txrx[14].south_tx} \
          {ys[0].xs[3].msg_txrx[15].south_tx} \
          {ys[0].xs[3].msg_txrx[16].south_tx} \
          {ys[0].xs[3].msg_txrx[17].south_tx} \
          {ys[0].xs[3].msg_txrx[18].south_tx} \
          {ys[0].xs[3].msg_txrx[19].south_tx} \
          {ys[0].xs[3].msg_txrx[1].south_tx} \
          {ys[0].xs[3].msg_txrx[20].south_tx} \
          {ys[0].xs[3].msg_txrx[21].south_tx} \
          {ys[0].xs[3].msg_txrx[22].south_tx} \
          {ys[0].xs[3].msg_txrx[23].south_tx} \
          {ys[0].xs[3].msg_txrx[24].south_tx} \
          {ys[0].xs[3].msg_txrx[25].south_tx} \
          {ys[0].xs[3].msg_txrx[26].south_tx} \
          {ys[0].xs[3].msg_txrx[27].south_tx} \
          {ys[0].xs[3].msg_txrx[28].south_tx} \
          {ys[0].xs[3].msg_txrx[29].south_tx} \
          {ys[0].xs[3].msg_txrx[2].south_tx} \
          {ys[0].xs[3].msg_txrx[30].south_tx} \
          {ys[0].xs[3].msg_txrx[31].south_tx} \
          {ys[0].xs[3].msg_txrx[32].south_tx} \
          {ys[0].xs[3].msg_txrx[33].south_tx} \
          {ys[0].xs[3].msg_txrx[34].south_tx} \
          {ys[0].xs[3].msg_txrx[35].south_tx} \
          {ys[0].xs[3].msg_txrx[3].south_tx} \
          {ys[0].xs[3].msg_txrx[4].south_tx} \
          {ys[0].xs[3].msg_txrx[5].south_tx} \
          {ys[0].xs[3].msg_txrx[6].south_tx} \
          {ys[0].xs[3].msg_txrx[7].south_tx} \
          {ys[0].xs[3].msg_txrx[8].south_tx} \
          {ys[0].xs[3].msg_txrx[9].south_tx}]]
resize_pblock [get_pblocks poly3_0_tx_ns] -add {SLICE_X58Y14:SLICE_X67Y15}
set_property src_info {type:XDC file:1 line:2407 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_1_sw
add_cells_to_pblock [get_pblocks poly3_1_sw] [get_cells -quiet [list {ys[1].xs[3].torus_switch_xy}]]
resize_pblock [get_pblocks poly3_1_sw] -add {SLICE_X58Y90:SLICE_X67Y108}
set_property src_info {type:XDC file:1 line:2413 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_1_cli
add_cells_to_pblock [get_pblocks poly3_1_cli] [get_cells -quiet [list {ys[1].xs[3].client_xy}]]
resize_pblock [get_pblocks poly3_1_cli] -add {SLICE_X56Y74:SLICE_X67Y87 SLICE_X48Y74:SLICE_X55Y110}
set_property src_info {type:XDC file:1 line:2420 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_1_rx_ew
add_cells_to_pblock [get_pblocks poly3_1_rx_ew] [get_cells -quiet [list \
          {ys[1].xs[3].conns_addr[0].west_rx_addr} \
          {ys[1].xs[3].conns_addr[1].west_rx_addr} \
          {ys[1].xs[3].conns_addr[2].west_rx_addr} \
          {ys[1].xs[3].conns_addr[3].west_rx_addr} \
          {ys[1].xs[3].conns_data[0].west_rx_data} \
          {ys[1].xs[3].conns_data[10].west_rx_data} \
          {ys[1].xs[3].conns_data[11].west_rx_data} \
          {ys[1].xs[3].conns_data[12].west_rx_data} \
          {ys[1].xs[3].conns_data[13].west_rx_data} \
          {ys[1].xs[3].conns_data[14].west_rx_data} \
          {ys[1].xs[3].conns_data[15].west_rx_data} \
          {ys[1].xs[3].conns_data[16].west_rx_data} \
          {ys[1].xs[3].conns_data[17].west_rx_data} \
          {ys[1].xs[3].conns_data[18].west_rx_data} \
          {ys[1].xs[3].conns_data[19].west_rx_data} \
          {ys[1].xs[3].conns_data[1].west_rx_data} \
          {ys[1].xs[3].conns_data[20].west_rx_data} \
          {ys[1].xs[3].conns_data[21].west_rx_data} \
          {ys[1].xs[3].conns_data[22].west_rx_data} \
          {ys[1].xs[3].conns_data[23].west_rx_data} \
          {ys[1].xs[3].conns_data[24].west_rx_data} \
          {ys[1].xs[3].conns_data[25].west_rx_data} \
          {ys[1].xs[3].conns_data[26].west_rx_data} \
          {ys[1].xs[3].conns_data[27].west_rx_data} \
          {ys[1].xs[3].conns_data[28].west_rx_data} \
          {ys[1].xs[3].conns_data[29].west_rx_data} \
          {ys[1].xs[3].conns_data[2].west_rx_data} \
          {ys[1].xs[3].conns_data[30].west_rx_data} \
          {ys[1].xs[3].conns_data[31].west_rx_data} \
          {ys[1].xs[3].conns_data[3].west_rx_data} \
          {ys[1].xs[3].conns_data[4].west_rx_data} \
          {ys[1].xs[3].conns_data[5].west_rx_data} \
          {ys[1].xs[3].conns_data[6].west_rx_data} \
          {ys[1].xs[3].conns_data[7].west_rx_data} \
          {ys[1].xs[3].conns_data[8].west_rx_data} \
          {ys[1].xs[3].conns_data[9].west_rx_data} \
          {ys[1].xs[3].conns_vc_info[0].west_rx_vc} \
          {ys[1].xs[3].conns_vc_info[0].west_tx_g} \
          {ys[1].xs[3].conns_vc_info[1].west_rx_vc} \
          {ys[1].xs[3].conns_vc_info[1].west_tx_g}]]
set_property src_info {type:XDC file:1 line:2465 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_1_tx_ew
add_cells_to_pblock [get_pblocks poly3_1_tx_ew] [get_cells -quiet [list \
          {ys[1].xs[3].conns_addr[0].east_tx_addr} \
          {ys[1].xs[3].conns_addr[1].east_tx_addr} \
          {ys[1].xs[3].conns_addr[2].east_tx_addr} \
          {ys[1].xs[3].conns_addr[3].east_tx_addr} \
          {ys[1].xs[3].conns_data[0].east_tx_data} \
          {ys[1].xs[3].conns_data[10].east_tx_data} \
          {ys[1].xs[3].conns_data[11].east_tx_data} \
          {ys[1].xs[3].conns_data[12].east_tx_data} \
          {ys[1].xs[3].conns_data[13].east_tx_data} \
          {ys[1].xs[3].conns_data[14].east_tx_data} \
          {ys[1].xs[3].conns_data[15].east_tx_data} \
          {ys[1].xs[3].conns_data[16].east_tx_data} \
          {ys[1].xs[3].conns_data[17].east_tx_data} \
          {ys[1].xs[3].conns_data[18].east_tx_data} \
          {ys[1].xs[3].conns_data[19].east_tx_data} \
          {ys[1].xs[3].conns_data[1].east_tx_data} \
          {ys[1].xs[3].conns_data[20].east_tx_data} \
          {ys[1].xs[3].conns_data[21].east_tx_data} \
          {ys[1].xs[3].conns_data[22].east_tx_data} \
          {ys[1].xs[3].conns_data[23].east_tx_data} \
          {ys[1].xs[3].conns_data[24].east_tx_data} \
          {ys[1].xs[3].conns_data[25].east_tx_data} \
          {ys[1].xs[3].conns_data[26].east_tx_data} \
          {ys[1].xs[3].conns_data[27].east_tx_data} \
          {ys[1].xs[3].conns_data[28].east_tx_data} \
          {ys[1].xs[3].conns_data[29].east_tx_data} \
          {ys[1].xs[3].conns_data[2].east_tx_data} \
          {ys[1].xs[3].conns_data[30].east_tx_data} \
          {ys[1].xs[3].conns_data[31].east_tx_data} \
          {ys[1].xs[3].conns_data[3].east_tx_data} \
          {ys[1].xs[3].conns_data[4].east_tx_data} \
          {ys[1].xs[3].conns_data[5].east_tx_data} \
          {ys[1].xs[3].conns_data[6].east_tx_data} \
          {ys[1].xs[3].conns_data[7].east_tx_data} \
          {ys[1].xs[3].conns_data[8].east_tx_data} \
          {ys[1].xs[3].conns_data[9].east_tx_data} \
          {ys[1].xs[3].conns_vc_info[0].east_rx_g} \
          {ys[1].xs[3].conns_vc_info[0].east_tx_vc} \
          {ys[1].xs[3].conns_vc_info[1].east_rx_g} \
          {ys[1].xs[3].conns_vc_info[1].east_tx_vc}]]
resize_pblock [get_pblocks poly3_1_tx_ew] -add {SLICE_X56Y88:SLICE_X57Y109}
set_property src_info {type:XDC file:1 line:2510 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_1_rx_ns
add_cells_to_pblock [get_pblocks poly3_1_rx_ns] [get_cells -quiet [list \
          {ys[1].xs[3].msg_txrx[0].north_rx} \
          {ys[1].xs[3].msg_txrx[10].north_rx} \
          {ys[1].xs[3].msg_txrx[11].north_rx} \
          {ys[1].xs[3].msg_txrx[12].north_rx} \
          {ys[1].xs[3].msg_txrx[13].north_rx} \
          {ys[1].xs[3].msg_txrx[14].north_rx} \
          {ys[1].xs[3].msg_txrx[15].north_rx} \
          {ys[1].xs[3].msg_txrx[16].north_rx} \
          {ys[1].xs[3].msg_txrx[17].north_rx} \
          {ys[1].xs[3].msg_txrx[18].north_rx} \
          {ys[1].xs[3].msg_txrx[19].north_rx} \
          {ys[1].xs[3].msg_txrx[1].north_rx} \
          {ys[1].xs[3].msg_txrx[20].north_rx} \
          {ys[1].xs[3].msg_txrx[21].north_rx} \
          {ys[1].xs[3].msg_txrx[22].north_rx} \
          {ys[1].xs[3].msg_txrx[23].north_rx} \
          {ys[1].xs[3].msg_txrx[24].north_rx} \
          {ys[1].xs[3].msg_txrx[25].north_rx} \
          {ys[1].xs[3].msg_txrx[26].north_rx} \
          {ys[1].xs[3].msg_txrx[27].north_rx} \
          {ys[1].xs[3].msg_txrx[28].north_rx} \
          {ys[1].xs[3].msg_txrx[29].north_rx} \
          {ys[1].xs[3].msg_txrx[2].north_rx} \
          {ys[1].xs[3].msg_txrx[30].north_rx} \
          {ys[1].xs[3].msg_txrx[31].north_rx} \
          {ys[1].xs[3].msg_txrx[32].north_rx} \
          {ys[1].xs[3].msg_txrx[33].north_rx} \
          {ys[1].xs[3].msg_txrx[34].north_rx} \
          {ys[1].xs[3].msg_txrx[35].north_rx} \
          {ys[1].xs[3].msg_txrx[3].north_rx} \
          {ys[1].xs[3].msg_txrx[4].north_rx} \
          {ys[1].xs[3].msg_txrx[5].north_rx} \
          {ys[1].xs[3].msg_txrx[6].north_rx} \
          {ys[1].xs[3].msg_txrx[7].north_rx} \
          {ys[1].xs[3].msg_txrx[8].north_rx} \
          {ys[1].xs[3].msg_txrx[9].north_rx}]]
resize_pblock [get_pblocks poly3_1_rx_ns] -add {SLICE_X58Y109:SLICE_X67Y110}
set_property src_info {type:XDC file:1 line:2551 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_1_tx_ns
add_cells_to_pblock [get_pblocks poly3_1_tx_ns] [get_cells -quiet [list \
          {ys[1].xs[3].msg_txrx[0].south_tx} \
          {ys[1].xs[3].msg_txrx[10].south_tx} \
          {ys[1].xs[3].msg_txrx[11].south_tx} \
          {ys[1].xs[3].msg_txrx[12].south_tx} \
          {ys[1].xs[3].msg_txrx[13].south_tx} \
          {ys[1].xs[3].msg_txrx[14].south_tx} \
          {ys[1].xs[3].msg_txrx[15].south_tx} \
          {ys[1].xs[3].msg_txrx[16].south_tx} \
          {ys[1].xs[3].msg_txrx[17].south_tx} \
          {ys[1].xs[3].msg_txrx[18].south_tx} \
          {ys[1].xs[3].msg_txrx[19].south_tx} \
          {ys[1].xs[3].msg_txrx[1].south_tx} \
          {ys[1].xs[3].msg_txrx[20].south_tx} \
          {ys[1].xs[3].msg_txrx[21].south_tx} \
          {ys[1].xs[3].msg_txrx[22].south_tx} \
          {ys[1].xs[3].msg_txrx[23].south_tx} \
          {ys[1].xs[3].msg_txrx[24].south_tx} \
          {ys[1].xs[3].msg_txrx[25].south_tx} \
          {ys[1].xs[3].msg_txrx[26].south_tx} \
          {ys[1].xs[3].msg_txrx[27].south_tx} \
          {ys[1].xs[3].msg_txrx[28].south_tx} \
          {ys[1].xs[3].msg_txrx[29].south_tx} \
          {ys[1].xs[3].msg_txrx[2].south_tx} \
          {ys[1].xs[3].msg_txrx[30].south_tx} \
          {ys[1].xs[3].msg_txrx[31].south_tx} \
          {ys[1].xs[3].msg_txrx[32].south_tx} \
          {ys[1].xs[3].msg_txrx[33].south_tx} \
          {ys[1].xs[3].msg_txrx[34].south_tx} \
          {ys[1].xs[3].msg_txrx[35].south_tx} \
          {ys[1].xs[3].msg_txrx[3].south_tx} \
          {ys[1].xs[3].msg_txrx[4].south_tx} \
          {ys[1].xs[3].msg_txrx[5].south_tx} \
          {ys[1].xs[3].msg_txrx[6].south_tx} \
          {ys[1].xs[3].msg_txrx[7].south_tx} \
          {ys[1].xs[3].msg_txrx[8].south_tx} \
          {ys[1].xs[3].msg_txrx[9].south_tx}]]
resize_pblock [get_pblocks poly3_1_tx_ns] -add {SLICE_X58Y88:SLICE_X67Y89}
set_property src_info {type:XDC file:1 line:2592 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_2_sw
add_cells_to_pblock [get_pblocks poly3_2_sw] [get_cells -quiet [list {ys[2].xs[3].torus_switch_xy}]]
resize_pblock [get_pblocks poly3_2_sw] -add {SLICE_X58Y127:SLICE_X67Y145}
set_property src_info {type:XDC file:1 line:2598 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_2_cli
add_cells_to_pblock [get_pblocks poly3_2_cli] [get_cells -quiet [list {ys[2].xs[3].client_xy}]]
resize_pblock [get_pblocks poly3_2_cli] -add {SLICE_X56Y111:SLICE_X67Y124 SLICE_X48Y111:SLICE_X55Y147}
set_property src_info {type:XDC file:1 line:2605 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_2_rx_ew
add_cells_to_pblock [get_pblocks poly3_2_rx_ew] [get_cells -quiet [list \
          {ys[2].xs[3].conns_addr[0].west_rx_addr} \
          {ys[2].xs[3].conns_addr[1].west_rx_addr} \
          {ys[2].xs[3].conns_addr[2].west_rx_addr} \
          {ys[2].xs[3].conns_addr[3].west_rx_addr} \
          {ys[2].xs[3].conns_data[0].west_rx_data} \
          {ys[2].xs[3].conns_data[10].west_rx_data} \
          {ys[2].xs[3].conns_data[11].west_rx_data} \
          {ys[2].xs[3].conns_data[12].west_rx_data} \
          {ys[2].xs[3].conns_data[13].west_rx_data} \
          {ys[2].xs[3].conns_data[14].west_rx_data} \
          {ys[2].xs[3].conns_data[15].west_rx_data} \
          {ys[2].xs[3].conns_data[16].west_rx_data} \
          {ys[2].xs[3].conns_data[17].west_rx_data} \
          {ys[2].xs[3].conns_data[18].west_rx_data} \
          {ys[2].xs[3].conns_data[19].west_rx_data} \
          {ys[2].xs[3].conns_data[1].west_rx_data} \
          {ys[2].xs[3].conns_data[20].west_rx_data} \
          {ys[2].xs[3].conns_data[21].west_rx_data} \
          {ys[2].xs[3].conns_data[22].west_rx_data} \
          {ys[2].xs[3].conns_data[23].west_rx_data} \
          {ys[2].xs[3].conns_data[24].west_rx_data} \
          {ys[2].xs[3].conns_data[25].west_rx_data} \
          {ys[2].xs[3].conns_data[26].west_rx_data} \
          {ys[2].xs[3].conns_data[27].west_rx_data} \
          {ys[2].xs[3].conns_data[28].west_rx_data} \
          {ys[2].xs[3].conns_data[29].west_rx_data} \
          {ys[2].xs[3].conns_data[2].west_rx_data} \
          {ys[2].xs[3].conns_data[30].west_rx_data} \
          {ys[2].xs[3].conns_data[31].west_rx_data} \
          {ys[2].xs[3].conns_data[3].west_rx_data} \
          {ys[2].xs[3].conns_data[4].west_rx_data} \
          {ys[2].xs[3].conns_data[5].west_rx_data} \
          {ys[2].xs[3].conns_data[6].west_rx_data} \
          {ys[2].xs[3].conns_data[7].west_rx_data} \
          {ys[2].xs[3].conns_data[8].west_rx_data} \
          {ys[2].xs[3].conns_data[9].west_rx_data} \
          {ys[2].xs[3].conns_vc_info[0].west_rx_vc} \
          {ys[2].xs[3].conns_vc_info[0].west_tx_g} \
          {ys[2].xs[3].conns_vc_info[1].west_rx_vc} \
          {ys[2].xs[3].conns_vc_info[1].west_tx_g}]]
set_property src_info {type:XDC file:1 line:2650 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_2_tx_ew
add_cells_to_pblock [get_pblocks poly3_2_tx_ew] [get_cells -quiet [list \
          {ys[2].xs[3].conns_addr[0].east_tx_addr} \
          {ys[2].xs[3].conns_addr[1].east_tx_addr} \
          {ys[2].xs[3].conns_addr[2].east_tx_addr} \
          {ys[2].xs[3].conns_addr[3].east_tx_addr} \
          {ys[2].xs[3].conns_data[0].east_tx_data} \
          {ys[2].xs[3].conns_data[10].east_tx_data} \
          {ys[2].xs[3].conns_data[11].east_tx_data} \
          {ys[2].xs[3].conns_data[12].east_tx_data} \
          {ys[2].xs[3].conns_data[13].east_tx_data} \
          {ys[2].xs[3].conns_data[14].east_tx_data} \
          {ys[2].xs[3].conns_data[15].east_tx_data} \
          {ys[2].xs[3].conns_data[16].east_tx_data} \
          {ys[2].xs[3].conns_data[17].east_tx_data} \
          {ys[2].xs[3].conns_data[18].east_tx_data} \
          {ys[2].xs[3].conns_data[19].east_tx_data} \
          {ys[2].xs[3].conns_data[1].east_tx_data} \
          {ys[2].xs[3].conns_data[20].east_tx_data} \
          {ys[2].xs[3].conns_data[21].east_tx_data} \
          {ys[2].xs[3].conns_data[22].east_tx_data} \
          {ys[2].xs[3].conns_data[23].east_tx_data} \
          {ys[2].xs[3].conns_data[24].east_tx_data} \
          {ys[2].xs[3].conns_data[25].east_tx_data} \
          {ys[2].xs[3].conns_data[26].east_tx_data} \
          {ys[2].xs[3].conns_data[27].east_tx_data} \
          {ys[2].xs[3].conns_data[28].east_tx_data} \
          {ys[2].xs[3].conns_data[29].east_tx_data} \
          {ys[2].xs[3].conns_data[2].east_tx_data} \
          {ys[2].xs[3].conns_data[30].east_tx_data} \
          {ys[2].xs[3].conns_data[31].east_tx_data} \
          {ys[2].xs[3].conns_data[3].east_tx_data} \
          {ys[2].xs[3].conns_data[4].east_tx_data} \
          {ys[2].xs[3].conns_data[5].east_tx_data} \
          {ys[2].xs[3].conns_data[6].east_tx_data} \
          {ys[2].xs[3].conns_data[7].east_tx_data} \
          {ys[2].xs[3].conns_data[8].east_tx_data} \
          {ys[2].xs[3].conns_data[9].east_tx_data} \
          {ys[2].xs[3].conns_vc_info[0].east_rx_g} \
          {ys[2].xs[3].conns_vc_info[0].east_tx_vc} \
          {ys[2].xs[3].conns_vc_info[1].east_rx_g} \
          {ys[2].xs[3].conns_vc_info[1].east_tx_vc}]]
resize_pblock [get_pblocks poly3_2_tx_ew] -add {SLICE_X56Y125:SLICE_X57Y146}
set_property src_info {type:XDC file:1 line:2695 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_2_rx_ns
add_cells_to_pblock [get_pblocks poly3_2_rx_ns] [get_cells -quiet [list \
          {ys[2].xs[3].msg_txrx[0].north_rx} \
          {ys[2].xs[3].msg_txrx[10].north_rx} \
          {ys[2].xs[3].msg_txrx[11].north_rx} \
          {ys[2].xs[3].msg_txrx[12].north_rx} \
          {ys[2].xs[3].msg_txrx[13].north_rx} \
          {ys[2].xs[3].msg_txrx[14].north_rx} \
          {ys[2].xs[3].msg_txrx[15].north_rx} \
          {ys[2].xs[3].msg_txrx[16].north_rx} \
          {ys[2].xs[3].msg_txrx[17].north_rx} \
          {ys[2].xs[3].msg_txrx[18].north_rx} \
          {ys[2].xs[3].msg_txrx[19].north_rx} \
          {ys[2].xs[3].msg_txrx[1].north_rx} \
          {ys[2].xs[3].msg_txrx[20].north_rx} \
          {ys[2].xs[3].msg_txrx[21].north_rx} \
          {ys[2].xs[3].msg_txrx[22].north_rx} \
          {ys[2].xs[3].msg_txrx[23].north_rx} \
          {ys[2].xs[3].msg_txrx[24].north_rx} \
          {ys[2].xs[3].msg_txrx[25].north_rx} \
          {ys[2].xs[3].msg_txrx[26].north_rx} \
          {ys[2].xs[3].msg_txrx[27].north_rx} \
          {ys[2].xs[3].msg_txrx[28].north_rx} \
          {ys[2].xs[3].msg_txrx[29].north_rx} \
          {ys[2].xs[3].msg_txrx[2].north_rx} \
          {ys[2].xs[3].msg_txrx[30].north_rx} \
          {ys[2].xs[3].msg_txrx[31].north_rx} \
          {ys[2].xs[3].msg_txrx[32].north_rx} \
          {ys[2].xs[3].msg_txrx[33].north_rx} \
          {ys[2].xs[3].msg_txrx[34].north_rx} \
          {ys[2].xs[3].msg_txrx[35].north_rx} \
          {ys[2].xs[3].msg_txrx[3].north_rx} \
          {ys[2].xs[3].msg_txrx[4].north_rx} \
          {ys[2].xs[3].msg_txrx[5].north_rx} \
          {ys[2].xs[3].msg_txrx[6].north_rx} \
          {ys[2].xs[3].msg_txrx[7].north_rx} \
          {ys[2].xs[3].msg_txrx[8].north_rx} \
          {ys[2].xs[3].msg_txrx[9].north_rx}]]
resize_pblock [get_pblocks poly3_2_rx_ns] -add {SLICE_X58Y125:SLICE_X67Y126}
set_property src_info {type:XDC file:1 line:2736 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_2_tx_ns
add_cells_to_pblock [get_pblocks poly3_2_tx_ns] [get_cells -quiet [list \
          {ys[2].xs[3].msg_txrx[0].south_tx} \
          {ys[2].xs[3].msg_txrx[10].south_tx} \
          {ys[2].xs[3].msg_txrx[11].south_tx} \
          {ys[2].xs[3].msg_txrx[12].south_tx} \
          {ys[2].xs[3].msg_txrx[13].south_tx} \
          {ys[2].xs[3].msg_txrx[14].south_tx} \
          {ys[2].xs[3].msg_txrx[15].south_tx} \
          {ys[2].xs[3].msg_txrx[16].south_tx} \
          {ys[2].xs[3].msg_txrx[17].south_tx} \
          {ys[2].xs[3].msg_txrx[18].south_tx} \
          {ys[2].xs[3].msg_txrx[19].south_tx} \
          {ys[2].xs[3].msg_txrx[1].south_tx} \
          {ys[2].xs[3].msg_txrx[20].south_tx} \
          {ys[2].xs[3].msg_txrx[21].south_tx} \
          {ys[2].xs[3].msg_txrx[22].south_tx} \
          {ys[2].xs[3].msg_txrx[23].south_tx} \
          {ys[2].xs[3].msg_txrx[24].south_tx} \
          {ys[2].xs[3].msg_txrx[25].south_tx} \
          {ys[2].xs[3].msg_txrx[26].south_tx} \
          {ys[2].xs[3].msg_txrx[27].south_tx} \
          {ys[2].xs[3].msg_txrx[28].south_tx} \
          {ys[2].xs[3].msg_txrx[29].south_tx} \
          {ys[2].xs[3].msg_txrx[2].south_tx} \
          {ys[2].xs[3].msg_txrx[30].south_tx} \
          {ys[2].xs[3].msg_txrx[31].south_tx} \
          {ys[2].xs[3].msg_txrx[32].south_tx} \
          {ys[2].xs[3].msg_txrx[33].south_tx} \
          {ys[2].xs[3].msg_txrx[34].south_tx} \
          {ys[2].xs[3].msg_txrx[35].south_tx} \
          {ys[2].xs[3].msg_txrx[3].south_tx} \
          {ys[2].xs[3].msg_txrx[4].south_tx} \
          {ys[2].xs[3].msg_txrx[5].south_tx} \
          {ys[2].xs[3].msg_txrx[6].south_tx} \
          {ys[2].xs[3].msg_txrx[7].south_tx} \
          {ys[2].xs[3].msg_txrx[8].south_tx} \
          {ys[2].xs[3].msg_txrx[9].south_tx}]]
resize_pblock [get_pblocks poly3_2_tx_ns] -add {SLICE_X58Y146:SLICE_X67Y147}
set_property src_info {type:XDC file:1 line:2777 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_3_sw
add_cells_to_pblock [get_pblocks poly3_3_sw] [get_cells -quiet [list {ys[3].xs[3].torus_switch_xy}]]
resize_pblock [get_pblocks poly3_3_sw] -add {SLICE_X58Y53:SLICE_X67Y71}
set_property src_info {type:XDC file:1 line:2783 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_3_cli
add_cells_to_pblock [get_pblocks poly3_3_cli] [get_cells -quiet [list {ys[3].xs[3].client_xy}]]
resize_pblock [get_pblocks poly3_3_cli] -add {SLICE_X68Y37:SLICE_X69Y49 SLICE_X56Y37:SLICE_X67Y50 SLICE_X48Y37:SLICE_X55Y73}
set_property src_info {type:XDC file:1 line:2790 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_3_rx_ew
add_cells_to_pblock [get_pblocks poly3_3_rx_ew] [get_cells -quiet [list \
          {ys[3].xs[3].conns_addr[0].west_rx_addr} \
          {ys[3].xs[3].conns_addr[1].west_rx_addr} \
          {ys[3].xs[3].conns_addr[2].west_rx_addr} \
          {ys[3].xs[3].conns_addr[3].west_rx_addr} \
          {ys[3].xs[3].conns_data[0].west_rx_data} \
          {ys[3].xs[3].conns_data[10].west_rx_data} \
          {ys[3].xs[3].conns_data[11].west_rx_data} \
          {ys[3].xs[3].conns_data[12].west_rx_data} \
          {ys[3].xs[3].conns_data[13].west_rx_data} \
          {ys[3].xs[3].conns_data[14].west_rx_data} \
          {ys[3].xs[3].conns_data[15].west_rx_data} \
          {ys[3].xs[3].conns_data[16].west_rx_data} \
          {ys[3].xs[3].conns_data[17].west_rx_data} \
          {ys[3].xs[3].conns_data[18].west_rx_data} \
          {ys[3].xs[3].conns_data[19].west_rx_data} \
          {ys[3].xs[3].conns_data[1].west_rx_data} \
          {ys[3].xs[3].conns_data[20].west_rx_data} \
          {ys[3].xs[3].conns_data[21].west_rx_data} \
          {ys[3].xs[3].conns_data[22].west_rx_data} \
          {ys[3].xs[3].conns_data[23].west_rx_data} \
          {ys[3].xs[3].conns_data[24].west_rx_data} \
          {ys[3].xs[3].conns_data[25].west_rx_data} \
          {ys[3].xs[3].conns_data[26].west_rx_data} \
          {ys[3].xs[3].conns_data[27].west_rx_data} \
          {ys[3].xs[3].conns_data[28].west_rx_data} \
          {ys[3].xs[3].conns_data[29].west_rx_data} \
          {ys[3].xs[3].conns_data[2].west_rx_data} \
          {ys[3].xs[3].conns_data[30].west_rx_data} \
          {ys[3].xs[3].conns_data[31].west_rx_data} \
          {ys[3].xs[3].conns_data[3].west_rx_data} \
          {ys[3].xs[3].conns_data[4].west_rx_data} \
          {ys[3].xs[3].conns_data[5].west_rx_data} \
          {ys[3].xs[3].conns_data[6].west_rx_data} \
          {ys[3].xs[3].conns_data[7].west_rx_data} \
          {ys[3].xs[3].conns_data[8].west_rx_data} \
          {ys[3].xs[3].conns_data[9].west_rx_data} \
          {ys[3].xs[3].conns_vc_info[0].west_rx_vc} \
          {ys[3].xs[3].conns_vc_info[0].west_tx_g} \
          {ys[3].xs[3].conns_vc_info[1].west_rx_vc} \
          {ys[3].xs[3].conns_vc_info[1].west_tx_g}]]
set_property src_info {type:XDC file:1 line:2835 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_3_tx_ew
add_cells_to_pblock [get_pblocks poly3_3_tx_ew] [get_cells -quiet [list \
          {ys[3].xs[3].conns_addr[0].east_tx_addr} \
          {ys[3].xs[3].conns_addr[1].east_tx_addr} \
          {ys[3].xs[3].conns_addr[2].east_tx_addr} \
          {ys[3].xs[3].conns_addr[3].east_tx_addr} \
          {ys[3].xs[3].conns_data[0].east_tx_data} \
          {ys[3].xs[3].conns_data[10].east_tx_data} \
          {ys[3].xs[3].conns_data[11].east_tx_data} \
          {ys[3].xs[3].conns_data[12].east_tx_data} \
          {ys[3].xs[3].conns_data[13].east_tx_data} \
          {ys[3].xs[3].conns_data[14].east_tx_data} \
          {ys[3].xs[3].conns_data[15].east_tx_data} \
          {ys[3].xs[3].conns_data[16].east_tx_data} \
          {ys[3].xs[3].conns_data[17].east_tx_data} \
          {ys[3].xs[3].conns_data[18].east_tx_data} \
          {ys[3].xs[3].conns_data[19].east_tx_data} \
          {ys[3].xs[3].conns_data[1].east_tx_data} \
          {ys[3].xs[3].conns_data[20].east_tx_data} \
          {ys[3].xs[3].conns_data[21].east_tx_data} \
          {ys[3].xs[3].conns_data[22].east_tx_data} \
          {ys[3].xs[3].conns_data[23].east_tx_data} \
          {ys[3].xs[3].conns_data[24].east_tx_data} \
          {ys[3].xs[3].conns_data[25].east_tx_data} \
          {ys[3].xs[3].conns_data[26].east_tx_data} \
          {ys[3].xs[3].conns_data[27].east_tx_data} \
          {ys[3].xs[3].conns_data[28].east_tx_data} \
          {ys[3].xs[3].conns_data[29].east_tx_data} \
          {ys[3].xs[3].conns_data[2].east_tx_data} \
          {ys[3].xs[3].conns_data[30].east_tx_data} \
          {ys[3].xs[3].conns_data[31].east_tx_data} \
          {ys[3].xs[3].conns_data[3].east_tx_data} \
          {ys[3].xs[3].conns_data[4].east_tx_data} \
          {ys[3].xs[3].conns_data[5].east_tx_data} \
          {ys[3].xs[3].conns_data[6].east_tx_data} \
          {ys[3].xs[3].conns_data[7].east_tx_data} \
          {ys[3].xs[3].conns_data[8].east_tx_data} \
          {ys[3].xs[3].conns_data[9].east_tx_data} \
          {ys[3].xs[3].conns_vc_info[0].east_rx_g} \
          {ys[3].xs[3].conns_vc_info[0].east_tx_vc} \
          {ys[3].xs[3].conns_vc_info[1].east_rx_g} \
          {ys[3].xs[3].conns_vc_info[1].east_tx_vc}]]
resize_pblock [get_pblocks poly3_3_tx_ew] -add {SLICE_X56Y51:SLICE_X57Y72}
set_property src_info {type:XDC file:1 line:2880 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_3_rx_ns
add_cells_to_pblock [get_pblocks poly3_3_rx_ns] [get_cells -quiet [list \
          {ys[3].xs[3].msg_txrx[0].north_rx} \
          {ys[3].xs[3].msg_txrx[10].north_rx} \
          {ys[3].xs[3].msg_txrx[11].north_rx} \
          {ys[3].xs[3].msg_txrx[12].north_rx} \
          {ys[3].xs[3].msg_txrx[13].north_rx} \
          {ys[3].xs[3].msg_txrx[14].north_rx} \
          {ys[3].xs[3].msg_txrx[15].north_rx} \
          {ys[3].xs[3].msg_txrx[16].north_rx} \
          {ys[3].xs[3].msg_txrx[17].north_rx} \
          {ys[3].xs[3].msg_txrx[18].north_rx} \
          {ys[3].xs[3].msg_txrx[19].north_rx} \
          {ys[3].xs[3].msg_txrx[1].north_rx} \
          {ys[3].xs[3].msg_txrx[20].north_rx} \
          {ys[3].xs[3].msg_txrx[21].north_rx} \
          {ys[3].xs[3].msg_txrx[22].north_rx} \
          {ys[3].xs[3].msg_txrx[23].north_rx} \
          {ys[3].xs[3].msg_txrx[24].north_rx} \
          {ys[3].xs[3].msg_txrx[25].north_rx} \
          {ys[3].xs[3].msg_txrx[26].north_rx} \
          {ys[3].xs[3].msg_txrx[27].north_rx} \
          {ys[3].xs[3].msg_txrx[28].north_rx} \
          {ys[3].xs[3].msg_txrx[29].north_rx} \
          {ys[3].xs[3].msg_txrx[2].north_rx} \
          {ys[3].xs[3].msg_txrx[30].north_rx} \
          {ys[3].xs[3].msg_txrx[31].north_rx} \
          {ys[3].xs[3].msg_txrx[32].north_rx} \
          {ys[3].xs[3].msg_txrx[33].north_rx} \
          {ys[3].xs[3].msg_txrx[34].north_rx} \
          {ys[3].xs[3].msg_txrx[35].north_rx} \
          {ys[3].xs[3].msg_txrx[3].north_rx} \
          {ys[3].xs[3].msg_txrx[4].north_rx} \
          {ys[3].xs[3].msg_txrx[5].north_rx} \
          {ys[3].xs[3].msg_txrx[6].north_rx} \
          {ys[3].xs[3].msg_txrx[7].north_rx} \
          {ys[3].xs[3].msg_txrx[8].north_rx} \
          {ys[3].xs[3].msg_txrx[9].north_rx}]]
resize_pblock [get_pblocks poly3_3_rx_ns] -add {SLICE_X58Y51:SLICE_X67Y52}
set_property src_info {type:XDC file:1 line:2921 export:INPUT save:INPUT read:READ} [current_design]
create_pblock poly3_3_tx_ns
add_cells_to_pblock [get_pblocks poly3_3_tx_ns] [get_cells -quiet [list \
          {ys[3].xs[3].msg_txrx[0].south_tx} \
          {ys[3].xs[3].msg_txrx[10].south_tx} \
          {ys[3].xs[3].msg_txrx[11].south_tx} \
          {ys[3].xs[3].msg_txrx[12].south_tx} \
          {ys[3].xs[3].msg_txrx[13].south_tx} \
          {ys[3].xs[3].msg_txrx[14].south_tx} \
          {ys[3].xs[3].msg_txrx[15].south_tx} \
          {ys[3].xs[3].msg_txrx[16].south_tx} \
          {ys[3].xs[3].msg_txrx[17].south_tx} \
          {ys[3].xs[3].msg_txrx[18].south_tx} \
          {ys[3].xs[3].msg_txrx[19].south_tx} \
          {ys[3].xs[3].msg_txrx[1].south_tx} \
          {ys[3].xs[3].msg_txrx[20].south_tx} \
          {ys[3].xs[3].msg_txrx[21].south_tx} \
          {ys[3].xs[3].msg_txrx[22].south_tx} \
          {ys[3].xs[3].msg_txrx[23].south_tx} \
          {ys[3].xs[3].msg_txrx[24].south_tx} \
          {ys[3].xs[3].msg_txrx[25].south_tx} \
          {ys[3].xs[3].msg_txrx[26].south_tx} \
          {ys[3].xs[3].msg_txrx[27].south_tx} \
          {ys[3].xs[3].msg_txrx[28].south_tx} \
          {ys[3].xs[3].msg_txrx[29].south_tx} \
          {ys[3].xs[3].msg_txrx[2].south_tx} \
          {ys[3].xs[3].msg_txrx[30].south_tx} \
          {ys[3].xs[3].msg_txrx[31].south_tx} \
          {ys[3].xs[3].msg_txrx[32].south_tx} \
          {ys[3].xs[3].msg_txrx[33].south_tx} \
          {ys[3].xs[3].msg_txrx[34].south_tx} \
          {ys[3].xs[3].msg_txrx[35].south_tx} \
          {ys[3].xs[3].msg_txrx[3].south_tx} \
          {ys[3].xs[3].msg_txrx[4].south_tx} \
          {ys[3].xs[3].msg_txrx[5].south_tx} \
          {ys[3].xs[3].msg_txrx[6].south_tx} \
          {ys[3].xs[3].msg_txrx[7].south_tx} \
          {ys[3].xs[3].msg_txrx[8].south_tx} \
          {ys[3].xs[3].msg_txrx[9].south_tx}]]
resize_pblock [get_pblocks poly3_3_tx_ns] -add {SLICE_X58Y72:SLICE_X67Y73}
