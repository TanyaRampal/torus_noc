
createInstGroup poly0_0_sw
create_group -name poly0_0_sw -type {fence} -rects {160 160 356 356 }
addInstToInstGroup poly0_0_sw ys[0].xs[0].torus_switch_xy


createInstGroup poly0_0_cli
create_group -name poly0_0_cli -type {fence} -rects {0 0 374 141 0 141 141 374 }
addInstToInstGroup poly0_0_cli ys[0].xs[0].client_xy


createInstGroup poly0_0_rx_ew
create_group -name poly0_0_rx_ew -type {fence} -rects {142 142 159 373 }
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_vc_info[0].west_rx_vc
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_vc_info[0].west_tx_g
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_vc_info[1].west_rx_vc
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_vc_info[1].west_tx_g
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[0].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[1].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[2].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[3].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[4].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[5].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[6].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[7].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[8].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[9].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[10].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[11].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[12].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[13].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[14].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[15].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[16].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[17].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[18].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[19].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[20].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[21].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[22].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[23].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[24].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[25].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[26].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[27].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[28].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[29].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[30].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_data[31].west_rx_data
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_addr[0].west_rx_addr
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_addr[1].west_rx_addr
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_addr[2].west_rx_addr
addInstToInstGroup poly0_0_rx_ew ys[0].xs[0].conns_addr[3].west_rx_addr


createInstGroup poly0_0_tx_ew
create_group -name poly0_0_tx_ew -type {fence} -rects {357 142 374 373 }
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_vc_info[0].east_tx_vc
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_vc_info[0].east_rx_g
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_vc_info[1].east_tx_vc
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_vc_info[1].east_rx_g
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[0].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[1].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[2].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[3].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[4].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[5].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[6].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[7].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[8].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[9].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[10].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[11].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[12].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[13].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[14].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[15].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[16].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[17].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[18].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[19].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[20].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[21].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[22].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[23].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[24].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[25].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[26].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[27].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[28].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[29].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[30].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_data[31].east_tx_data
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_addr[0].east_tx_addr
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_addr[1].east_tx_addr
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_addr[2].east_tx_addr
addInstToInstGroup poly0_0_tx_ew ys[0].xs[0].conns_addr[3].east_tx_addr


createInstGroup poly0_0_rx_ns
create_group -name poly0_0_rx_ns -type {fence} -rects {160 357 356 374 }
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[0].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[1].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[2].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[3].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[4].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[5].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[6].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[7].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[8].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[9].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[10].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[11].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[12].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[13].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[14].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[15].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[16].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[17].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[18].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[19].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[20].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[21].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[22].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[23].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[24].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[25].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[26].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[27].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[28].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[29].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[30].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[31].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[32].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[33].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[34].north_rx
addInstToInstGroup poly0_0_rx_ns ys[0].xs[0].msg_txrx[35].north_rx


createInstGroup poly0_0_tx_ns
create_group -name poly0_0_tx_ns -type {fence} -rects {160 142 356 159 }
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[0].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[1].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[2].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[3].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[4].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[5].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[6].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[7].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[8].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[9].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[10].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[11].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[12].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[13].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[14].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[15].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[16].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[17].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[18].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[19].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[20].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[21].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[22].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[23].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[24].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[25].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[26].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[27].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[28].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[29].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[30].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[31].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[32].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[33].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[34].south_tx
addInstToInstGroup poly0_0_tx_ns ys[0].xs[0].msg_txrx[35].south_tx


createInstGroup poly0_1_sw
create_group -name poly0_1_sw -type {fence} -rects {160 910 356 1106 }
addInstToInstGroup poly0_1_sw ys[1].xs[0].torus_switch_xy


createInstGroup poly0_1_cli
create_group -name poly0_1_cli -type {fence} -rects {0 750 374 891 0 891 141 1124 }
addInstToInstGroup poly0_1_cli ys[1].xs[0].client_xy


createInstGroup poly0_1_rx_ew
create_group -name poly0_1_rx_ew -type {fence} -rects {142 892 159 1123 }
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_vc_info[0].west_rx_vc
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_vc_info[0].west_tx_g
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_vc_info[1].west_rx_vc
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_vc_info[1].west_tx_g
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[0].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[1].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[2].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[3].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[4].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[5].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[6].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[7].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[8].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[9].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[10].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[11].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[12].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[13].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[14].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[15].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[16].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[17].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[18].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[19].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[20].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[21].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[22].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[23].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[24].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[25].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[26].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[27].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[28].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[29].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[30].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_data[31].west_rx_data
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_addr[0].west_rx_addr
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_addr[1].west_rx_addr
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_addr[2].west_rx_addr
addInstToInstGroup poly0_1_rx_ew ys[1].xs[0].conns_addr[3].west_rx_addr


createInstGroup poly0_1_tx_ew
create_group -name poly0_1_tx_ew -type {fence} -rects {357 892 374 1123 }
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_vc_info[0].east_tx_vc
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_vc_info[0].east_rx_g
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_vc_info[1].east_tx_vc
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_vc_info[1].east_rx_g
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[0].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[1].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[2].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[3].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[4].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[5].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[6].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[7].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[8].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[9].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[10].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[11].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[12].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[13].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[14].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[15].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[16].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[17].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[18].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[19].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[20].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[21].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[22].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[23].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[24].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[25].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[26].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[27].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[28].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[29].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[30].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_data[31].east_tx_data
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_addr[0].east_tx_addr
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_addr[1].east_tx_addr
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_addr[2].east_tx_addr
addInstToInstGroup poly0_1_tx_ew ys[1].xs[0].conns_addr[3].east_tx_addr


createInstGroup poly0_1_rx_ns
create_group -name poly0_1_rx_ns -type {fence} -rects {160 1107 356 1124 }
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[0].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[1].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[2].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[3].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[4].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[5].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[6].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[7].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[8].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[9].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[10].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[11].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[12].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[13].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[14].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[15].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[16].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[17].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[18].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[19].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[20].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[21].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[22].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[23].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[24].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[25].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[26].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[27].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[28].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[29].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[30].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[31].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[32].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[33].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[34].north_rx
addInstToInstGroup poly0_1_rx_ns ys[1].xs[0].msg_txrx[35].north_rx


createInstGroup poly0_1_tx_ns
create_group -name poly0_1_tx_ns -type {fence} -rects {160 892 356 909 }
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[0].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[1].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[2].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[3].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[4].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[5].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[6].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[7].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[8].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[9].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[10].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[11].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[12].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[13].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[14].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[15].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[16].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[17].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[18].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[19].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[20].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[21].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[22].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[23].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[24].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[25].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[26].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[27].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[28].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[29].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[30].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[31].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[32].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[33].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[34].south_tx
addInstToInstGroup poly0_1_tx_ns ys[1].xs[0].msg_txrx[35].south_tx


createInstGroup poly0_2_sw
create_group -name poly0_2_sw -type {fence} -rects {160 1285 356 1481 }
addInstToInstGroup poly0_2_sw ys[2].xs[0].torus_switch_xy


createInstGroup poly0_2_cli
create_group -name poly0_2_cli -type {fence} -rects {0 1125 374 1266 0 1266 141 1499 }
addInstToInstGroup poly0_2_cli ys[2].xs[0].client_xy


createInstGroup poly0_2_rx_ew
create_group -name poly0_2_rx_ew -type {fence} -rects {142 1267 159 1498 }
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_vc_info[0].west_rx_vc
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_vc_info[0].west_tx_g
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_vc_info[1].west_rx_vc
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_vc_info[1].west_tx_g
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[0].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[1].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[2].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[3].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[4].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[5].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[6].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[7].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[8].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[9].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[10].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[11].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[12].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[13].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[14].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[15].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[16].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[17].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[18].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[19].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[20].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[21].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[22].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[23].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[24].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[25].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[26].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[27].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[28].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[29].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[30].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_data[31].west_rx_data
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_addr[0].west_rx_addr
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_addr[1].west_rx_addr
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_addr[2].west_rx_addr
addInstToInstGroup poly0_2_rx_ew ys[2].xs[0].conns_addr[3].west_rx_addr


createInstGroup poly0_2_tx_ew
create_group -name poly0_2_tx_ew -type {fence} -rects {357 1267 374 1498 }
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_vc_info[0].east_tx_vc
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_vc_info[0].east_rx_g
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_vc_info[1].east_tx_vc
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_vc_info[1].east_rx_g
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[0].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[1].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[2].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[3].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[4].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[5].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[6].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[7].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[8].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[9].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[10].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[11].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[12].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[13].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[14].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[15].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[16].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[17].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[18].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[19].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[20].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[21].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[22].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[23].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[24].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[25].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[26].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[27].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[28].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[29].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[30].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_data[31].east_tx_data
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_addr[0].east_tx_addr
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_addr[1].east_tx_addr
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_addr[2].east_tx_addr
addInstToInstGroup poly0_2_tx_ew ys[2].xs[0].conns_addr[3].east_tx_addr


createInstGroup poly0_2_rx_ns
create_group -name poly0_2_rx_ns -type {fence} -rects {160 1267 356 1284 }
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[0].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[1].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[2].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[3].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[4].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[5].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[6].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[7].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[8].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[9].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[10].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[11].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[12].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[13].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[14].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[15].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[16].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[17].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[18].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[19].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[20].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[21].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[22].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[23].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[24].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[25].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[26].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[27].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[28].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[29].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[30].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[31].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[32].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[33].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[34].north_rx
addInstToInstGroup poly0_2_rx_ns ys[2].xs[0].msg_txrx[35].north_rx


createInstGroup poly0_2_tx_ns
create_group -name poly0_2_tx_ns -type {fence} -rects {160 1482 356 1499 }
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[0].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[1].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[2].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[3].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[4].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[5].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[6].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[7].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[8].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[9].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[10].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[11].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[12].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[13].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[14].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[15].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[16].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[17].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[18].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[19].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[20].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[21].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[22].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[23].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[24].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[25].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[26].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[27].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[28].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[29].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[30].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[31].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[32].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[33].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[34].south_tx
addInstToInstGroup poly0_2_tx_ns ys[2].xs[0].msg_txrx[35].south_tx


createInstGroup poly0_3_sw
create_group -name poly0_3_sw -type {fence} -rects {160 535 356 731 }
addInstToInstGroup poly0_3_sw ys[3].xs[0].torus_switch_xy


createInstGroup poly0_3_cli
create_group -name poly0_3_cli -type {fence} -rects {0 375 374 516 0 516 141 749 }
addInstToInstGroup poly0_3_cli ys[3].xs[0].client_xy


createInstGroup poly0_3_rx_ew
create_group -name poly0_3_rx_ew -type {fence} -rects {142 517 159 748 }
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_vc_info[0].west_rx_vc
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_vc_info[0].west_tx_g
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_vc_info[1].west_rx_vc
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_vc_info[1].west_tx_g
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[0].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[1].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[2].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[3].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[4].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[5].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[6].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[7].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[8].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[9].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[10].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[11].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[12].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[13].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[14].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[15].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[16].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[17].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[18].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[19].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[20].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[21].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[22].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[23].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[24].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[25].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[26].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[27].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[28].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[29].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[30].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_data[31].west_rx_data
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_addr[0].west_rx_addr
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_addr[1].west_rx_addr
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_addr[2].west_rx_addr
addInstToInstGroup poly0_3_rx_ew ys[3].xs[0].conns_addr[3].west_rx_addr


createInstGroup poly0_3_tx_ew
create_group -name poly0_3_tx_ew -type {fence} -rects {357 517 374 748 }
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_vc_info[0].east_tx_vc
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_vc_info[0].east_rx_g
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_vc_info[1].east_tx_vc
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_vc_info[1].east_rx_g
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[0].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[1].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[2].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[3].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[4].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[5].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[6].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[7].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[8].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[9].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[10].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[11].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[12].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[13].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[14].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[15].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[16].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[17].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[18].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[19].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[20].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[21].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[22].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[23].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[24].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[25].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[26].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[27].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[28].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[29].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[30].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_data[31].east_tx_data
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_addr[0].east_tx_addr
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_addr[1].east_tx_addr
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_addr[2].east_tx_addr
addInstToInstGroup poly0_3_tx_ew ys[3].xs[0].conns_addr[3].east_tx_addr


createInstGroup poly0_3_rx_ns
create_group -name poly0_3_rx_ns -type {fence} -rects {160 517 356 534 }
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[0].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[1].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[2].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[3].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[4].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[5].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[6].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[7].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[8].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[9].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[10].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[11].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[12].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[13].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[14].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[15].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[16].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[17].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[18].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[19].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[20].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[21].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[22].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[23].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[24].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[25].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[26].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[27].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[28].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[29].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[30].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[31].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[32].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[33].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[34].north_rx
addInstToInstGroup poly0_3_rx_ns ys[3].xs[0].msg_txrx[35].north_rx


createInstGroup poly0_3_tx_ns
create_group -name poly0_3_tx_ns -type {fence} -rects {160 732 356 749 }
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[0].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[1].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[2].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[3].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[4].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[5].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[6].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[7].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[8].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[9].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[10].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[11].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[12].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[13].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[14].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[15].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[16].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[17].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[18].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[19].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[20].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[21].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[22].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[23].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[24].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[25].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[26].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[27].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[28].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[29].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[30].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[31].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[32].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[33].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[34].south_tx
addInstToInstGroup poly0_3_tx_ns ys[3].xs[0].msg_txrx[35].south_tx


createInstGroup poly1_0_sw
create_group -name poly1_0_sw -type {fence} -rects {910 160 1106 356 }
addInstToInstGroup poly1_0_sw ys[0].xs[1].torus_switch_xy


createInstGroup poly1_0_cli
create_group -name poly1_0_cli -type {fence} -rects {750 0 1124 141 750 141 891 374 }
addInstToInstGroup poly1_0_cli ys[0].xs[1].client_xy


createInstGroup poly1_0_rx_ew
create_group -name poly1_0_rx_ew -type {fence} -rects {892 142 909 373 }
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_vc_info[0].west_rx_vc
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_vc_info[0].west_tx_g
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_vc_info[1].west_rx_vc
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_vc_info[1].west_tx_g
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[0].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[1].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[2].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[3].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[4].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[5].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[6].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[7].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[8].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[9].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[10].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[11].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[12].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[13].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[14].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[15].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[16].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[17].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[18].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[19].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[20].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[21].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[22].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[23].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[24].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[25].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[26].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[27].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[28].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[29].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[30].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_data[31].west_rx_data
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_addr[0].west_rx_addr
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_addr[1].west_rx_addr
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_addr[2].west_rx_addr
addInstToInstGroup poly1_0_rx_ew ys[0].xs[1].conns_addr[3].west_rx_addr


createInstGroup poly1_0_tx_ew
create_group -name poly1_0_tx_ew -type {fence} -rects {1107 142 1124 373 }
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_vc_info[0].east_tx_vc
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_vc_info[0].east_rx_g
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_vc_info[1].east_tx_vc
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_vc_info[1].east_rx_g
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[0].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[1].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[2].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[3].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[4].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[5].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[6].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[7].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[8].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[9].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[10].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[11].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[12].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[13].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[14].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[15].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[16].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[17].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[18].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[19].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[20].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[21].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[22].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[23].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[24].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[25].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[26].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[27].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[28].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[29].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[30].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_data[31].east_tx_data
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_addr[0].east_tx_addr
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_addr[1].east_tx_addr
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_addr[2].east_tx_addr
addInstToInstGroup poly1_0_tx_ew ys[0].xs[1].conns_addr[3].east_tx_addr


createInstGroup poly1_0_rx_ns
create_group -name poly1_0_rx_ns -type {fence} -rects {910 357 1106 374 }
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[0].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[1].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[2].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[3].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[4].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[5].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[6].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[7].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[8].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[9].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[10].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[11].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[12].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[13].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[14].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[15].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[16].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[17].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[18].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[19].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[20].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[21].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[22].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[23].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[24].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[25].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[26].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[27].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[28].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[29].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[30].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[31].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[32].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[33].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[34].north_rx
addInstToInstGroup poly1_0_rx_ns ys[0].xs[1].msg_txrx[35].north_rx


createInstGroup poly1_0_tx_ns
create_group -name poly1_0_tx_ns -type {fence} -rects {910 142 1106 159 }
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[0].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[1].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[2].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[3].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[4].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[5].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[6].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[7].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[8].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[9].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[10].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[11].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[12].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[13].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[14].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[15].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[16].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[17].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[18].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[19].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[20].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[21].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[22].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[23].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[24].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[25].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[26].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[27].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[28].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[29].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[30].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[31].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[32].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[33].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[34].south_tx
addInstToInstGroup poly1_0_tx_ns ys[0].xs[1].msg_txrx[35].south_tx


createInstGroup poly1_1_sw
create_group -name poly1_1_sw -type {fence} -rects {910 910 1106 1106 }
addInstToInstGroup poly1_1_sw ys[1].xs[1].torus_switch_xy


createInstGroup poly1_1_cli
create_group -name poly1_1_cli -type {fence} -rects {750 750 1124 891 750 891 891 1124 }
addInstToInstGroup poly1_1_cli ys[1].xs[1].client_xy


createInstGroup poly1_1_rx_ew
create_group -name poly1_1_rx_ew -type {fence} -rects {892 892 909 1123 }
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_vc_info[0].west_rx_vc
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_vc_info[0].west_tx_g
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_vc_info[1].west_rx_vc
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_vc_info[1].west_tx_g
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[0].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[1].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[2].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[3].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[4].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[5].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[6].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[7].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[8].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[9].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[10].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[11].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[12].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[13].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[14].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[15].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[16].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[17].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[18].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[19].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[20].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[21].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[22].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[23].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[24].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[25].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[26].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[27].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[28].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[29].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[30].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_data[31].west_rx_data
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_addr[0].west_rx_addr
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_addr[1].west_rx_addr
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_addr[2].west_rx_addr
addInstToInstGroup poly1_1_rx_ew ys[1].xs[1].conns_addr[3].west_rx_addr


createInstGroup poly1_1_tx_ew
create_group -name poly1_1_tx_ew -type {fence} -rects {1107 892 1124 1123 }
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_vc_info[0].east_tx_vc
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_vc_info[0].east_rx_g
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_vc_info[1].east_tx_vc
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_vc_info[1].east_rx_g
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[0].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[1].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[2].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[3].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[4].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[5].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[6].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[7].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[8].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[9].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[10].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[11].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[12].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[13].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[14].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[15].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[16].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[17].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[18].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[19].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[20].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[21].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[22].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[23].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[24].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[25].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[26].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[27].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[28].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[29].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[30].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_data[31].east_tx_data
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_addr[0].east_tx_addr
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_addr[1].east_tx_addr
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_addr[2].east_tx_addr
addInstToInstGroup poly1_1_tx_ew ys[1].xs[1].conns_addr[3].east_tx_addr


createInstGroup poly1_1_rx_ns
create_group -name poly1_1_rx_ns -type {fence} -rects {910 1107 1106 1124 }
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[0].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[1].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[2].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[3].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[4].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[5].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[6].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[7].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[8].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[9].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[10].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[11].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[12].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[13].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[14].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[15].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[16].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[17].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[18].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[19].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[20].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[21].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[22].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[23].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[24].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[25].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[26].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[27].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[28].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[29].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[30].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[31].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[32].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[33].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[34].north_rx
addInstToInstGroup poly1_1_rx_ns ys[1].xs[1].msg_txrx[35].north_rx


createInstGroup poly1_1_tx_ns
create_group -name poly1_1_tx_ns -type {fence} -rects {910 892 1106 909 }
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[0].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[1].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[2].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[3].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[4].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[5].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[6].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[7].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[8].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[9].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[10].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[11].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[12].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[13].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[14].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[15].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[16].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[17].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[18].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[19].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[20].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[21].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[22].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[23].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[24].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[25].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[26].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[27].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[28].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[29].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[30].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[31].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[32].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[33].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[34].south_tx
addInstToInstGroup poly1_1_tx_ns ys[1].xs[1].msg_txrx[35].south_tx


createInstGroup poly1_2_sw
create_group -name poly1_2_sw -type {fence} -rects {910 1285 1106 1481 }
addInstToInstGroup poly1_2_sw ys[2].xs[1].torus_switch_xy


createInstGroup poly1_2_cli
create_group -name poly1_2_cli -type {fence} -rects {750 1125 1124 1266 750 1266 891 1499 }
addInstToInstGroup poly1_2_cli ys[2].xs[1].client_xy


createInstGroup poly1_2_rx_ew
create_group -name poly1_2_rx_ew -type {fence} -rects {892 1267 909 1498 }
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_vc_info[0].west_rx_vc
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_vc_info[0].west_tx_g
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_vc_info[1].west_rx_vc
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_vc_info[1].west_tx_g
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[0].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[1].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[2].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[3].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[4].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[5].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[6].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[7].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[8].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[9].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[10].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[11].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[12].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[13].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[14].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[15].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[16].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[17].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[18].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[19].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[20].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[21].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[22].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[23].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[24].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[25].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[26].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[27].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[28].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[29].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[30].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_data[31].west_rx_data
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_addr[0].west_rx_addr
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_addr[1].west_rx_addr
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_addr[2].west_rx_addr
addInstToInstGroup poly1_2_rx_ew ys[2].xs[1].conns_addr[3].west_rx_addr


createInstGroup poly1_2_tx_ew
create_group -name poly1_2_tx_ew -type {fence} -rects {1107 1267 1124 1498 }
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_vc_info[0].east_tx_vc
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_vc_info[0].east_rx_g
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_vc_info[1].east_tx_vc
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_vc_info[1].east_rx_g
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[0].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[1].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[2].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[3].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[4].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[5].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[6].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[7].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[8].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[9].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[10].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[11].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[12].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[13].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[14].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[15].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[16].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[17].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[18].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[19].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[20].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[21].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[22].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[23].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[24].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[25].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[26].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[27].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[28].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[29].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[30].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_data[31].east_tx_data
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_addr[0].east_tx_addr
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_addr[1].east_tx_addr
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_addr[2].east_tx_addr
addInstToInstGroup poly1_2_tx_ew ys[2].xs[1].conns_addr[3].east_tx_addr


createInstGroup poly1_2_rx_ns
create_group -name poly1_2_rx_ns -type {fence} -rects {910 1267 1106 1284 }
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[0].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[1].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[2].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[3].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[4].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[5].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[6].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[7].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[8].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[9].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[10].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[11].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[12].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[13].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[14].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[15].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[16].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[17].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[18].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[19].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[20].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[21].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[22].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[23].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[24].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[25].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[26].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[27].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[28].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[29].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[30].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[31].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[32].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[33].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[34].north_rx
addInstToInstGroup poly1_2_rx_ns ys[2].xs[1].msg_txrx[35].north_rx


createInstGroup poly1_2_tx_ns
create_group -name poly1_2_tx_ns -type {fence} -rects {910 1482 1106 1499 }
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[0].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[1].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[2].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[3].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[4].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[5].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[6].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[7].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[8].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[9].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[10].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[11].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[12].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[13].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[14].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[15].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[16].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[17].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[18].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[19].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[20].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[21].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[22].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[23].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[24].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[25].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[26].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[27].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[28].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[29].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[30].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[31].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[32].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[33].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[34].south_tx
addInstToInstGroup poly1_2_tx_ns ys[2].xs[1].msg_txrx[35].south_tx


createInstGroup poly1_3_sw
create_group -name poly1_3_sw -type {fence} -rects {910 535 1106 731 }
addInstToInstGroup poly1_3_sw ys[3].xs[1].torus_switch_xy


createInstGroup poly1_3_cli
create_group -name poly1_3_cli -type {fence} -rects {750 375 1124 516 750 516 891 749 }
addInstToInstGroup poly1_3_cli ys[3].xs[1].client_xy


createInstGroup poly1_3_rx_ew
create_group -name poly1_3_rx_ew -type {fence} -rects {892 517 909 748 }
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_vc_info[0].west_rx_vc
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_vc_info[0].west_tx_g
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_vc_info[1].west_rx_vc
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_vc_info[1].west_tx_g
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[0].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[1].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[2].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[3].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[4].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[5].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[6].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[7].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[8].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[9].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[10].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[11].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[12].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[13].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[14].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[15].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[16].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[17].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[18].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[19].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[20].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[21].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[22].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[23].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[24].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[25].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[26].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[27].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[28].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[29].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[30].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_data[31].west_rx_data
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_addr[0].west_rx_addr
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_addr[1].west_rx_addr
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_addr[2].west_rx_addr
addInstToInstGroup poly1_3_rx_ew ys[3].xs[1].conns_addr[3].west_rx_addr


createInstGroup poly1_3_tx_ew
create_group -name poly1_3_tx_ew -type {fence} -rects {1107 517 1124 748 }
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_vc_info[0].east_tx_vc
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_vc_info[0].east_rx_g
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_vc_info[1].east_tx_vc
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_vc_info[1].east_rx_g
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[0].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[1].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[2].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[3].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[4].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[5].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[6].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[7].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[8].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[9].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[10].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[11].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[12].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[13].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[14].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[15].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[16].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[17].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[18].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[19].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[20].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[21].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[22].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[23].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[24].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[25].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[26].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[27].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[28].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[29].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[30].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_data[31].east_tx_data
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_addr[0].east_tx_addr
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_addr[1].east_tx_addr
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_addr[2].east_tx_addr
addInstToInstGroup poly1_3_tx_ew ys[3].xs[1].conns_addr[3].east_tx_addr


createInstGroup poly1_3_rx_ns
create_group -name poly1_3_rx_ns -type {fence} -rects {910 517 1106 534 }
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[0].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[1].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[2].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[3].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[4].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[5].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[6].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[7].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[8].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[9].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[10].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[11].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[12].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[13].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[14].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[15].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[16].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[17].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[18].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[19].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[20].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[21].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[22].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[23].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[24].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[25].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[26].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[27].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[28].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[29].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[30].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[31].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[32].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[33].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[34].north_rx
addInstToInstGroup poly1_3_rx_ns ys[3].xs[1].msg_txrx[35].north_rx


createInstGroup poly1_3_tx_ns
create_group -name poly1_3_tx_ns -type {fence} -rects {910 732 1106 749 }
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[0].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[1].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[2].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[3].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[4].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[5].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[6].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[7].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[8].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[9].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[10].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[11].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[12].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[13].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[14].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[15].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[16].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[17].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[18].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[19].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[20].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[21].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[22].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[23].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[24].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[25].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[26].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[27].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[28].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[29].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[30].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[31].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[32].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[33].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[34].south_tx
addInstToInstGroup poly1_3_tx_ns ys[3].xs[1].msg_txrx[35].south_tx


createInstGroup poly2_0_sw
create_group -name poly2_0_sw -type {fence} -rects {1285 160 1481 356 }
addInstToInstGroup poly2_0_sw ys[0].xs[2].torus_switch_xy


createInstGroup poly2_0_cli
create_group -name poly2_0_cli -type {fence} -rects {1125 0 1499 141 1125 141 1266 374 }
addInstToInstGroup poly2_0_cli ys[0].xs[2].client_xy


createInstGroup poly2_0_rx_ew
create_group -name poly2_0_rx_ew -type {fence} -rects {1482 142 1499 373 }
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_vc_info[0].west_rx_vc
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_vc_info[0].west_tx_g
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_vc_info[1].west_rx_vc
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_vc_info[1].west_tx_g
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[0].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[1].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[2].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[3].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[4].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[5].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[6].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[7].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[8].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[9].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[10].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[11].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[12].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[13].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[14].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[15].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[16].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[17].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[18].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[19].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[20].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[21].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[22].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[23].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[24].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[25].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[26].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[27].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[28].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[29].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[30].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_data[31].west_rx_data
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_addr[0].west_rx_addr
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_addr[1].west_rx_addr
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_addr[2].west_rx_addr
addInstToInstGroup poly2_0_rx_ew ys[0].xs[2].conns_addr[3].west_rx_addr


createInstGroup poly2_0_tx_ew
create_group -name poly2_0_tx_ew -type {fence} -rects {1267 142 1284 373 }
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_vc_info[0].east_tx_vc
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_vc_info[0].east_rx_g
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_vc_info[1].east_tx_vc
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_vc_info[1].east_rx_g
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[0].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[1].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[2].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[3].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[4].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[5].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[6].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[7].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[8].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[9].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[10].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[11].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[12].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[13].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[14].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[15].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[16].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[17].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[18].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[19].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[20].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[21].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[22].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[23].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[24].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[25].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[26].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[27].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[28].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[29].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[30].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_data[31].east_tx_data
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_addr[0].east_tx_addr
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_addr[1].east_tx_addr
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_addr[2].east_tx_addr
addInstToInstGroup poly2_0_tx_ew ys[0].xs[2].conns_addr[3].east_tx_addr


createInstGroup poly2_0_rx_ns
create_group -name poly2_0_rx_ns -type {fence} -rects {1285 357 1481 374 }
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[0].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[1].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[2].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[3].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[4].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[5].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[6].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[7].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[8].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[9].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[10].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[11].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[12].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[13].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[14].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[15].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[16].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[17].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[18].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[19].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[20].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[21].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[22].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[23].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[24].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[25].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[26].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[27].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[28].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[29].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[30].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[31].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[32].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[33].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[34].north_rx
addInstToInstGroup poly2_0_rx_ns ys[0].xs[2].msg_txrx[35].north_rx


createInstGroup poly2_0_tx_ns
create_group -name poly2_0_tx_ns -type {fence} -rects {1285 142 1481 159 }
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[0].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[1].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[2].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[3].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[4].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[5].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[6].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[7].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[8].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[9].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[10].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[11].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[12].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[13].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[14].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[15].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[16].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[17].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[18].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[19].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[20].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[21].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[22].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[23].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[24].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[25].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[26].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[27].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[28].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[29].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[30].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[31].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[32].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[33].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[34].south_tx
addInstToInstGroup poly2_0_tx_ns ys[0].xs[2].msg_txrx[35].south_tx


createInstGroup poly2_1_sw
create_group -name poly2_1_sw -type {fence} -rects {1285 910 1481 1106 }
addInstToInstGroup poly2_1_sw ys[1].xs[2].torus_switch_xy


createInstGroup poly2_1_cli
create_group -name poly2_1_cli -type {fence} -rects {1125 750 1499 891 1125 891 1266 1124 }
addInstToInstGroup poly2_1_cli ys[1].xs[2].client_xy


createInstGroup poly2_1_rx_ew
create_group -name poly2_1_rx_ew -type {fence} -rects {1482 892 1499 1123 }
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_vc_info[0].west_rx_vc
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_vc_info[0].west_tx_g
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_vc_info[1].west_rx_vc
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_vc_info[1].west_tx_g
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[0].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[1].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[2].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[3].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[4].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[5].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[6].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[7].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[8].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[9].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[10].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[11].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[12].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[13].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[14].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[15].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[16].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[17].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[18].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[19].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[20].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[21].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[22].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[23].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[24].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[25].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[26].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[27].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[28].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[29].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[30].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_data[31].west_rx_data
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_addr[0].west_rx_addr
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_addr[1].west_rx_addr
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_addr[2].west_rx_addr
addInstToInstGroup poly2_1_rx_ew ys[1].xs[2].conns_addr[3].west_rx_addr


createInstGroup poly2_1_tx_ew
create_group -name poly2_1_tx_ew -type {fence} -rects {1267 892 1284 1123 }
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_vc_info[0].east_tx_vc
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_vc_info[0].east_rx_g
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_vc_info[1].east_tx_vc
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_vc_info[1].east_rx_g
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[0].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[1].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[2].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[3].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[4].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[5].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[6].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[7].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[8].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[9].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[10].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[11].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[12].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[13].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[14].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[15].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[16].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[17].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[18].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[19].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[20].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[21].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[22].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[23].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[24].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[25].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[26].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[27].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[28].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[29].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[30].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_data[31].east_tx_data
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_addr[0].east_tx_addr
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_addr[1].east_tx_addr
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_addr[2].east_tx_addr
addInstToInstGroup poly2_1_tx_ew ys[1].xs[2].conns_addr[3].east_tx_addr


createInstGroup poly2_1_rx_ns
create_group -name poly2_1_rx_ns -type {fence} -rects {1285 1107 1481 1124 }
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[0].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[1].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[2].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[3].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[4].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[5].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[6].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[7].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[8].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[9].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[10].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[11].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[12].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[13].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[14].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[15].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[16].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[17].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[18].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[19].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[20].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[21].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[22].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[23].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[24].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[25].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[26].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[27].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[28].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[29].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[30].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[31].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[32].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[33].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[34].north_rx
addInstToInstGroup poly2_1_rx_ns ys[1].xs[2].msg_txrx[35].north_rx


createInstGroup poly2_1_tx_ns
create_group -name poly2_1_tx_ns -type {fence} -rects {1285 892 1481 909 }
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[0].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[1].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[2].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[3].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[4].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[5].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[6].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[7].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[8].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[9].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[10].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[11].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[12].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[13].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[14].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[15].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[16].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[17].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[18].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[19].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[20].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[21].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[22].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[23].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[24].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[25].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[26].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[27].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[28].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[29].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[30].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[31].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[32].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[33].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[34].south_tx
addInstToInstGroup poly2_1_tx_ns ys[1].xs[2].msg_txrx[35].south_tx


createInstGroup poly2_2_sw
create_group -name poly2_2_sw -type {fence} -rects {1285 1285 1481 1481 }
addInstToInstGroup poly2_2_sw ys[2].xs[2].torus_switch_xy


createInstGroup poly2_2_cli
create_group -name poly2_2_cli -type {fence} -rects {1125 1125 1499 1266 1125 1266 1266 1499 }
addInstToInstGroup poly2_2_cli ys[2].xs[2].client_xy


createInstGroup poly2_2_rx_ew
create_group -name poly2_2_rx_ew -type {fence} -rects {1482 1267 1499 1498 }
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_vc_info[0].west_rx_vc
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_vc_info[0].west_tx_g
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_vc_info[1].west_rx_vc
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_vc_info[1].west_tx_g
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[0].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[1].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[2].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[3].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[4].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[5].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[6].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[7].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[8].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[9].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[10].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[11].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[12].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[13].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[14].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[15].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[16].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[17].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[18].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[19].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[20].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[21].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[22].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[23].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[24].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[25].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[26].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[27].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[28].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[29].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[30].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_data[31].west_rx_data
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_addr[0].west_rx_addr
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_addr[1].west_rx_addr
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_addr[2].west_rx_addr
addInstToInstGroup poly2_2_rx_ew ys[2].xs[2].conns_addr[3].west_rx_addr


createInstGroup poly2_2_tx_ew
create_group -name poly2_2_tx_ew -type {fence} -rects {1267 1267 1284 1498 }
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_vc_info[0].east_tx_vc
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_vc_info[0].east_rx_g
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_vc_info[1].east_tx_vc
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_vc_info[1].east_rx_g
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[0].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[1].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[2].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[3].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[4].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[5].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[6].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[7].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[8].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[9].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[10].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[11].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[12].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[13].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[14].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[15].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[16].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[17].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[18].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[19].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[20].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[21].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[22].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[23].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[24].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[25].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[26].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[27].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[28].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[29].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[30].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_data[31].east_tx_data
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_addr[0].east_tx_addr
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_addr[1].east_tx_addr
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_addr[2].east_tx_addr
addInstToInstGroup poly2_2_tx_ew ys[2].xs[2].conns_addr[3].east_tx_addr


createInstGroup poly2_2_rx_ns
create_group -name poly2_2_rx_ns -type {fence} -rects {1285 1267 1481 1284 }
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[0].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[1].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[2].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[3].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[4].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[5].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[6].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[7].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[8].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[9].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[10].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[11].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[12].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[13].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[14].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[15].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[16].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[17].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[18].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[19].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[20].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[21].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[22].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[23].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[24].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[25].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[26].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[27].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[28].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[29].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[30].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[31].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[32].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[33].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[34].north_rx
addInstToInstGroup poly2_2_rx_ns ys[2].xs[2].msg_txrx[35].north_rx


createInstGroup poly2_2_tx_ns
create_group -name poly2_2_tx_ns -type {fence} -rects {1285 1482 1481 1499 }
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[0].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[1].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[2].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[3].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[4].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[5].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[6].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[7].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[8].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[9].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[10].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[11].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[12].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[13].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[14].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[15].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[16].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[17].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[18].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[19].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[20].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[21].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[22].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[23].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[24].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[25].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[26].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[27].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[28].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[29].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[30].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[31].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[32].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[33].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[34].south_tx
addInstToInstGroup poly2_2_tx_ns ys[2].xs[2].msg_txrx[35].south_tx


createInstGroup poly2_3_sw
create_group -name poly2_3_sw -type {fence} -rects {1285 535 1481 731 }
addInstToInstGroup poly2_3_sw ys[3].xs[2].torus_switch_xy


createInstGroup poly2_3_cli
create_group -name poly2_3_cli -type {fence} -rects {1125 375 1499 516 1125 516 1266 749 }
addInstToInstGroup poly2_3_cli ys[3].xs[2].client_xy


createInstGroup poly2_3_rx_ew
create_group -name poly2_3_rx_ew -type {fence} -rects {1482 517 1499 748 }
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_vc_info[0].west_rx_vc
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_vc_info[0].west_tx_g
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_vc_info[1].west_rx_vc
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_vc_info[1].west_tx_g
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[0].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[1].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[2].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[3].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[4].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[5].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[6].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[7].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[8].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[9].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[10].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[11].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[12].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[13].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[14].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[15].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[16].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[17].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[18].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[19].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[20].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[21].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[22].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[23].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[24].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[25].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[26].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[27].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[28].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[29].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[30].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_data[31].west_rx_data
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_addr[0].west_rx_addr
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_addr[1].west_rx_addr
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_addr[2].west_rx_addr
addInstToInstGroup poly2_3_rx_ew ys[3].xs[2].conns_addr[3].west_rx_addr


createInstGroup poly2_3_tx_ew
create_group -name poly2_3_tx_ew -type {fence} -rects {1267 517 1284 748 }
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_vc_info[0].east_tx_vc
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_vc_info[0].east_rx_g
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_vc_info[1].east_tx_vc
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_vc_info[1].east_rx_g
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[0].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[1].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[2].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[3].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[4].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[5].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[6].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[7].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[8].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[9].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[10].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[11].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[12].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[13].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[14].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[15].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[16].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[17].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[18].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[19].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[20].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[21].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[22].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[23].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[24].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[25].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[26].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[27].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[28].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[29].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[30].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_data[31].east_tx_data
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_addr[0].east_tx_addr
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_addr[1].east_tx_addr
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_addr[2].east_tx_addr
addInstToInstGroup poly2_3_tx_ew ys[3].xs[2].conns_addr[3].east_tx_addr


createInstGroup poly2_3_rx_ns
create_group -name poly2_3_rx_ns -type {fence} -rects {1285 517 1481 534 }
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[0].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[1].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[2].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[3].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[4].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[5].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[6].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[7].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[8].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[9].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[10].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[11].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[12].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[13].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[14].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[15].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[16].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[17].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[18].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[19].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[20].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[21].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[22].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[23].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[24].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[25].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[26].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[27].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[28].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[29].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[30].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[31].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[32].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[33].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[34].north_rx
addInstToInstGroup poly2_3_rx_ns ys[3].xs[2].msg_txrx[35].north_rx


createInstGroup poly2_3_tx_ns
create_group -name poly2_3_tx_ns -type {fence} -rects {1285 732 1481 749 }
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[0].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[1].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[2].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[3].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[4].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[5].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[6].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[7].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[8].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[9].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[10].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[11].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[12].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[13].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[14].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[15].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[16].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[17].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[18].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[19].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[20].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[21].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[22].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[23].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[24].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[25].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[26].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[27].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[28].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[29].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[30].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[31].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[32].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[33].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[34].south_tx
addInstToInstGroup poly2_3_tx_ns ys[3].xs[2].msg_txrx[35].south_tx


createInstGroup poly3_0_sw
create_group -name poly3_0_sw -type {fence} -rects {535 160 731 356 }
addInstToInstGroup poly3_0_sw ys[0].xs[3].torus_switch_xy


createInstGroup poly3_0_cli
create_group -name poly3_0_cli -type {fence} -rects {375 0 749 141 375 141 516 374 }
addInstToInstGroup poly3_0_cli ys[0].xs[3].client_xy


createInstGroup poly3_0_rx_ew
create_group -name poly3_0_rx_ew -type {fence} -rects {732 142 749 373 }
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_vc_info[0].west_rx_vc
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_vc_info[0].west_tx_g
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_vc_info[1].west_rx_vc
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_vc_info[1].west_tx_g
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[0].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[1].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[2].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[3].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[4].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[5].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[6].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[7].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[8].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[9].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[10].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[11].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[12].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[13].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[14].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[15].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[16].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[17].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[18].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[19].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[20].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[21].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[22].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[23].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[24].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[25].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[26].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[27].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[28].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[29].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[30].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_data[31].west_rx_data
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_addr[0].west_rx_addr
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_addr[1].west_rx_addr
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_addr[2].west_rx_addr
addInstToInstGroup poly3_0_rx_ew ys[0].xs[3].conns_addr[3].west_rx_addr


createInstGroup poly3_0_tx_ew
create_group -name poly3_0_tx_ew -type {fence} -rects {517 142 534 373 }
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_vc_info[0].east_tx_vc
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_vc_info[0].east_rx_g
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_vc_info[1].east_tx_vc
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_vc_info[1].east_rx_g
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[0].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[1].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[2].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[3].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[4].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[5].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[6].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[7].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[8].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[9].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[10].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[11].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[12].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[13].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[14].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[15].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[16].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[17].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[18].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[19].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[20].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[21].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[22].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[23].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[24].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[25].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[26].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[27].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[28].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[29].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[30].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_data[31].east_tx_data
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_addr[0].east_tx_addr
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_addr[1].east_tx_addr
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_addr[2].east_tx_addr
addInstToInstGroup poly3_0_tx_ew ys[0].xs[3].conns_addr[3].east_tx_addr


createInstGroup poly3_0_rx_ns
create_group -name poly3_0_rx_ns -type {fence} -rects {535 357 731 374 }
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[0].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[1].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[2].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[3].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[4].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[5].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[6].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[7].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[8].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[9].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[10].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[11].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[12].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[13].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[14].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[15].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[16].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[17].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[18].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[19].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[20].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[21].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[22].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[23].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[24].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[25].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[26].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[27].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[28].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[29].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[30].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[31].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[32].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[33].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[34].north_rx
addInstToInstGroup poly3_0_rx_ns ys[0].xs[3].msg_txrx[35].north_rx


createInstGroup poly3_0_tx_ns
create_group -name poly3_0_tx_ns -type {fence} -rects {535 142 731 159 }
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[0].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[1].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[2].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[3].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[4].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[5].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[6].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[7].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[8].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[9].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[10].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[11].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[12].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[13].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[14].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[15].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[16].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[17].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[18].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[19].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[20].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[21].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[22].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[23].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[24].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[25].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[26].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[27].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[28].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[29].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[30].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[31].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[32].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[33].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[34].south_tx
addInstToInstGroup poly3_0_tx_ns ys[0].xs[3].msg_txrx[35].south_tx


createInstGroup poly3_1_sw
create_group -name poly3_1_sw -type {fence} -rects {535 910 731 1106 }
addInstToInstGroup poly3_1_sw ys[1].xs[3].torus_switch_xy


createInstGroup poly3_1_cli
create_group -name poly3_1_cli -type {fence} -rects {375 750 749 891 375 891 516 1124 }
addInstToInstGroup poly3_1_cli ys[1].xs[3].client_xy


createInstGroup poly3_1_rx_ew
create_group -name poly3_1_rx_ew -type {fence} -rects {732 892 749 1123 }
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_vc_info[0].west_rx_vc
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_vc_info[0].west_tx_g
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_vc_info[1].west_rx_vc
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_vc_info[1].west_tx_g
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[0].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[1].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[2].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[3].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[4].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[5].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[6].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[7].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[8].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[9].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[10].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[11].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[12].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[13].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[14].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[15].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[16].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[17].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[18].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[19].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[20].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[21].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[22].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[23].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[24].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[25].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[26].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[27].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[28].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[29].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[30].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_data[31].west_rx_data
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_addr[0].west_rx_addr
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_addr[1].west_rx_addr
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_addr[2].west_rx_addr
addInstToInstGroup poly3_1_rx_ew ys[1].xs[3].conns_addr[3].west_rx_addr


createInstGroup poly3_1_tx_ew
create_group -name poly3_1_tx_ew -type {fence} -rects {517 892 534 1123 }
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_vc_info[0].east_tx_vc
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_vc_info[0].east_rx_g
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_vc_info[1].east_tx_vc
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_vc_info[1].east_rx_g
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[0].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[1].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[2].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[3].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[4].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[5].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[6].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[7].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[8].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[9].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[10].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[11].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[12].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[13].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[14].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[15].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[16].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[17].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[18].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[19].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[20].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[21].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[22].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[23].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[24].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[25].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[26].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[27].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[28].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[29].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[30].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_data[31].east_tx_data
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_addr[0].east_tx_addr
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_addr[1].east_tx_addr
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_addr[2].east_tx_addr
addInstToInstGroup poly3_1_tx_ew ys[1].xs[3].conns_addr[3].east_tx_addr


createInstGroup poly3_1_rx_ns
create_group -name poly3_1_rx_ns -type {fence} -rects {535 1107 731 1124 }
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[0].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[1].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[2].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[3].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[4].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[5].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[6].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[7].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[8].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[9].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[10].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[11].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[12].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[13].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[14].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[15].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[16].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[17].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[18].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[19].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[20].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[21].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[22].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[23].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[24].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[25].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[26].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[27].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[28].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[29].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[30].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[31].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[32].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[33].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[34].north_rx
addInstToInstGroup poly3_1_rx_ns ys[1].xs[3].msg_txrx[35].north_rx


createInstGroup poly3_1_tx_ns
create_group -name poly3_1_tx_ns -type {fence} -rects {535 892 731 909 }
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[0].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[1].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[2].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[3].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[4].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[5].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[6].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[7].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[8].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[9].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[10].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[11].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[12].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[13].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[14].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[15].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[16].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[17].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[18].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[19].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[20].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[21].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[22].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[23].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[24].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[25].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[26].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[27].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[28].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[29].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[30].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[31].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[32].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[33].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[34].south_tx
addInstToInstGroup poly3_1_tx_ns ys[1].xs[3].msg_txrx[35].south_tx


createInstGroup poly3_2_sw
create_group -name poly3_2_sw -type {fence} -rects {535 1285 731 1481 }
addInstToInstGroup poly3_2_sw ys[2].xs[3].torus_switch_xy


createInstGroup poly3_2_cli
create_group -name poly3_2_cli -type {fence} -rects {375 1125 749 1266 375 1266 516 1499 }
addInstToInstGroup poly3_2_cli ys[2].xs[3].client_xy


createInstGroup poly3_2_rx_ew
create_group -name poly3_2_rx_ew -type {fence} -rects {732 1267 749 1498 }
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_vc_info[0].west_rx_vc
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_vc_info[0].west_tx_g
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_vc_info[1].west_rx_vc
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_vc_info[1].west_tx_g
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[0].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[1].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[2].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[3].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[4].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[5].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[6].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[7].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[8].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[9].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[10].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[11].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[12].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[13].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[14].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[15].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[16].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[17].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[18].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[19].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[20].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[21].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[22].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[23].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[24].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[25].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[26].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[27].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[28].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[29].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[30].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_data[31].west_rx_data
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_addr[0].west_rx_addr
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_addr[1].west_rx_addr
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_addr[2].west_rx_addr
addInstToInstGroup poly3_2_rx_ew ys[2].xs[3].conns_addr[3].west_rx_addr


createInstGroup poly3_2_tx_ew
create_group -name poly3_2_tx_ew -type {fence} -rects {517 1267 534 1498 }
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_vc_info[0].east_tx_vc
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_vc_info[0].east_rx_g
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_vc_info[1].east_tx_vc
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_vc_info[1].east_rx_g
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[0].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[1].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[2].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[3].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[4].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[5].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[6].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[7].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[8].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[9].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[10].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[11].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[12].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[13].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[14].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[15].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[16].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[17].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[18].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[19].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[20].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[21].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[22].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[23].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[24].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[25].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[26].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[27].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[28].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[29].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[30].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_data[31].east_tx_data
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_addr[0].east_tx_addr
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_addr[1].east_tx_addr
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_addr[2].east_tx_addr
addInstToInstGroup poly3_2_tx_ew ys[2].xs[3].conns_addr[3].east_tx_addr


createInstGroup poly3_2_rx_ns
create_group -name poly3_2_rx_ns -type {fence} -rects {535 1267 731 1284 }
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[0].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[1].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[2].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[3].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[4].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[5].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[6].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[7].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[8].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[9].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[10].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[11].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[12].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[13].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[14].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[15].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[16].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[17].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[18].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[19].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[20].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[21].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[22].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[23].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[24].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[25].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[26].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[27].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[28].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[29].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[30].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[31].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[32].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[33].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[34].north_rx
addInstToInstGroup poly3_2_rx_ns ys[2].xs[3].msg_txrx[35].north_rx


createInstGroup poly3_2_tx_ns
create_group -name poly3_2_tx_ns -type {fence} -rects {535 1482 731 1499 }
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[0].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[1].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[2].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[3].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[4].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[5].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[6].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[7].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[8].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[9].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[10].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[11].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[12].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[13].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[14].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[15].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[16].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[17].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[18].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[19].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[20].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[21].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[22].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[23].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[24].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[25].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[26].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[27].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[28].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[29].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[30].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[31].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[32].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[33].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[34].south_tx
addInstToInstGroup poly3_2_tx_ns ys[2].xs[3].msg_txrx[35].south_tx


createInstGroup poly3_3_sw
create_group -name poly3_3_sw -type {fence} -rects {535 535 731 731 }
addInstToInstGroup poly3_3_sw ys[3].xs[3].torus_switch_xy


createInstGroup poly3_3_cli
create_group -name poly3_3_cli -type {fence} -rects {375 375 749 516 375 516 516 749 }
addInstToInstGroup poly3_3_cli ys[3].xs[3].client_xy


createInstGroup poly3_3_rx_ew
create_group -name poly3_3_rx_ew -type {fence} -rects {732 517 749 748 }
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_vc_info[0].west_rx_vc
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_vc_info[0].west_tx_g
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_vc_info[1].west_rx_vc
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_vc_info[1].west_tx_g
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[0].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[1].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[2].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[3].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[4].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[5].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[6].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[7].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[8].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[9].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[10].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[11].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[12].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[13].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[14].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[15].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[16].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[17].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[18].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[19].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[20].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[21].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[22].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[23].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[24].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[25].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[26].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[27].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[28].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[29].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[30].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_data[31].west_rx_data
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_addr[0].west_rx_addr
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_addr[1].west_rx_addr
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_addr[2].west_rx_addr
addInstToInstGroup poly3_3_rx_ew ys[3].xs[3].conns_addr[3].west_rx_addr


createInstGroup poly3_3_tx_ew
create_group -name poly3_3_tx_ew -type {fence} -rects {517 517 534 748 }
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_vc_info[0].east_tx_vc
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_vc_info[0].east_rx_g
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_vc_info[1].east_tx_vc
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_vc_info[1].east_rx_g
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[0].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[1].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[2].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[3].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[4].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[5].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[6].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[7].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[8].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[9].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[10].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[11].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[12].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[13].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[14].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[15].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[16].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[17].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[18].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[19].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[20].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[21].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[22].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[23].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[24].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[25].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[26].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[27].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[28].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[29].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[30].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_data[31].east_tx_data
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_addr[0].east_tx_addr
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_addr[1].east_tx_addr
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_addr[2].east_tx_addr
addInstToInstGroup poly3_3_tx_ew ys[3].xs[3].conns_addr[3].east_tx_addr


createInstGroup poly3_3_rx_ns
create_group -name poly3_3_rx_ns -type {fence} -rects {535 517 731 534 }
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[0].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[1].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[2].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[3].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[4].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[5].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[6].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[7].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[8].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[9].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[10].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[11].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[12].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[13].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[14].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[15].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[16].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[17].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[18].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[19].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[20].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[21].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[22].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[23].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[24].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[25].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[26].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[27].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[28].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[29].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[30].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[31].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[32].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[33].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[34].north_rx
addInstToInstGroup poly3_3_rx_ns ys[3].xs[3].msg_txrx[35].north_rx


createInstGroup poly3_3_tx_ns
create_group -name poly3_3_tx_ns -type {fence} -rects {535 732 731 749 }
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[0].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[1].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[2].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[3].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[4].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[5].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[6].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[7].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[8].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[9].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[10].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[11].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[12].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[13].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[14].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[15].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[16].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[17].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[18].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[19].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[20].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[21].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[22].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[23].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[24].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[25].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[26].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[27].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[28].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[29].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[30].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[31].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[32].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[33].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[34].south_tx
addInstToInstGroup poly3_3_tx_ns ys[3].xs[3].msg_txrx[35].south_tx


setAttribute -net s_tx* -top_preferred_routing_layer M8 -bottom_preferred_routing_layer M8
setAttribute -net e_tx* -top_preferred_routing_layer M7 -bottom_preferred_routing_layer M7
