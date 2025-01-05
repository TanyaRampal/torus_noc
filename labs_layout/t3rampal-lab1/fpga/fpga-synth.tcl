create_project -force synth ./synth -part xc7z020clg400-1
set_property board_part www.digilentinc.com:pynq-z1:part0:1.0 [current_project]
add_files ../rtl/torus_xbar_1b.v
add_files torus_xbar_1b.xdc

update_compile_order -fileset sources_1
set_property top torus_xbar_1b [current_fileset]

set_property -name {STEPS.SYNTH_DESIGN.ARGS.MORE OPTIONS} -value {-mode out_of_context} -objects [get_runs synth_1]

launch_runs synth_1 -jobs 4
wait_on_run synth_1

open_run synth_1 -name synth_1
report_utilization -file fpga-synth-utilization.txt

exit
