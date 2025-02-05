** Generated for: hspiceD
** Generated on: Dec  7 20:49:51 2024
** Design library name: ece720t7
** Design cell name: low_swing_rx
** Design view name: schematic


.TEMP 25
.OPTION
+    ARTIST=2
+    INGOLD=2
+    PARHIER=LOCAL
+    PSF=2
.LIB "/CMC/tsmc_65nm/CRN65GP/TN65CMSP018K3_V1.0C/models/hspice/crn65gplus_2d5_lk_v1d0.l" tt
.LIB "/CMC/tsmc_65nm/CRN65GP/TN65CMSP018K3_V1.0C/models/hspice/crn65gplus_2d5_lk_v1d0.l" tt_hvt

** Library name: ece720t7
** Cell name: low_swing_rx
** View name: schematic
.subckt low_swing_rx i o vdd vss
m0 o net10 vdd vdd pch l=60e-9 w=720e-9 m=1 nf=6 sd=350e-9 ad=139.5e-15 as=162e-15 pd=3e-6 ps=3.6e-6 nrd=243.056e-3 nrs=243.056e-3 sa=100e-9 sb=100e-9 sca=0 scb=0 scc=0
m1 o net10 vss vss nch l=60e-9 w=360e-9 m=1 nf=3 sd=350e-9 ad=81e-15 as=81e-15 pd=1.8e-6 ps=1.8e-6 nrd=486.111e-3 nrs=486.111e-3 sa=100e-9 sb=100e-9 sca=0 scb=0 scc=0
m2 net10 i vss vss nch_hvt l=60e-9 w=360e-9 m=1 nf=3 sd=350e-9 ad=81e-15 as=81e-15 pd=1.8e-6 ps=1.8e-6 nrd=486.111e-3 nrs=486.111e-3 sa=100e-9 sb=100e-9 sca=0 scb=0 scc=0
m3 net10 i vdd vdd pch_hvt l=60e-9 w=720e-9 m=1 nf=6 sd=350e-9 ad=139.5e-15 as=162e-15 pd=3e-6 ps=3.6e-6 nrd=243.056e-3 nrs=243.056e-3 sa=100e-9 sb=100e-9 sca=0 scb=0 scc=0
.ends low_swing_rx
** End of subcircuit definition.
.END
