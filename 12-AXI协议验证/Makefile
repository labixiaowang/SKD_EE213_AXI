# AXI4-Lite assertion-based verification flow (Verilator)
#
#   make run-baseline   build + simulate the bug-free design (expect PASS)
#   make run-m2_rdata_unstable   build + simulate one mutant (expect detection)
#   make all            run baseline and every mutant
#   make summary        print assertion results from all run logs
#   make clean
#
# Waveforms: each run writes build/<target>/wave.fst (open with GTKWave).

VERILATOR ?= $(shell command -v verilator 2>/dev/null || echo $(abspath ../..)/chisel-env/bin/verilator)
VFLAGS := --binary --timing --assert --trace -j 4 -Wno-fatal --top-module tb_top

# the conda-forge verilator invokes its conda compiler by full triplet
# name; make sure chisel-env/bin (which provides it) is on PATH
export PATH := $(abspath ../..)/chisel-env/bin:$(PATH)

COMMON  := sva/axi4lite_checker.sv tb/tb_top.sv

TARGETS := baseline m1_rvalid_drop m2_rdata_unstable m3_spurious_bvalid m4_missing_bvalid m5_bad_rresp

SLAVE_baseline          := rtl/axi4lite_slave.sv
SLAVE_m1_rvalid_drop    := mutants/m1_rvalid_drop.sv
SLAVE_m2_rdata_unstable := mutants/m2_rdata_unstable.sv
SLAVE_m3_spurious_bvalid:= mutants/m3_spurious_bvalid.sv
SLAVE_m4_missing_bvalid := mutants/m4_missing_bvalid.sv
SLAVE_m5_bad_rresp      := mutants/m5_bad_rresp.sv

.PHONY: all clean summary
all: $(addprefix run-,$(TARGETS))

define TEMPLATE
build/$(1)/simv: $$(SLAVE_$(1)) $$(COMMON)
	mkdir -p build/$(1)
	$$(VERILATOR) $$(VFLAGS) -Mdir build/$(1) -o simv $$(SLAVE_$(1)) $$(COMMON)

run-$(1): build/$(1)/simv
	cd build/$(1) && ./simv > run.log 2>&1 || true
	@if grep -q "RESULT: PASS" build/$(1)/run.log; then \
	    echo "$(1): no assertion fired"; \
	else \
	    echo "$(1): assertion(s) fired:"; \
	    grep "ASSERT-FAIL" build/$(1)/run.log | sed 's/^/    /'; \
	fi
endef
$(foreach t,$(TARGETS),$(eval $(call TEMPLATE,$(t))))

summary:
	@for t in $(TARGETS); do \
	    echo "=== $$t ==="; \
	    if [ ! -f build/$$t/run.log ]; then echo "(no log)"; continue; fi; \
	    grep -E "ASSERT-FAIL|RESULT:|GLOBAL TIMEOUT|scoreboard errors" build/$$t/run.log; \
	    n=$$(grep -c "SB-MISMATCH" build/$$t/run.log); \
	    [ "$$n" -gt 0 ] && echo "scoreboard mismatches: $$n"; \
	    true; \
	done

clean:
	rm -rf build
