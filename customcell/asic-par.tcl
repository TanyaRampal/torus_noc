set init_mmmc_file "setup-timing.tcl"
set init_verilog   "asic-post-synth.$asictop.$datawidth.v"
set init_top_cell  "${asictop}_D_W${datawidth}"
set init_lef_file  "/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Back_End/lef/tcbn65gplus_200a/lef/tcbn65gplus_9lmT2.lef low_swing_rx.lef  low_swing_tx.lef  torus_xbar_1b.lef"
set init_gnd_net   "VSS"
set init_pwr_net   "VDD"

init_design

floorPlan -d 1500 1500 2 2 2 2

globalNetConnect VDD -type pgpin -pin VDD -inst * -verbose
globalNetConnect VSS -type pgpin -pin VSS -inst * -verbose
globalNetConnect VDD -type pgpin -pin vdd -inst * -verbose
globalNetConnect VSS -type pgpin -pin vss -inst * -verbose
 
sroute -nets {VDD VSS}

addRing -nets {VDD VSS} -width 0.6 -spacing 0.5 -layer [list top 6 bottom 6 left 5 right 5]
 
addStripe -nets {VSS VDD} -layer 5 -direction vertical -width 0.4 -spacing 0.5 -set_to_set_distance 5 -start 0.5
 
addStripe -nets {VSS VDD} -layer 6 -direction horizontal -width 0.4 -spacing 0.5 -set_to_set_distance 5 -start 0.5

source layout.tcl

place_design

ccopt_design

routeDesign

setFillerMode -corePrefix FILL -core "FILL1 FILL2 FILL4"
addFiller

verifyConnectivity

verify_drc

saveNetlist asic-post-par.$asictop.$datawidth.v

extractRC
#rcOut -rc_corner typical -spef asic-post-par.spef
write_sdf post-par.sdf -interconn all -setuphold split

streamOut post-par.$asictop.$datawidth.gds -merge "/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Back_End/gds/tcbn65gplus_140a/tcbn65gplus.gds torus_xbar_1b.gds low_swing_tx.gds low_swing_rx.gds" 
#-mapFile "/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Back_End/milkyway/tcbn65gplus_200a/gdsout_6X2Z.map"

report_timing > asic-post-par-timing.$asictop.$datawidth.rpt
report_area > asic-post-par-area.$asictop.$datawidth.rpt
report_power -hierarchy all > asic-post-par-power.$asictop.$datawidth.rpt

exit
