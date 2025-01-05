set_app_var target_library "/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gplusbc.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gpluswcl.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gplustc.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gpluslt.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gpluswcz.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gpluswc.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gplusml.db \
torus_xbar_1b_bc.db  torus_xbar_1b_tc.db  torus_xbar_1b_wc.db low_swing_rx_bc.db  low_swing_rx_wc.db  low_swing_rx_tc.db low_swing_tx_bc.db  low_swing_tx_wc.db  low_swing_tx_tc.db"

set_app_var link_library "* /CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gplusbc.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gpluswcl.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gplustc.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gpluslt.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gpluswcz.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gpluswc.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gplusml.db \
torus_xbar_1b_bc.db  torus_xbar_1b_tc.db  torus_xbar_1b_wc.db low_swing_rx_bc.db  low_swing_rx_wc.db  low_swing_rx_tc.db low_swing_tx_bc.db  low_swing_tx_wc.db  low_swing_tx_tc.db"

saif_map -start

# following 3 files get picked up from custom cell export
#analyze -format sverilog ../rtl/torus_xbar_1b.v
#analyze -format sverilog ../rtl/low_swing_tx.sv
#analyze -format sverilog ../rtl/low_swing_rx.sv


analyze -format sverilog ../rtl/dor.sv
analyze -format sverilog ../rtl/dor_bp.sv
analyze -format sverilog ../rtl/dor_credit.sv
analyze -format sverilog ../rtl/torus_switch.sv
analyze -format sverilog ../rtl/torus_switch_bp.sv
analyze -format sverilog ../rtl/torus_switch_credit.sv
analyze -format sverilog ../rtl/common_pkg.sv
analyze -format sverilog ../rtl/credit_bp_rx.sv
analyze -format sverilog ../rtl/credit_bp_tx.sv
analyze -format sverilog ../rtl/noc_if.sv
analyze -format sverilog ../rtl/shadow_reg_combi.sv
analyze -format sverilog ../rtl/fifo32.sv
analyze -format sverilog ../rtl/torus.sv
analyze -format sverilog ../rtl/torus_bp.sv
analyze -format sverilog ../rtl/torus_credit.sv
analyze -format sverilog ../rtl/token_bucket.sv
analyze -format sverilog ../rtl/client_for_synth.sv

elaborate $asictop -param D_W=>$datawidth
current_design ${asictop}_D_W${datawidth}

check_design

create_clock clk -name ideal_clock1 -period 1

# Important to dont_touch the objects you later want to constrain
set_dont_touch [get_cells -hierarchical -filter "ref_name == low_swing_tx"]
set_dont_touch [get_cells -hierarchical -filter "ref_name == low_swing_rx"]

set_dont_touch [get_nets s_tx]
set_dont_touch [get_nets e_tx]

compile

saif_map -create_map -input "${asictop}_D_W$datawidth.saif" -source_instance "TOP/top/dut"

saif_map -type ptpx -write_map "asic-post-synth.$asictop.$datawidth.namemap"

write -format verilog -hierarchy -output asic-post-synth.$asictop.$datawidth.v
write -format ddc     -hierarchy -output asic-post-synth.$asictop.$datawidth.ddc

report_timing -nosplit -transition_time -nets -attributes > asic-post-synth-timing.$asictop.$datawidth.rpt
report_area -nosplit -hierarchy                           > asic-post-synth-area.$asictop.$datawidth.rpt
report_power -nosplit -hierarchy                          > asic-post-synth-power.$asictop.$datawidth.rpt

exit
