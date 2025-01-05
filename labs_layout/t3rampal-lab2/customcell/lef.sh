#!/usr/bin/tcsh

abstract -replay customcell/ece720.lef.low_swing_tx.runset -cdslib cds.lib -nogui -log abstract.low_swing_tx.log
lefout -lef low_swing_tx.lef -noTech -lib ece720t7 -views abstract -log lefout.tx.log -cells "low_swing_tx" -ver 5.7


# weird cleanup
find . -name '.abstract*' -exec rm -vf '{}' \;
find ece720t7 -name 'abstract*' -type d -exec rm -rfv '{}' \;


abstract -replay customcell/ece720.lef.low_swing_rx.runset -cdslib cds.lib -nogui -log abstract.low_swing_rx.log
lefout -lef low_swing_rx.lef -noTech -lib ece720t7 -views abstract -log lefout.rx.log -cells "low_swing_rx" -ver 5.7
