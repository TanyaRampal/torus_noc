set_app_var target_library "/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gplusbc.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gpluswcl.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gplustc.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gpluslt.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gpluswcz.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gpluswc.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gplusml.db"

set_app_var link_library "* /CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gplusbc.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gpluswcl.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gplustc.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gpluslt.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gpluswcz.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gpluswc.db \
/CMC/kits/tsmc_65nm_libs/tcbn65gplus_200a/TSMCHOME/digital/Front_End/timing_power_noise/NLDM/tcbn65gplus_140b/tcbn65gplusml.db"


saif_map -start

analyze -format sverilog ../rtl/torus_xbar_1b.v
elaborate torus_xbar_1b

check_design

create_clock clk -name ideal_clock1 -period 1

compile

saif_map -create_map -input "torus_xbar_1b.saif" -source_instance "TOP/torus_xbar_1b"

saif_map -type ptpx -write_map "asic-post-synth.namemap"

write -format verilog -hierarchy -output asic-post-synth.v
write -format ddc     -hierarchy -output asic-post-synth.ddc

report_timing -nosplit -transition_time -nets -attributes > asic-post-synth-timing.rpt
report_area -nosplit -hierarchy                           > asic-post-synth-area.rpt
report_power -nosplit -hierarchy                          > asic-post-synth-power.rpt

exit
