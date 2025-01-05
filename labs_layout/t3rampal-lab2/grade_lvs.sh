#!/bin/zsh 

make lvs-step

# Check LVS output
lvstx_clean=`cat fullcustom/low_swing_tx.lvs.txt | grep -c "LVS completed. CORRECT"`
lvsrx_clean=`cat fullcustom/low_swing_rx.lvs.txt | grep -c "LVS completed. CORRECT"`

if [[ $lvstx_clean -eq 1 ]]; then lvstx=10 else lvstx=0; fi
if [[ $lvsrx_clean -eq 1 ]]; then lvsrx=5 else lvsrx=0; fi

# max15
echo "GRADE,$lvstx,$lvsrx"
