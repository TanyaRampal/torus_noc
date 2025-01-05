#!/bin/zsh

datawidth=32

declare -A util
declare -A timing
declare -A power
declare -A slacks

make fpga-run TEST=torus D_W=$datawidth FOLDED=0
slackNotFolded=`cat fpga/fpga-post-par-timing.torus.$datawidth.txt | grep Slack | cut -d" " -f16 | cut -d"n" -f1`

for i in torus torus_bp torus_credit
do

  make fpga-run TEST=$i D_W=$datawidth

  # Check FPGA results
  gold_lut=`cat fpga/fpga-post-par-utilization.$i.$datawidth.golden.txt | grep "Slice LUTs" | head -n 1 | cut -d"|" -f 3 | sed s/\ //g`
  gold_ff=`cat fpga/fpga-post-par-utilization.$i.$datawidth.golden.txt | grep "Slice Registers" | head -n 1 | cut -d"|" -f 3 | sed s/\ //g`
  synth_lut=`cat fpga/fpga-post-par-utilization.$i.$datawidth.txt | grep "Slice LUTs" | head -n 1 | cut -d"|" -f 3 | sed s/\ //g`
  synth_ff=`cat fpga/fpga-post-par-utilization.$i.$datawidth.txt | grep "Slice Registers" | head -n 1 | cut -d"|" -f 3 | sed s/\ //g`

  diff_lut=`expr 100 \* \( $synth_lut - $gold_lut \) \/ \( 1 + $gold_lut \)`
  diff_ff=`expr 100 \* \( $synth_ff - $gold_ff \) \/ \( 1 + $gold_ff \)`
  
  if [[ $synth_lut -eq 0 || $diff_lut -gt 2 || $diff_ff -gt 2 ]]; then util[$i]=0; else util[$i]=2; fi

  # Check FPGA timing
  timing_met=`grep "MET" fpga/fpga-post-par-timing.$i.$datawidth.txt | wc -l`
  slack=`cat fpga/fpga-post-par-timing.$i.$datawidth.txt | grep Slack | cut -d" " -f16 | cut -d"n" -f1`
  slacks[$i]=$slack

  if [[ $timing_met -eq 1 || $slack -gt -0.3 ]]; then timing[$i]=2; else timing[$i]=0; fi

  # Check FPGA power results
  gold_power=`cat fpga/fpga-post-par-power.$i.$datawidth.golden.txt | grep "Total On-Chip Power" | head -n 1 | cut -d"|" -f 3 | sed s/\ //g | cut -d"(" -f1`
  synth_power=`cat fpga/fpga-post-par-power.$i.$datawidth.txt | grep "Total On-Chip Power" | head -n 1 | cut -d"|" -f 3 | sed s/\ //g | cut -d"(" -f1`

  diff_power=`echo 100 \* \( $synth_power - $gold_power \) \/ $gold_power | bc -q`
  
  if [[ $synth_power -eq 0 || $diff_power -gt 2 ]]; then power[$i]=0; else power[$i]=2; fi
done

diff_slack=`echo "$slacks[torus]-$slackNotFolded" | bc`

folded_grade=0
if [[ $timing[torus] -eq 2 ]]; then timing[torus]=1; fi
if [[ $diff_slack -gt 0.15 ]]; then folded_grade=1; fi

# max 18
echo "GRADE,$util[torus],$util[torus_bp],$util[torus_credit],$timing[torus],$folded_grade,$timing[torus_bp],$timing[torus_credit],$power[torus],$power[torus_bp],$power[torus_credit]"
