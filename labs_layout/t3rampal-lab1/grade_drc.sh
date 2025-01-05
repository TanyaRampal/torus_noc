#!/bin/zsh

make drc-step

# Check if it is OK
drc_clean=`cat fullcustom/cmdline.drc.txt | grep -c -- "--- TOTAL RESULTS GENERATED"`

if [[ $drc_clean -eq 1 ]]; then drc=10 else drc=0; fi

# max 10
echo "$drc"
