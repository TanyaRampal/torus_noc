#!/bin/tcsh

echo "INCLUDE tech.lib" > cds.lib
echo "DEFINE ece720t7 ./ece720t7" >> cds.lib

source env.csh

# 10
./grade_torus.sh
# 20
./grade_schematic.sh
# 15
./grade_lvs.sh
# 10
./grade_drc.sh
# 20
./grade_pex.sh
# TODO: 25 points for relative WL sizing i.e. best power-delay product!
