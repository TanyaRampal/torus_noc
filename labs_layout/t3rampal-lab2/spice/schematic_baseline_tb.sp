.option
+ nomod ingold=2 newtol numdgt=7 relmos=1e-4 absmos=1e-8 relv=1e-4
+ relvdc=1e-4 modsrh=0
+ scale=1
+ measform=3
+ post posttop=1   
+ redefsub=1
+ redefmodel=1

.temp 25

.global vdd vss

.LIB "/CMC/tsmc_65nm/CRN65GP/TN65CMSP018K3_V1.0C/models/hspice/crn65gplus_2d5_lk_v1d0.l" tt

.subckt buf i o vdd vss

m0 net0 i vdd vdd pch l=60e-9 w='2*w' m=1 nf=1 sd=200e-9 ad=35e-15 as=35e-15 pd=750e-9 ps=750e-9 nrd=500e-3 nrs=500e-3 sa=175e-9 sb=175e-9 sca=0 scb=0 scc=0
m1 net0 i vss vss nch l=60e-9 w=w m=1 nf=1 sd=200e-9 ad=35e-15 as=35e-15 pd=750e-9 ps=750e-9 nrd=500e-3 nrs=500e-3 sa=175e-9 sb=175e-9 sca=0 scb=0 scc=0
m2 o net0 vdd vdd pch l=60e-9 w='2*w' m=1 nf=1 sd=200e-9 ad=35e-15 as=35e-15 pd=750e-9 ps=750e-9 nrd=500e-3 nrs=500e-3 sa=175e-9 sb=175e-9 sca=0 scb=0 scc=0
m3 o net0 vss vss nch l=60e-9 w='w' m=1 nf=1 sd=200e-9 ad=35e-15 as=35e-15 pd=750e-9 ps=750e-9 nrd=500e-3 nrs=500e-3 sa=175e-9 sb=175e-9 sca=0 scb=0 scc=0

.ends buf

xdut1 i c vdd vss buf
xdut2 c o vdd vss buf

cl1 c vss c=90f 
cl2 o vss c=10f 

.IC V(c)=0      
.IC V(o)=0      

v_i i vss pwl PWLFILE='../data/a.stim'

vgnd vss 0 dc='0.0'
vpwr vdd vss dc='1.0'

.inc baseline_sweep.dat
.tran 10f '17n' sweep data=width_sweep

.measure tran vdd_power  avg par('-i(vpwr)*1.0' )
.measure tran pd_HH trig v(i) val='1.0/2' rise=1 targ v(c) val='1.0/2' rise=1
.measure tran pd_LL trig v(i) val='1.0/2' rise=1 targ v(c) val='1.0/2' rise=1

.stim tran VEC filename='o' vth=0.6 vtl=0.2 v(c) npoints=18
