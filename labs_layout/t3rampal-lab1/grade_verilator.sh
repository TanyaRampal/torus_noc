#!/bin/zsh

make verilator-sim
sim=`diff sim/output.hex data/golden.hex | wc -l` 

verilator -Wall --lint-only rtl/torus_xbar_1b > lint.txt 2>&1
lint=`cat lint.txt | grep "Error" | wc -l`

if [[ $sim -gt 0 ]]; then sim=0 else sim=10; fi
if [[ $lint -gt 0 ]]; then lint=0 else lint=5; fi

# max 15
echo "$sim,$lint"
