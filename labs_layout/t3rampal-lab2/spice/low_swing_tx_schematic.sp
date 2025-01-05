** Generated for: hspiceD
** Generated on: Dec  7 20:50:04 2024
** Design library name: ece720t7
** Design cell name: low_swing_tx
** Design view name: schematic


.TEMP 25
.OPTION
+    ARTIST=2
+    INGOLD=2
+    PARHIER=LOCAL
+    PSF=2
.LIB "/CMC/tsmc_65nm/CRN65GP/TN65CMSP018K3_V1.0C/models/hspice/crn65gplus_2d5_lk_v1d0.l" tt

** Library name: ece720t7
** Cell name: low_swing_tx
** View name: schematic
.subckt low_swing_tx c i vdd vss
m8 c net19 vss vss nch l=60e-9 w=120e-9 m=1 nf=1 sd=350e-9 ad=34.5e-15 as=34.5e-15 pd=800e-9 ps=800e-9 nrd=1.45833 nrs=1.45833 sa=100e-9 sb=100e-9 sca=0 scb=0 scc=0
m3 net17 net16 vss vss nch l=60e-9 w=120e-9 m=1 nf=1 sd=350e-9 ad=34.5e-15 as=34.5e-15 pd=800e-9 ps=800e-9 nrd=1.45833 nrs=1.45833 sa=100e-9 sb=100e-9 sca=0 scb=0 scc=0
m2 net16 net14 vss vss nch l=490e-9 w=600e-9 m=1 nf=5 sd=350e-9 ad=127.5e-15 as=127.5e-15 pd=2.8e-6 ps=2.8e-6 nrd=291.667e-3 nrs=291.667e-3 sa=100e-9 sb=100e-9 sca=0 scb=0 scc=0
m1 net14 net19 vss vss nch l=490e-9 w=600e-9 m=1 nf=5 sd=350e-9 ad=127.5e-15 as=127.5e-15 pd=2.8e-6 ps=2.8e-6 nrd=291.667e-3 nrs=291.667e-3 sa=100e-9 sb=100e-9 sca=0 scb=0 scc=0
m0 net19 i vss vss nch l=60e-9 w=120e-9 m=1 nf=1 sd=350e-9 ad=34.5e-15 as=34.5e-15 pd=800e-9 ps=800e-9 nrd=1.45833 nrs=1.45833 sa=100e-9 sb=100e-9 sca=0 scb=0 scc=0
m10 net33 net19 vdd vdd pch l=60e-9 w=1.2e-6 m=1 nf=10 sd=350e-9 ad=232.5e-15 as=255e-15 pd=5e-6 ps=5.6e-6 nrd=145.833e-3 nrs=145.833e-3 sa=100e-9 sb=100e-9 sca=0 scb=0 scc=0
m9 c net17 net33 vdd pch l=60e-9 w=1.2e-6 m=1 nf=10 sd=350e-9 ad=232.5e-15 as=255e-15 pd=5e-6 ps=5.6e-6 nrd=145.833e-3 nrs=145.833e-3 sa=100e-9 sb=100e-9 sca=0 scb=0 scc=0
m7 net17 net16 vdd vdd pch l=60e-9 w=240e-9 m=1 nf=2 sd=350e-9 ad=46.5e-15 as=69e-15 pd=1e-6 ps=1.6e-6 nrd=729.167e-3 nrs=729.167e-3 sa=100e-9 sb=100e-9 sca=0 scb=0 scc=0
m6 net16 net14 vdd vdd pch l=490e-9 w=1.2e-6 m=1 nf=10 sd=350e-9 ad=232.5e-15 as=255e-15 pd=5e-6 ps=5.6e-6 nrd=145.833e-3 nrs=145.833e-3 sa=100e-9 sb=100e-9 sca=0 scb=0 scc=0
m5 net14 net19 vdd vdd pch l=490e-9 w=1.2e-6 m=1 nf=10 sd=350e-9 ad=232.5e-15 as=255e-15 pd=5e-6 ps=5.6e-6 nrd=145.833e-3 nrs=145.833e-3 sa=100e-9 sb=100e-9 sca=0 scb=0 scc=0
m4 net19 i vdd vdd pch l=60e-9 w=240e-9 m=1 nf=2 sd=350e-9 ad=46.5e-15 as=69e-15 pd=1e-6 ps=1.6e-6 nrd=729.167e-3 nrs=729.167e-3 sa=100e-9 sb=100e-9 sca=0 scb=0 scc=0
.ends low_swing_tx
** End of subcircuit definition.
.END
