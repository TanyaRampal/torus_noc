#!/usr/bin/tcsh

source env.csh

rm -f *.ldb* 
rm -f torus_xbar_1b_*.lib

setenv VIEW "schematic"
setenv PROCESS "ff" ; setenv TEMP "0"  ; setenv SUPPLY "1.1" ; setenv CORNER "bc" ;liberate --trio customcell/char.tcl
setenv PROCESS "tt" ; setenv TEMP "25" ; setenv SUPPLY "1.0" ; setenv CORNER "tc" ;liberate --trio customcell/char.tcl 
setenv PROCESS "ss" ; setenv TEMP "0"  ; setenv SUPPLY "0.9" ; setenv CORNER "wc" ;liberate --trio customcell/char.tcl

# convert .lib format to .db format for use with Synopsys DC
lc_shell -f customcell/convert_lib_to_db.tcl -batch
