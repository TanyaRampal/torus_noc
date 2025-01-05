
#Set supplies
# Set slew and delay mesurement thresholds
set_var slew_lower_rise 0.2
set_var slew_lower_fall 0.2
set_var slew_upper_rise 0.8
set_var slew_upper_fall 0.8

set_var measure_slew_lower_rise 0.2
set_var measure_slew_lower_fall 0.2
set_var measure_slew_upper_rise 0.8
set_var measure_slew_upper_fall 0.8

set_var delay_inp_rise 0.5
set_var delay_inp_fall 0.5
set_var delay_out_rise 0.5
set_var delay_out_fall 0.5

set_var def_arc_msg_level 0
set_var process_match_pins_to_ports 1
set_var max_transition 3e-10
set_var min_transition 6e-12
set_var min_output_cap 1e-16


set_var -cell {low_swing_tx} power_merge_delay 0
#mega_short_circuit_mode to 2

define_template -type delay      -index_1 {0.006 0.3 } -index_2 {0.0002 0.07 } delay_template
define_template -type power      -index_1 {0.006 0.3 } -index_2 {0.0002 0.07 } power_template
define_template -type constraint -index_1 {0.006 0.3 } -index_2 {0.006 0.3 }  const_template

set cell {low_swing_tx}
# order of pins must be same as SPICE
# .subckt low_swing_tx c i vdd vss
define_cell \
    -input { i } \
    -output { c } \
    -pinlist { c i } \
    -delay delay_template \
    -power power_template \
    $cell

set_pin_vdd -supply_name vdd $cell {*}
set_pin_gnd -supply_name vss $cell {*}

set cells      {}
lappend cells  ${cell}

#define_arc -ignore -type combinational -pin {O0} -extsim_deck_header ".nodeset V(O0*) 0\n.nodeset V(O1*) 0\n.nodeset V(O2*) 0" $cell
