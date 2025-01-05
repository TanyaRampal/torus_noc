## target process is set by environment variable (tt, ss, ff, sf, fs)
puts "----------------------------------------------------------------"
puts "Process: $env(PROCESS)"
puts "Temp:    $env(TEMP)"
puts "Supply:  $env(SUPPLY)"
puts "Corner:  $env(CORNER)"
puts "View:    $env(VIEW)"
puts "----------------------------------------------------------------"

set_vdd -type primary VDD  $env(SUPPLY)
set_gnd -type primary vss  0.0

set_var mega_short_circuit_mode  2
set_var mega_mode_constraint   minimum
set_var mega_mode_delay        minimum ; # MBFF retention-FF use fanout

set_var mega_mode_hidden    fanout
set_var mega_analysis_mode 3
set_var mega_short_circuit_mode 2

set_var trio_ml_arc_mode_1 2
set_var conditional_expression merge
set_var max_hidden_vector 64
set_var max_leakage_vector 64                                                                                                             
set_var worst_vector_selection_mode 1
set_var ccsn_mega_mbit_hidden_mode 2
set_var init_constraint_period 50e-09

set_var parse_ignore_duplicate_subckt 2

set_var sim_estimate_duration 0
set_var sim_duration 1e-03

set_operating_condition -voltage $env(SUPPLY) -temp $env(TEMP)

#set_var extsim_model_include "/home/nachiket/ece720t7-f24/labs-admin/lab1-sol/customcell/models/models_$env(PROCESS)"
#define_leafcell -type nmos -pin_position {0 1 2 3} {nch}

set_var extsim_cmd_option      "+aps +spice -mt +liberate +rcopt=2"
set_var extsim_deck_header     "simulator lang=spectre\nOpt1 options reltol=1e-4 \nsimulator lang=spice"

set_var extsim_option          "redefinedparams=ignore hier_ambiguity=lower limit=delta "
set_var extsim_leakage_option  "redefinedparams=ignore hier_ambiguity=lower limit=delta "

source customcell/cells.tcl

read_spice -format spectre "./customcell/models/models_$env(PROCESS) ./spice/torus_xbar_1b_schematic.sp"

#-user_arcs_only 
char_library -extsim spectre -cells $cells -thread 50
write_ldb torus_xbar_1b.ldb
write_library -driver_waveform -user_data torus_xbar_1b_user_data.lib "torus_xbar_1b_$env(CORNER)"
#write_verilog torus_xbar_1b.v
#write_verilog -power_pin torus_xbar_1b_pwr.v
