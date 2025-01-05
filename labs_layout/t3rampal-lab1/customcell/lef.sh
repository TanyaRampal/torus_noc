#!/usr/bin/tcsh

abstract -replay customcell/ece720.lef.runset -cdslib cds.lib -nogui -log abstract.log
lefout -lef torus_xbar_1b.lef -noTech -lib ece720t7 -views abstract -log lefout.log -cells "torus_xbar_1b" -ver 5.7


# weird cleanup
find . -name '.abstract*' -type f -exec rm -vf '{}' \;
find ece720t7 -name 'abstract*' -type d -depth -exec rm -rfv '{}' \;
