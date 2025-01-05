#!/bin/zsh

rm -f spice/eo.vec0_tr0 spice/so.vec1_tr0
# Extract SPICE netlist and run HSPICE
make schex
make schematic-spice-sim

# Grab output vector files and reprocess them into suitable format
cat spice/eo.vec0_tr0 | awk '/Data Section/,EOF' | sed 1d > spice/eo.output
cat spice/so.vec1_tr0 | awk '/Data Section/,EOF' | sed 1d > spice/so.output

cat spice/eo.output | tr -s ' ' | sed 's/^ //g' | cut -d" " -f2 > spice/eo.1.output
cat spice/so.output | tr -s ' ' | sed 's/^ //g' | cut -d" " -f2 > spice/so.1.output

paste -d' ' spice/so.1.output spice/eo.1.output > spice/tmp.hex

cat spice/tmp.hex | sed 1d | head --lines=-2 > spice/output.hex

sim=`diff data/golden.hex spice/output.hex | wc -l`

if [[ $sim -gt 0 ]]; then sim=0 else sim=20; fi

# max 20
echo "$sim"
