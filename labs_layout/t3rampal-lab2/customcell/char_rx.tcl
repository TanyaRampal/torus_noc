## target process is set by environment variable (tt, ss, ff, sf, fs)
puts "----------------------------------------------------------------"
puts "Process: $env(PROCESS)"
puts "Temp:    $env(TEMP)"
puts "Supply:  $env(SUPPLY)"
puts "Corner:  $env(CORNER)"
puts "View:    $env(VIEW)"
puts "----------------------------------------------------------------"

set_vdd -type primary vdd  $env(SUPPLY)
set_gnd -type primary vss  0.0

set_var mega_short_circuit_mode  2

set_var max_leakage_vector 1000
set_var max_hidden_vector 1000

set_var parse_ignore_duplicate_subckt 2

set_operating_condition -voltage $env(SUPPLY) -temp $env(TEMP)

source customcell/cells_rx.tcl

set_var extsim_cmd_option      "+aps +spice -mt +liberate +rcopt=2"
set_var extsim_deck_header     "simulator lang=spectre\nOpt1 options reltol=1e-4 \nsimulator lang=spice"

set_var extsim_option          "soft_bin=allmodels redefinedparams=ignore hier_ambiguity=lower limit=delta "
set_var extsim_leakage_option  "soft_bin=allmodels redefinedparams=ignore hier_ambiguity=lower limit=delta "

read_spice -format spectre "./customcell/models/models_$env(PROCESS) spice/low_swing_rx_schematic.sp"

char_library -extsim spectre -cells $cells -thread 50
write_ldb low_swing_rx.ldb
write_library -driver_waveform -user_data low_swing_rx_user_data.lib "low_swing_rx_$env(CORNER)"
#write_verilog torus_xbar_1b.v
#write_verilog -power_pin torus_xbar_1b_pwr.v
