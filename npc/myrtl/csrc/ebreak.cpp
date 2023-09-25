#include<iostream>
#include<Vtop.h>
extern "C" void ebreak(int i);
extern Vtop top;
void  ebreak(int i){
    unsigned int mask = 0x00100073u;
    if((i^mask)==0){
        printf("r1:%d,r2:%d",top.regfile[1],top.regfile[2]);
        exit(0);
    }
    //std::cout<<"ins : "<<std::hex<<i<<"\n";
}
