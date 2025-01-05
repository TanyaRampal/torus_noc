set top [lindex $argv 0]
set datawidth [lindex $argv 1]

create_project -force par ./par -part xc7z020clg400-1
set_property board_part www.digilentinc.com:pynq-z1:part0:1.0 [current_project]
add_files ../rtl/torus_xbar_1b.sv
add_files ../rtl/dor.sv
add_files ../rtl/dor_bp.sv
add_files ../rtl/dor_credit.sv
add_files ../rtl/torus_switch.sv
add_files ../rtl/torus_switch_bp.sv
add_files ../rtl/torus_switch_credit.sv
add_files ../rtl/common_pkg.sv
add_files ../rtl/credit_bp_rx.sv
add_files ../rtl/credit_bp_tx.sv
add_files ../rtl/noc_if.sv
add_files ../rtl/shadow_reg_combi.sv
add_files ../rtl/fifo32.sv
add_files ../rtl/low_swing_rx.sv
add_files ../rtl/low_swing_tx.sv
add_files ../rtl/torus.sv
add_files ../rtl/torus_bp.sv
add_files ../rtl/torus_credit.sv
add_files ../rtl/token_bucket.sv
add_files ../rtl/client_for_synth.sv
add_files torus.xdc
add_files floorplan.xdc

update_compile_order -fileset sources_1
set_property top $top [current_fileset]
set_property generic "D_W=$datawidth" [current_fileset]

set_property -name {STEPS.SYNTH_DESIGN.ARGS.MORE OPTIONS} -value {-mode out_of_context} -objects [get_runs synth_1]

launch_runs synth_1 -jobs 4
wait_on_run synth_1

launch_runs impl_1 -jobs 4
wait_on_run impl_1

open_run synth_1 -name synth_1
write_verilog -force -mode funcsim fpga-post-synth.$top.$datawidth.v

open_run impl_1 -name impl_1
write_verilog -force -mode timesim -sdf_anno true -sdf_file fpga-post-par.$top.$datawidth.sdf fpga-post-par.$top.$datawidth.v
write_sdf -force fpga-post-par.$top.$datawidth.sdf

report_utilization -file fpga-post-par-utilization.$top.$datawidth.txt
report_timing -file fpga-post-par-timing.$top.$datawidth.txt

exit
