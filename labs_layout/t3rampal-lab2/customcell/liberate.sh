#!/usr/bin/tcsh

rm -f *.ldb* 
rm -f low_swing_rx_*.lib
rm -f low_swing_tx_*.lib

setenv VIEW "schematic"

setenv PROCESS "ff" ; setenv TEMP "0"  ; setenv SUPPLY "1.1" ; setenv CORNER "bc" ;liberate --trio customcell/char_rx.tcl
setenv PROCESS "tt" ; setenv TEMP "25" ; setenv SUPPLY "1.0" ; setenv CORNER "tc" ;liberate --trio customcell/char_rx.tcl 
setenv PROCESS "ss" ; setenv TEMP "0"  ; setenv SUPPLY "0.9" ; setenv CORNER "wc" ;liberate --trio customcell/char_rx.tcl

setenv PROCESS "ff" ; setenv TEMP "0"  ; setenv SUPPLY "1.1" ; setenv CORNER "bc" ;liberate --trio customcell/char_tx.tcl
setenv PROCESS "tt" ; setenv TEMP "25" ; setenv SUPPLY "1.0" ; setenv CORNER "tc" ;liberate --trio customcell/char_tx.tcl 
setenv PROCESS "ss" ; setenv TEMP "0"  ; setenv SUPPLY "0.9" ; setenv CORNER "wc" ;liberate --trio customcell/char_tx.tcl

# convert .lib format to .db format for use with Synopsys DC
lc_shell -f customcell/convert_lib_to_db_rx.tcl -batch
lc_shell -f customcell/convert_lib_to_db_tx.tcl -batch
