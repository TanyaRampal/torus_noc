TEST ?= torus_xbar_1b
DATA_FILE ?= input.hex
DATA_DIR ?= data
DATA_PATH ?= $(DATA_DIR)/$(DATA_FILE)
NUM_SAMPLES ?= 16

SIM_DIR = sim/
VCD ?= 0
VCD_FILE_STR ?= $(TEST).vcd
SRC =  rtl/$(TEST).v
TOP = top

VFLAGS = -DDATA_PATH=\"../$(DATA_PATH)\" -DTRACE_FILE=\"output.hex\" -DMAX_TEST_DEPTH=4096

ifeq ($(VCD), 1)
VFLAGS+= --trace
_CFLAGS+= -DVCD -DVCD_FILE=$(VCD_FILE_STR) 
endif

verilator-compile: $(SRC) tb/test_base.cpp
	mkdir -p $(SIM_DIR)
	verilator $(VFLAGS) \
		-CFLAGS $(_CFLAGS) \
		-Irtl \
		-Itb \
		--clk clk \
		--cc $(SRC) \
		tb/test_$(TEST).sv \
		--exe tb/test_base.cpp \
		-top-module top \
		--Mdir $(SIM_DIR)
	make -C $(SIM_DIR) -f V$(TOP).mk V$(TOP) 

verilator-sim: verilator-compile
	echo "Verilator Running Test"
	cd $(SIM_DIR) && ./V$(TOP) $(NUM_SAMPLES)

fpga-run:
	cd fpga; vivado -mode tcl -source fpga-par.tcl; cd ..

asic-run:
	cd asic; dc_shell-xg-t -f asic-synth.tcl; innovus -64 -no_gui -files asic-par.tcl; cd ..

schex:
	ocean -nograph -norecurse < fullcustom/schematic2hspice.ocn
	cp ./simulation/torus_xbar_1b/hspiceD/schematic/netlist/input.ckt spice/torus_xbar_1b_schematic.sp

schematic-spice-sim:
	cd spice; hspice schematic_tb.sp > trace.schematic.txt; cd ..;
	#wv schematic_tb.tr0; cd ..

lvs-step:
	rm -f .running
	mkdir -p ./lvs
	strmout -library ece720t7 -topCell torus_xbar_1b -view layout -strmFile output.gds
	mv output.gds lvs/torus_xbar_1b.calibre.db
	cp fullcustom/si.env .
	si -batch -cdslib cds.lib -command netlist
	mv torus_xbar_1b.src.net ./lvs
	calibre -gui -lvs -runset fullcustom/ece720.lvs.runset -batch > fullcustom/cmdline.lvs.txt

drc-step:
	mkdir -p ./drc
	strmout -library ece720t7 -topCell torus_xbar_1b -view layout -strmFile output.gds
	cp output.gds ./drc/torus_xbar_1b.calibre.db
	calibre -gui -drc -runset fullcustom/ece720.drc.runset -batch > fullcustom/cmdline.drc.txt

pex-step:
	mkdir -p ./pex
	strmout -library ece720t7 -topCell torus_xbar_1b -view layout -strmFile output.gds
	mv output.gds ./pex/torus_xbar_1b.calibre.db
	calibre -gui -pex -runset fullcustom/ece720.pex.runset -batch > fullcustom/cmdline.pex.txt
	cp ./pex/torus_xbar_1b.pex.netlist spice/
	cp ./pex/torus_xbar_1b.pex.netlist.TORUS_XBAR_1B.pxi spice/
	cp ./pex/torus_xbar_1b.pex.netlist.pex spice/

layout-spice-sim:
	cd spice; hspice layout_tb.sp > trace.layout.txt; cd ..;
	#wv spice/layout_tb.tr0;

customcell-step:
	./customcell/liberate.sh
	./customcell/lef.sh
	strmout -library ece720t7 -topCell torus_xbar_1b -view layout -strmFile torus_xbar_1b.gds

grade.csv: grade.sh
	./grade.sh > grade.csv

.PHONY: clean

clean:
	rm -rf $(SIM_DIR) *_stack_trace_* *.tr0 *.su0 *.st0 *.ic0 *.mt0.* *.pa0 *ldb*.gz *.log *.txt decks.* altos.*


prep:
	python3 $(DATA_DIR)/gencsv.py -s $(DATA_DIR)/signals.json -o $(DATA_DIR)/input.csv -n $(NUM_SAMPLES)
	python3 $(DATA_DIR)/genhex.py -s $(DATA_DIR)/signals.json -f $(DATA_DIR)/input.csv -o $(DATA_DIR)/input.hex
	python3 $(DATA_DIR)/genstim.py -s $(DATA_DIR)/signals.json -f $(DATA_DIR)/input.csv -o $(DATA_DIR)
	make verilator-sim
	cp $(SIM_DIR)/output.hex $(DATA_DIR)/golden.hex
	make fpga-run
	cp fpga/fpga-par-utilization.txt fpga/fpga-par-utilization.golden.txt
	cp fpga/fpga-par-timing.txt fpga/fpga-par-timing.golden.txt
	make asic-run
	cp asic/asic-post-par-area.rpt asic/asic-post-par-area.golden.rpt
	cp asic/asic-post-par-timing.rpt asic/asic-post-par-timing.golden.rpt

