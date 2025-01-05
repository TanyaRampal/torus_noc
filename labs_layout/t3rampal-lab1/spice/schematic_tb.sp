.option
+ nomod ingold=2 newtol numdgt=7 relmos=1e-4 absmos=1e-8 relv=1e-4
+ relvdc=1e-4 modsrh=0
+ scale=1
+ measform=3
+ post posttop=1   

.temp 25

.global VDD VSS

$ the sp file is generated from schematic
.include 'torus_xbar_1b_schematic.sp'

xdut eo n2s ni p2e p2s pi so vss w2e w2s wi torus_xbar_1b 

cl1 eo VSS c=10f 
cl2 so VSS c=10f 

.IC V(eo)=0      
.IC V(so)=0      

v_ni ni VSS pwl PWLFILE='../data/ni.stim'
v_wi wi VSS pwl PWLFILE='../data/wi.stim'
v_pi pi VSS pwl PWLFILE='../data/pi.stim'
v_w2e w2e VSS pwl PWLFILE='../data/w2e.stim'
v_p2e p2e VSS pwl PWLFILE='../data/p2e.stim'
v_n2s n2s VSS pwl PWLFILE='../data/n2s.stim'
v_w2s w2s VSS pwl PWLFILE='../data/w2s.stim'
v_p2s p2s VSS pwl PWLFILE='../data/p2s.stim'

vgnd VSS 0 dc='0.0'

.tran 10f '17n'

.stim tran VEC filename='eo' vth=0.6 vtl=0.2 v(eo) npoints=18
.stim tran VEC filename='so' vth=0.6 vtl=0.2 v(so) npoints=18
