#include<iostream>
#include<Vtop.h>
extern "C" void ebreak(int i);
extern Vtop top;
void  ebreak(int i){
    unsigned int mask = 0x00100073u;
    if((i^mask)==0){
        exit(0);
    }
}
