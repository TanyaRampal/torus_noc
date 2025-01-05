#!/bin/zsh

make asic-run

cd asic
# Check ASIC area results
gold_area=`cat asic-post-par-area.golden.rpt | grep "torus_xbar_1b" | tr -s ' ' | cut -d" " -f3` 
par_area=`cat asic-post-par-area.rpt | grep "torus_xbar_1b" | tr -s ' ' | cut -d" " -f3` 
cd ..

diff_area=$((100 * ( $par_area - $gold_area ) / $gold_area))

if [[ $par_area -eq 0 || $diff_area -gt 2 ]]; then util=0; else util=10; fi

# Check ASIC timing results
#timing_met=`cat asic-post-par-timing.rpt | grep "slack" | grep "MET" | wc -l`
#slack=`cat asic-post-par-timing.rpt | grep "slack"  | tr -s ' ' | cut -d" " -f4`
#if [[ $timing_met -eq 1 || $slack -gt -0.3 ]]; then timing=50 else timing=0; fi
#
#echo "$util,$timing"

# max 10
echo "$util"
