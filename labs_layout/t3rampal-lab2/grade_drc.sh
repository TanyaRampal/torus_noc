#!/bin/zsh

make drc-step

# Check if it is OK
drctx_clean=`cat drc/low_swing_tx.drc.summary | grep -c -- "TOTAL DRC Results Generated:     0 (0)"`
drcrx_clean=`cat drc/low_swing_rx.drc.summary | grep -c -- "TOTAL DRC Results Generated:     0 (0)"`

if [[ $drctx_clean -eq 1 ]]; then drctx=5 else drctx=0; fi
if [[ $drcrx_clean -eq 1 ]]; then drcrx=5 else drcrx=0; fi

# max 10
echo "GRADE,$drctx,$drcrx"
