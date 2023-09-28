CSRC=$(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
VSRC=$(shell find $(abspath ./vsrc) -name "*.sv")

CPL=verilator
FLAGS=--build --cc --top-module top --sv --x-initial 0 -CFLAGS -g 
EXE_FLAGS=$(FLAGS)  --exe  --timing  -CFLAGS -g 

BIN=
gdb:exe
	gdb ./obj_dir/Vtop $(BIN) 
run:exe
	./obj_dir/Vtop $(BIN)
exe:build $(CSRC)
	$(CPL) $(EXE_FLAGS) $(VSRC) $(CSRC) -LDFLAGS -lreadline
build:$(VSRC)
	$(CPL) $(VSRC) $(FLAGS)
clean:
	-rm -rf  obj_dir
echo:
	echo $(CSRC)