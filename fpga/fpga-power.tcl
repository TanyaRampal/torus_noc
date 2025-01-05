set top [lindex $argv 0]
set datawidth [lindex $argv 1]

open_project par/par.xpr
open_run impl_1 -name impl_1
read_saif ${top}_D_W$datawidth.saif -strip_path "TOP/top/dut"
report_power -file fpga-post-par-power.$top.$datawidth.txt
exit
