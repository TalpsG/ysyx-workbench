CSRC=$(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cpp")
VSRC=$(shell find $(abspath ./vsrc) -name "*.sv")

CPL=verilator
FLAGS=--build --cc --top-module top --sv --x-initial 0 -CFLAGS -g 

DIFF_SO_PATH=/home/talps/gitrepo/ysyx-workbench/npc
CXXFLAGS += $(shell llvm-config --cxxflags) -fPIE
LIBS += $(shell llvm-config --libs)

BIN=
ELF=

FTRACE=-CFLAGS -DCONFIG_FTRACE=1
MTRACE=-CFLAGS -DCONFIG_MTRACE=1
ITRACE=-CFLAGS -DCONFIG_ITRACE=1
DIFFTEST=-CFLAGS -DCONFIG_DIFFTEST=1
TRACE_CFLAGS=-CFLAGS -g  -CFLAGS -DTRACE=1 $(DIFFTEST)
TRACE_FLAGS=--trace $(FLAGS)  --exe  --timing     

EXE_FLAGS=$(FLAGS)  --exe  --timing     
EXE_CFLAGS=-CFLAGS -g -CFLAGS -DMAINARGS=\"$(mainargs)\" 
EXE_LDFLAGS=-LDFLAGS -lreadline -LDFLAGS -lLLVM-14 -LDFLAGS -pie -LDFLAGS -ldl  -LDFLAGS disasm.o -LDFLAGS -pie -LDFLAGS $(LIBS)



gdb:exe
	gdb --args ./obj_dir/Vtop $(BIN)  $(ELF) 
run:exe
	./obj_dir/Vtop $(BIN) $(ELF) 
exe:build $(CSRC)  obj_dir/disasm.o
	$(CPL) $(EXE_FLAGS) $(VSRC) $(CSRC) $(EXE_CFLAGS) $(EXE_LDFLAGS)   -j 4  
build:$(VSRC) 
	$(CPL) $(VSRC) $(FLAGS)
clean:
	-rm -rf  obj_dir
trace:build $(CSRC)  obj_dir/disasm.o
	$(CPL) $(TRACE_FLAGS) $(VSRC) $(CSRC) $(TRACE_CFLAGS) $(EXE_LDFLAGS)   -j 4 

obj_dir/disasm.o: csrc/disasm.cc
	g++ -O2 -MMD -Wall  -O2  -Og -ggdb3  -DITRACE_COND=true -D__GUEST_ISA__=riscv32  -I/usr/lib/llvm-14/include -std=c++14   -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS -fPIE -c -o ./obj_dir/disasm.o ./csrc/disasm.cc
