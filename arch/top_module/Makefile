
VERILATOR = verilator

TOP_MODULE = tb_mc16x2_updated

FLAGS = --binary --timing --trace --Wall -Wno-UNUSEDSIGNAL

FILELIST = filelist.f

all: build run

build:
	$(VERILATOR) $(FLAGS) --top-module $(TOP_MODULE) -f $(FILELIST)

run:
	./obj_dir/V$(TOP_MODULE)

clean:
	rm -rf obj_dir

.PHONY: all build run clean

