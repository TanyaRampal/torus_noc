#!/bin/zsh

make clean
make run TEST=torus D_W=28
out1=`python3 scripts/checkLog.py`
dat1=`echo $out1 | grep "Thank Mr. Goose" | wc -l`

make clean
make run TEST=torus_bp D_W=32
out2=`python3 scripts/checkLog.py`
dat2=`echo $out2 | grep "Thank Mr. Goose" | wc -l`

make clean
make run TEST=torus_credit D_W=28
out3=`python3 scripts/checkLog.py`
dat3=`echo $out3 | grep "Thank Mr. Goose" | wc -l`

if [[ $dat1 -gt 0 ]]; then dat1=10 else dat1=0; fi
if [[ $dat2 -gt 0 ]]; then dat2=10 else dat2=0; fi
if [[ $dat3 -gt 0 ]]; then dat3=10 else dat3=0; fi

echo "GRADE,$dat1,$dat2,$dat3"
