#!/bin/zsh 

rm -f spice/o.vec0_tr* spice/c.vec0_tr*

make pex-step
make layout-spice-sim

# Grab output vector files and reprocess them into suitable format
cat spice/o.vec0_tr0 | awk '/Data Section/,EOF' | sed 1d > spice/o.output
cat spice/o.output | tr -s ' ' | sed 's/^ //g' | cut -d" " -f2 > spice/o.1.output
cat spice/o.1.output | head -n17 > spice/output.hex
cat data/a.stim | cut -d" " -f2 | sed 'n;d' > data/golden.hex
simrx=`diff data/golden.hex spice/output.hex | wc -l`

cat spice/c.vec0_tr0 | awk '/Data Section/,EOF' | sed 1d > spice/c.output
cat spice/c.output | tr -s ' ' | sed 's/^ //g' | cut -d" " -f2 > spice/c.1.output
cat spice/c.1.output | head -n17 > spice/output.hex
cat data/a.stim | cut -d" " -f2 | sed 'n;d' > data/golden.hex
simtx=`diff data/golden.hex spice/output.hex | wc -l`

if [[ $simrx -gt 0 ]]; then simrx=0 else simrx=5; fi
if [[ $simtx -gt 0 ]]; then simtx=0 else simtx=15; fi

# max 20
echo "GRADE,$simtx,$simrx"
