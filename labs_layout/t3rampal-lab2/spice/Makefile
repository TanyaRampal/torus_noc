clean:
	rm -f *.lis *.tr0* *.st0 *.sw0 *.ic0 *.su0 *.pa0 *.mt0* sxcmd* logFile *vec0*

baseline: baseline_power_delay.csv

tx: tx_power_delay.csv

tx-wv:
	wv -x tx_session_file.sx

rx: rx_power_delay.csv

rx-wv:
	wv -x rx_session_file.sx

baseline_power_delay.csv: schematic_baseline_tb.sp baseline_sweep.dat
	hspice schematic_baseline_tb.sp
	cat schematic_baseline_tb.mt0.csv | tail -n +4 | csvcut -c "vdd_power","pd_hh","pd_ll" | grep -v 'failed' | awk -F, 'NR==1 {print "vdd_power, delay"} NR>1 {print $$1","($$2+$$3)/2}' > baseline_power_delay.csv
	tail -n +2 baseline_power_delay.csv | sed "s/,/ /g" | feedgnuplot --domain --lines --xlabel "Power" --ylabel "Delay" --title "Power vs Delay" --terminal 'dumb 120,40' --set 'format x "%2.1e"' --exit

tx_power_delay.csv: schematic_low_swing_tx_tb.sp tx_sweep.dat
	hspice schematic_low_swing_tx_tb.sp
	cat schematic_low_swing_tx_tb.mt0.csv | tail -n +4  | csvcut -c "vdd_power","pd_hh","pd_ll" | grep -v 'failed' | awk -F, 'NR==1 {print "vdd_power, delay"} NR>1 {print $$1","($$2+$$3)/2}' > tx_power_delay.csv
	tail -n +2 tx_power_delay.csv | sed "s/,/ /g" | feedgnuplot --domain --lines --xlabel "Power" --ylabel "Delay" --title "Power vs Delay" --terminal 'dumb 120,40' --set 'format x "%2.1e"' --exit

rx_power_delay.csv: schematic_low_swing_rx_tb.sp rx_sweep.dat
	hspice schematic_low_swing_rx_tb.sp
	cat schematic_low_swing_rx_tb.mt0.csv | tail -n +4  | csvcut -c "vdd_power","pd_hh","pd_ll" | grep -v 'failed' | awk -F, 'NR==1 {print "vdd_power, delay"} NR>1 {print $$1","($$2+$$3)/2}' > rx_power_delay.csv
	tail -n +2 rx_power_delay.csv | sed "s/,/ /g" | feedgnuplot --domain --lines --xlabel "Power" --ylabel "Delay" --title "Power vs Delay" --terminal 'dumb 120,40' --set 'format x "%2.1e"' --exit

plot: tx_power_delay.csv baseline_power_delay.csv rx_power_delay.csv
	tail -n +2 tx_power_delay.csv | sed "s/,/ /g" | feedgnuplot --domain --lines --xlabel "Power" --ylabel "Delay" --title "Power vs Delay" --terminal 'dumb 120,40' --set 'format x "%2.1e"' --exit
	tail -n +2 baseline_power_delay.csv | sed "s/,/ /g" | feedgnuplot --domain --lines --xlabel "Power" --ylabel "Delay" --title "Power vs Delay" --terminal 'dumb 120,40' --set 'format x "%2.1e"' --exit
	tail -n +2 rx_power_delay.csv | sed "s/,/ /g" | feedgnuplot --domain --lines --xlabel "Power" --ylabel "Delay" --title "Power vs Delay" --terminal 'dumb 120,40' --set 'format x "%2.1e"' --exit
