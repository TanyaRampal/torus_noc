#!/bin/zsh

datawidth=32

declare -A util
declare -A timing
declare -A power

for i in torus torus_bp torus_credit
do

  make asic-run TEST=$i D_W=$datawidth

  # Check ASIC area results
  gold_area=`cat asic/asic-post-par-area.$i.$datawidth.golden.rpt | grep "$i" | tr -s ' ' | cut -d" " -f3 | head -n1`
  par_area=`cat asic/asic-post-par-area.$i.$datawidth.rpt | grep "$i" | tr -s ' ' | cut -d" " -f3 | head -n1`

  diff_area=`echo 100 \* \( $par_area - $gold_area \) / $gold_area | bc -q`

  if [[ $par_area -eq 0 || $diff_area -gt 2 ]]; then util[$i]=0; else util[$i]=2; fi

  # Check ASIC timing results
  timing_met=`cat asic/asic-post-par-timing.$i.$datawidth.rpt | grep "slack" | grep "MET" | wc -l`
  slack=`cat asic/asic-post-par-timing.$i.$datawidth.rpt | grep "slack"  | tr -s ' ' | cut -d" " -f4`

  if [[ $timing_met -eq 1 || $slack -gt -0.3 ]]; then timing[$i]=2 else timing[$i]=0; fi

  # Check ASIC power results
  gold_power=`cat asic/asic-post-par-power.$i.$datawidth.golden.rpt | grep "Total Power" | head -n 1 | cut -d"=" -f 2 | sed s/\ //g | cut -d"(" -f1`
  synth_power=`cat asic/asic-post-par-power.$i.$datawidth.rpt | grep "Total Power" | head -n 1 | cut -d"=" -f 2 | sed s/\ //g | cut -d"(" -f1`

  diff_power=`echo 100 \* \( $synth_power - $gold_power \) \/ $gold_power | bc -q`

  if [[ $synth_power -eq 0 || $diff_power -gt 2 ]]; then power[$i]=0; else power[$i]=2; fi

done

# max 9
echo "GRADE,$util[torus],$util[torus_bp],$util[torus_credit],$timing[torus],$timing[torus_bp],$timing[torus_credit],$power[torus],$power[torus_bp],$power[torus_credit]"
