#!/bin/zsh

make fpga-run

cd fpga
# Check FPGA results
gold_lut=`cat fpga-par-utilization.golden.txt | grep "Slice LUTs" | head -n 1 | cut -d"|" -f 3 | sed s/\ //g` 
gold_ff=`cat fpga-par-utilization.golden.txt | grep "Slice Registers" | head -n 1 | cut -d"|" -f 3 | sed s/\ //g` 
synth_lut=`cat fpga-par-utilization.txt | grep "Slice LUTs" | head -n 1 | cut -d"|" -f 3 | sed s/\ //g` 
synth_ff=`cat fpga-par-utilization.txt | grep "Slice Registers" | head -n 1 | cut -d"|" -f 3 | sed s/\ //g` 
cd ..

diff_lut=`expr 100 \* \( $synth_lut - $gold_lut \) \/ \( 1 + $gold_lut \)`
diff_ff=`expr 100 \* \( $synth_ff - $gold_ff \) \/ \( 1 + $gold_ff \)`

if [[ $synth_lut -eq 0 || $diff_lut -gt 2 || $diff_ff -gt 2 ]]; then util=0; else util=10; fi

# Check FPGA timing
#timing_met=`grep "MET" fpga-par-timing.txt | wc -l`
#slack=`cat fpga-par-timing.txt | grep Slack | cut -d" " -f11 | cut -d"n" -f1`
#if [[ $timing_met -eq 1 || $slack -gt -0.3 ]]; then timing=5 else timing=0; fi

# max 10
echo "$util"
