# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtop \
	Vtop___024root__DepSet_h84412442__0 \
	Vtop___024root__DepSet_h84412442__1 \
	Vtop___024root__DepSet_h84412442__2 \
	Vtop___024root__DepSet_heccd7ead__0 \
	Vtop___024root__DepSet_heccd7ead__1 \
	Vtop_credit_bp_rx__pi34__DepSet_h5fd749be__0 \
	Vtop_noc_if__D20_X2_Y2_V3__DepSet_h1c8005e7__0 \
	Vtop_noc_if__V3_X2_Y2_D20__DepSet_h39fd2e1c__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtop___024root__Slow \
	Vtop___024root__DepSet_h84412442__0__Slow \
	Vtop___024root__DepSet_h84412442__1__Slow \
	Vtop___024root__DepSet_h84412442__2__Slow \
	Vtop___024root__DepSet_heccd7ead__0__Slow \
	Vtop_credit_bp_rx__pi34__Slow \
	Vtop_credit_bp_rx__pi34__DepSet_h935b1961__0__Slow \
	Vtop_noc_if__D20_X2_Y2_V3__Slow \
	Vtop_noc_if__D20_X2_Y2_V3__DepSet_h1c8005e7__0__Slow \
	Vtop_noc_if__V3_X2_Y2_D20__Slow \
	Vtop_noc_if__V3_X2_Y2_D20__DepSet_h39fd2e1c__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtop__Trace__0 \
	Vtop__Trace__1 \
	Vtop__Trace__2 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtop__Syms \
	Vtop__Trace__0__Slow \
	Vtop__TraceDecls__0__Slow \
	Vtop__Trace__1__Slow \
	Vtop__Trace__2__Slow \
	Vtop__Trace__3__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
