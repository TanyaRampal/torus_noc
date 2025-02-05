.option
+ nomod ingold=2 newtol numdgt=7 relmos=1e-4 absmos=1e-8 relv=1e-4
+ relvdc=1e-4 modsrh=0
+ scale=1
+ measform=3
+ post posttop=1   

.temp 25

.global vdd vss

$ the sp file is generated from schematic
.include 'low_swing_tx_schematic.sp'
**.include 'tx.sp'

xdut c i vdd vss low_swing_tx 

cl1 c vss c=90f 

.IC V(c)=0      

v_i i vss pwl PWLFILE='../data/a.stim'

vgnd vss 0 dc='0.0'
vpwr vdd vss dc='1.0'

.inc tx_sweep.dat
.tran 10f '17n' sweep data=width_sweep

.measure tran vdd_power  avg par('-i(vpwr)*1.0' )
.measure tran pd_HH trig v(i) val='1.0/2' rise=1 targ v(c) val='1.0/2' rise=1
.measure tran pd_LL trig v(i) val='1.0/2' rise=1 targ v(c) val='1.0/2' rise=1

.stim tran VEC filename='c' vth=0.5 vtl=0.2 v(c) npoints=18
