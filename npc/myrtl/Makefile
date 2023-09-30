CSRC=$(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cpp")
VSRC=$(shell find $(abspath ./vsrc) -name "*.sv")

CPL=verilator
FLAGS=--build --cc --top-module top --sv --x-initial 0 -CFLAGS -g 
EXE_FLAGS=$(FLAGS)  --exe  --timing  -CFLAGS -g -LDFLAGS -lreadline -LDFLAGS -lLLVM-14 

CXXFLAGS += $(shell llvm-config --cxxflags) -fPIE
LIBS += $(shell llvm-config --libs)

BIN=
ELF=
gdb:exe
	gdb ./obj_dir/Vtop $(BIN)  $(ELF)
run:exe
	./obj_dir/Vtop $(BIN) $(ELF)
exe:build $(CSRC)  obj_dir/disasm.o
	$(CPL) $(EXE_FLAGS) $(VSRC) $(CSRC)  -LDFLAGS disasm.o -LDFLAGS $(LIBS) -LDFLAGS -pie
build:$(VSRC) 
	$(CPL) $(VSRC) $(FLAGS)
clean:
	-rm -rf  obj_dir
echo:
	echo $(CSRC)

obj_dir/disasm.o: csrc/disasm.cc
	g++ -O2 -MMD -Wall  -O2  -Og -ggdb3  -DITRACE_COND=true -D__GUEST_ISA__=riscv32  -I/usr/lib/llvm-14/include -std=c++14   -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS -fPIE -c -o ./obj_dir/disasm.o ./csrc/disasm.cc