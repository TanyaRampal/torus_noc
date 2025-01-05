#!/bin/zsh

make run

sort times.csv > times_sorted.csv

dat=`diff --strip-trailing-cr data/golden_times_sorted.csv times_sorted.csv | wc -l` 

rm times_sorted.csv

verilator -Wall -DTEST_FILE_X='""' -DTEST_FILE_Y='""' --lint-only tb/test_torus.sv rtl/* > lint.txt 2>&1
lint=`cat lint.txt | grep "Error" | wc -l`

if [[ $dat -gt 0 ]]; then dat=0; else dat=75; fi
if [[ $lint -gt 0 ]]; then lint=0; else lint=25; fi

echo "$dat,$lint"
