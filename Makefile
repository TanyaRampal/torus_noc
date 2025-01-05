#Test can either be torus, torus_bp, or torus_credit
TEST ?= torus
D_W ?= 32
#DATA_FILE ?= sporadic_delays.hex
#DATA_DIR ?= data
#DATA_PATH ?= $(DATA_DIR)/$(DATA_FILE)
FOLDED ?= 1
SIGMA ?= 5
RATE ?= 16
RUN_CYCLES ?= 4096
YOSYS_STR = "read_verilog -defer -sv prep/client_for_synth.sv; chparam -set D_W $(D_W) client; hierarchy -top client; proc; opt; write_verilog -noattr clientSynth.sv"
ASIC_TORUS_STR = "set asictop $(TEST); set datawidth $(D_W)"

ifeq ($(FOLDED), 1)
  FOLDED_FLAG = --folded
else
  FOLDED_FLAG = 
endif

ifeq ($(shell which python3.12),)
  PYTHON = python3
else
  PYTHON = python3.12
endif

SIM_DIR = sim/
VCD ?= 0
VCD_FILE_STR ?= $(TEST).vcd
TOP = top

SRC = rtl/fifo32.sv rtl/torus_xbar_1b.sv rtl/common_pkg.sv rtl/low_swing_rx.sv rtl/low_swing_tx.sv rtl/shadow_reg_combi.sv rtl/client.sv rtl/token_bucket.sv

ifeq ($(patsubst %credit,,$(TEST)),)
SRC += rtl/torus_switch_credit.sv rtl/dor_credit.sv rtl/credit_bp_rx.sv rtl/credit_bp_tx.sv rtl/noc_if.sv rtl/torus_credit.sv
else ifeq ($(patsubst %bp,,$(TEST)),)
SRC += rtl/torus_switch_bp.sv rtl/dor_bp.sv rtl/torus_bp.sv
else
SRC += rtl/torus_switch.sv rtl/dor.sv rtl/torus.sv
endif

VFLAGS = -DTRACE_FILE=\"output.hex\" -DMAX_TEST_DEPTH=4096 -DPACKET_TRACE_PATH=\"../data/basic.hex\" -GSIGMA=$(SIGMA) -GRATE=$(RATE) -GD_W=$(D_W)

ifeq ($(VCD), 1)
VFLAGS += --trace
_CFLAGS += -DVCD -CFLAGS -DVCD_FILE=\\\"$(VCD_FILE_STR)\\\"
endif

compile: $(SRC) tb/test_base.cpp
	mkdir -p $(SIM_DIR)
	verilator $(VFLAGS) -sv \
		-CFLAGS $(_CFLAGS) \
		-Itb \
		--clk clk \
		--cc $(SRC) \
		tb/test_$(TEST).sv \
		--exe tb/test_base.cpp \
		-top-module top \
		--Mdir $(SIM_DIR)
	make -C $(SIM_DIR) -f V$(TOP).mk V$(TOP) 

run: data/data_D_W_$(D_W) compile
	echo "Verilator Running Test"
	cp data/data_D_W_$(D_W)/* data/
	cd $(SIM_DIR) && ./V$(TOP) $(RUN_CYCLES)

sim/$(TEST)_D_W$(D_W).vcd:
	make run TEST=$(TEST) VCD=1 D_W=$(D_W)
	cp sim/$(TEST).vcd sim/$(TEST)_D_W$(D_W).vcd

sim/$(TEST)_D_W$(D_W).saif: sim/$(TEST)_D_W$(D_W).vcd
	vcd2saif -input sim/$(TEST)_D_W$(D_W).vcd -output sim/$(TEST)_D_W$(D_W).saif

fpga-run: rtl/client_for_synth_D_W$(D_W).sv sim/$(TEST)_D_W$(D_W).saif rtl/*.sv fpga/*.tcl
	cp rtl/client_for_synth_D_W$(D_W).sv rtl/client_for_synth.sv
	cp sim/$(TEST)_D_W$(D_W).saif fpga
	rm -f scripts/fpga_layout.xdc
	rm -f fpga/floorplan.xdc
	cd scripts; $(PYTHON) create_floor_plan.py $(FOLDED_FLAG) --mode=$(TEST) -o fpga_layout.xdc --d_w=$(D_W); cp fpga_layout.xdc ../fpga/floorplan.xdc; cd ..
	cd fpga; vivado -mode tcl -source fpga-par.tcl -tclargs $(TEST) $(D_W); vivado -mode tcl -source fpga-power.tcl -tclargs $(TEST) $(D_W); cd ..

asic-run: rtl/client_for_synth_D_W$(D_W).sv sim/$(TEST)_D_W$(D_W).saif rtl/*.sv asic/*.tcl
	cp rtl/client_for_synth_D_W$(D_W).sv rtl/client_for_synth.sv
	cp sim/*.saif asic/
	cp sim/$(TEST)_D_W$(D_W).saif asic/$(TEST).saif
	rm -f asic/layout.tcl
	rm -f scripts/asic_layout.tcl
	cd scripts; $(PYTHON) create_floor_plan.py $(FOLDED_FLAG) --mode=$(TEST) --asic -o asic_layout.tcl --x_start=0 --y_start=0 --x_end=1499 --y_end=1499 --d_w=$(D_W); cp asic_layout.tcl ../asic/layout.tcl; cd ..
	cd asic; dc_shell-xg-t -f asic-synth.tcl -x $(ASIC_TORUS_STR); innovus -64 -no_gui -execute $(ASIC_TORUS_STR) -files asic-par.tcl; pt_shell -f asic-power.tcl -x $(ASIC_TORUS_STR); cd ..

asic-customcell-run: rtl/client_for_synth_D_W$(D_W).sv sim/$(TEST)_D_W$(D_W).saif rtl/*.sv customcell/*.tcl
	cp rtl/client_for_synth_D_W$(D_W).sv rtl/client_for_synth.sv
	cp sim/$(TEST)_D_W$(D_W).saif customcell/
	rm -f customcell/layout.tcl
	rm -f scripts/asic_layout.tcl
	cd scripts; $(PYTHON) create_floor_plan.py $(FOLDED_FLAG) --mode=$(TEST) --asic -o asic_layout.tcl --x_start=0 --y_start=0 --x_end=1499 --y_end=1499 --d_w=$(D_W); cp asic_layout.tcl ../customcell/layout.tcl; cd ..
	cd customcell; dc_shell-xg-t -f asic-synth.tcl -x $(ASIC_TORUS_STR); innovus -64 -no_gui -execute $(ASIC_TORUS_STR) -files asic-par.tcl;  pt_shell -f asic-power.tcl -x $(ASIC_TORUS_STR); cd ..

grade.csv: grade.sh rtl/* tb/* data/*
	./grade.sh > grade.csv

.PHONY: clean grade.csv asic-customcell-run asic-run fpga-run

clean:
	rm -rf $(SIM_DIR)

# copy over the custom cell export DB files
copydb:
	cp -Rf ../lab1/*.db ./asic
	cp -Rf ../lab2/*.db ./asic
