
SIM_DIR = sim/
VCD ?= 0
VCD_FILE_STR ?= "test.vcd"
SRC =  rtl/router.v rtl/torus.sv rtl/client.v
TOP = top

VFLAGS = -DTEST_FILE_X=\"../data/input_x.hex\" -DTEST_FILE_Y=\"../data/input_y.hex\" -DTOP=$(TOP)
_CFLAGS = -CFLAGS

ifeq ($(VCD), 1)
VFLAGS+= --trace
_CFLAGS+= -DVCD -CFLAGS -DVCD_FILE=\\\"$(VCD_FILE_STR)\\\"
endif

compile: $(SRC) tb/test_torus.cpp
	mkdir -p $(SIM_DIR)
	verilator $(VFLAGS) \
		$(_CFLAGS) \
		-Itb\
		-Irtl\
		--clk clk\
		--cc $(SRC)\
		tb/test_torus.sv \
		--exe ./tb/test_torus.cpp \
		-top-module top \
		--Mdir $(SIM_DIR)
	make -C $(SIM_DIR) -f V$(TOP).mk V$(TOP) 

run: compile
	echo "Verilator Running Test"
	cd $(SIM_DIR) && ./V$(TOP) > log.csv
	python3 checkLog.py -f $(SIM_DIR)/log.csv

schex:
	ocean -nograph -norecurse < fullcustom/schematic2hspice_low_swing_rx.ocn
	ocean -nograph -norecurse < fullcustom/schematic2hspice_low_swing_tx.ocn
	cp ./simulation/low_swing_rx/hspiceD/schematic/netlist/input.ckt spice/low_swing_rx_schematic.sp
	cp ./simulation/low_swing_tx/hspiceD/schematic/netlist/input.ckt spice/low_swing_tx_schematic.sp

schematic-spice-sim:
	cd spice; hspice schematic_low_swing_rx_tb.sp > trace.schematic_rx.txt; cd ..;
	cd spice; hspice schematic_low_swing_tx_tb.sp > trace.schematic_tx.txt; cd ..;
	#wv schematic_tb.tr0; cd ..

lvs-step:
	rm -f .running
	mkdir -p ./lvs
	strmout -library ece720t7 -topCell low_swing_tx -view layout -strmFile output0.gds
	strmout -library ece720t7 -topCell low_swing_rx -view layout -strmFile output1.gds
	mv output0.gds lvs/low_swing_tx.calibre.db
	mv output1.gds lvs/low_swing_rx.calibre.db
	cp fullcustom/si.low_swing_tx.env ./si.env
	si -batch -cdslib cds.lib -command netlist
	cp fullcustom/si.low_swing_rx.env ./si.env
	si -batch -cdslib cds.lib -command netlist
	mv low_swing_tx.src.net ./lvs
	mv low_swing_rx.src.net ./lvs
	calibre -gui -lvs -runset fullcustom/ece720.lvs.low_swing_tx.runset -batch > fullcustom/low_swing_tx.lvs.txt
	calibre -gui -lvs -runset fullcustom/ece720.lvs.low_swing_rx.runset -batch > fullcustom/low_swing_rx.lvs.txt

drc-step:
	mkdir -p ./drc
	strmout -library ece720t7 -topCell low_swing_tx -view layout -strmFile output0.gds
	strmout -library ece720t7 -topCell low_swing_rx -view layout -strmFile output1.gds
	mv output0.gds ./drc/low_swing_tx.calibre.db
	mv output1.gds ./drc/low_swing_rx.calibre.db
	calibre -gui -drc -runset fullcustom/ece720.drc.low_swing_tx.runset -batch > fullcustom/low_swing_tx.drc.txt
	calibre -gui -drc -runset fullcustom/ece720.drc.low_swing_rx.runset -batch > fullcustom/low_swing_rx.drc.txt

pex-step:
	mkdir -p ./pex
	strmout -library ece720t7 -topCell low_swing_tx -view layout -strmFile output0.gds
	strmout -library ece720t7 -topCell low_swing_rx -view layout -strmFile output1.gds
	mv output0.gds ./pex/low_swing_tx.calibre.db
	mv output1.gds ./pex/low_swing_rx.calibre.db
	calibre -gui -pex -runset fullcustom/ece720.pex.low_swing_tx.runset -batch > fullcustom/low_swing_tx.pex.txt
	calibre -gui -pex -runset fullcustom/ece720.pex.low_swing_rx.runset -batch > fullcustom/low_swing_rx.pex.txt
	cp ./pex/low_swing_tx.pex.netlist spice/
	cp ./pex/low_swing_rx.pex.netlist spice/
	cp ./pex/low_swing_tx.pex.netlist.pex spice/
	cp ./pex/low_swing_rx.pex.netlist.pex spice/
	cp ./pex/low_swing_tx.pex.netlist.LOW_SWING_TX.pxi spice/
	cp ./pex/low_swing_rx.pex.netlist.LOW_SWING_RX.pxi spice/

layout-spice-sim:
	cd spice; hspice layout_low_swing_rx_tb.sp > trace.layout_rx.txt; cd ..;
	cd spice; hspice layout_low_swing_tx_tb.sp > trace.layout_tx.txt; cd ..;
	#wv spice/layout_tb.tr0;

customcell-step:
	./customcell/liberate.sh
	./customcell/lef.sh
	strmout -library ece720t7 -topCell low_swing_tx -view layout -strmFile low_swing_tx.gds
	strmout -library ece720t7 -topCell low_swing_rx -view layout -strmFile low_swing_rx.gds


.PHONY: clean

clean:
	rm -rf sim
	rm -f log.csv times.csv
