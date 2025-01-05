
#Set supplies
# Set slew and delay mesurement thresholds
set_var slew_lower_rise 0.3
set_var slew_lower_fall 0.3
set_var slew_upper_rise 0.7
set_var slew_upper_fall 0.7

set_var measure_slew_lower_rise 0.3
set_var measure_slew_lower_fall 0.3
set_var measure_slew_upper_rise 0.7
set_var measure_slew_upper_fall 0.7

set_var delay_inp_rise 0.5
set_var delay_inp_fall 0.5
set_var delay_out_rise 0.5
set_var delay_out_fall 0.5

set_var def_arc_msg_level 0
set_var process_match_pins_to_ports 1
set_var max_transition 3e-10
set_var min_transition 6e-12
set_var min_output_cap 1e-16


set_var -cell {torus_xbar_1b} power_merge_delay 0
#mega_short_circuit_mode to 2

define_template -type delay      -index_1 {0.006 0.3 } -index_2 {0.0002 0.07 } delay_template
define_template -type power      -index_1 {0.006 0.3 } -index_2 {0.0002 0.07 } power_template
define_template -type constraint -index_1 {0.006 0.3 } -index_2 {0.006 0.3 }  const_template

set cell {torus_xbar_1b}
# order of pins must be same as SPICE
# .subckt torus_xbar_1b eo n2s ni p2e p2s pi so vss w2e w2s wi
define_cell \
    -type mega \
    -input { n2s ni p2e p2s pi w2e w2s wi } \
    -output { eo so } \
    -pinlist { eo n2s ni p2e p2s pi so w2e w2s wi } \
    -delay delay_template \
    -power power_template \
    $cell

set_pin_vdd -supply_name VDD $cell {*}
set_pin_gnd -supply_name vss $cell {*}

#set_gnd -cells $cell -type primary vss 0

define_arc -vector {RXXRX1X0XX} -related_pin p2e -pin eo $cell
define_arc -vector {FXXRX0X0XX} -related_pin p2e -pin eo $cell
define_arc -vector {RXX1XRX0XX} -related_pin pi -pin eo $cell
define_arc -vector {FXX1XFX0XX} -related_pin pi -pin eo $cell
define_arc -vector {RXX0XXXRX1} -related_pin w2e -pin eo $cell
define_arc -vector {FXX0XXXRX0} -related_pin w2e -pin eo $cell
define_arc -vector {RXX0XXX1XR} -related_pin wi -pin eo $cell
define_arc -vector {FXX0XXX1XF} -related_pin wi -pin eo $cell

define_arc -vector {X0XXR1RX0X} -related_pin p2s -pin so $cell
define_arc -vector {X0XXR0FX0X} -related_pin p2s -pin so $cell
define_arc -vector {X0XX1RRX0X} -related_pin pi -pin so $cell
define_arc -vector {X0XX1FFX0X} -related_pin pi -pin so $cell
define_arc -vector {X0XX0XRXR1} -related_pin w2s -pin so $cell
define_arc -vector {X0XX0XFXR0} -related_pin w2s -pin so $cell
define_arc -vector {X0XXXXRX1R} -related_pin wi -pin so $cell
define_arc -vector {X0XXXXFX1F} -related_pin wi -pin so $cell
define_arc -vector {XR1X0XRX0X} -related_pin n2s -pin so $cell
define_arc -vector {XR0X0XFX0X} -related_pin n2s -pin so $cell
define_arc -vector {X1RXXXRXXX} -related_pin ni -pin so $cell
define_arc -vector {X1FXXXFXXX} -related_pin ni -pin so $cell

define_arc -type disable -related_pin pi -pin eo $cell
define_arc -type disable -related_pin wi -pin eo $cell
define_arc -type disable -related_pin pi -pin so $cell
define_arc -type disable -related_pin wi -pin so $cell
define_arc -type disable -related_pin ni -pin so $cell

define_arc -ignore -related_pin p2e -pin so $cell
define_arc -ignore -related_pin w2e -pin so $cell
define_arc -ignore -related_pin p2s -pin eo $cell
define_arc -ignore -related_pin w2s -pin eo $cell
define_arc -ignore -related_pin n2s -pin eo $cell

set cells      {}
lappend cells  ${cell}

