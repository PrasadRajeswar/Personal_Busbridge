# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb_mc16x2_updated.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
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
	Vtb_mc16x2_updated \
	Vtb_mc16x2_updated___024root__DepSet_h1a49f48b__0 \
	Vtb_mc16x2_updated___024root__DepSet_h1a49f48b__1 \
	Vtb_mc16x2_updated___024root__DepSet_he3efb267__0 \
	Vtb_mc16x2_updated_mc_ch_arb__DepSet_h2f930527__0 \
	Vtb_mc16x2_updated_mc_pc_core__DepSet_h936f3fdc__0 \
	Vtb_mc16x2_updated_mc_pc_core__DepSet_h936f3fdc__1 \
	Vtb_mc16x2_updated_mc_pc_core__DepSet_h936f3fdc__2 \
	Vtb_mc16x2_updated_mc_pc_core__DepSet_h936f3fdc__3 \
	Vtb_mc16x2_updated_mc_pc_core__DepSet_h936f3fdc__4 \
	Vtb_mc16x2_updated_mc_pc_core__DepSet_h936f3fdc__5 \
	Vtb_mc16x2_updated_mc_pc_core__DepSet_h936f3fdc__6 \
	Vtb_mc16x2_updated_mc_pc_core__DepSet_h936f3fdc__7 \
	Vtb_mc16x2_updated_mc_pc_core__DepSet_h936f3fdc__8 \
	Vtb_mc16x2_updated_mc_pc_core__DepSet_h936f3fdc__9 \
	Vtb_mc16x2_updated_mc_pc_core__DepSet_h936f3fdc__10 \
	Vtb_mc16x2_updated_mc_pc_core__DepSet_h936f3fdc__11 \
	Vtb_mc16x2_updated_mc_pc_core__DepSet_h936f3fdc__12 \
	Vtb_mc16x2_updated_mc_pc_core__DepSet_h936f3fdc__13 \
	Vtb_mc16x2_updated_mc_pc_core__DepSet_h936f3fdc__14 \
	Vtb_mc16x2_updated_mc_pc_core__DepSet_h936f3fdc__15 \
	Vtb_mc16x2_updated__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtb_mc16x2_updated__ConstPool_0 \
	Vtb_mc16x2_updated___024root__Slow \
	Vtb_mc16x2_updated___024root__DepSet_h1a49f48b__0__Slow \
	Vtb_mc16x2_updated___024root__DepSet_he3efb267__0__Slow \
	Vtb_mc16x2_updated_mc_ch_arb__Slow \
	Vtb_mc16x2_updated_mc_ch_arb__DepSet_hf0994203__0__Slow \
	Vtb_mc16x2_updated_mc_pc_core__Slow \
	Vtb_mc16x2_updated_mc_pc_core__DepSet_h6ccd7718__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtb_mc16x2_updated__Trace__0 \
	Vtb_mc16x2_updated__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtb_mc16x2_updated__Syms \
	Vtb_mc16x2_updated__Trace__0__Slow \
	Vtb_mc16x2_updated__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
