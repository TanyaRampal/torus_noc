#!/bin/sh

# 
# Vivado(TM)
# runme.sh: a Vivado-generated Runs Script for UNIX
# Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
# 

if [ -z "$PATH" ]; then
  PATH=/zfsspare/opt/Vivado/2022.1/ids_lite/ISE/bin/lin64:/zfsspare/opt/Vivado/2022.1/bin
else
  PATH=/zfsspare/opt/Vivado/2022.1/ids_lite/ISE/bin/lin64:/zfsspare/opt/Vivado/2022.1/bin:$PATH
fi
export PATH

if [ -z "$LD_LIBRARY_PATH" ]; then
  LD_LIBRARY_PATH=
else
  LD_LIBRARY_PATH=:$LD_LIBRARY_PATH
fi
export LD_LIBRARY_PATH

HD_PWD='/home/t3rampal/ece720t7-f24/labs/t3rampal-lab5/fpga/par/par.runs/synth_1'
cd "$HD_PWD"

HD_LOG=runme.log
/bin/touch $HD_LOG

ISEStep="./ISEWrap.sh"
EAStep()
{
     $ISEStep $HD_LOG "$@" >> $HD_LOG 2>&1
     if [ $? -ne 0 ]
     then
         exit
     fi
}

EAStep vivado -log torus_credit.vds -m64 -product Vivado -mode batch -messageDb vivado.pb -notrace -source torus_credit.tcl
