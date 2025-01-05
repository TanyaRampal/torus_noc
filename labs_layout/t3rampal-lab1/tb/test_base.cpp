#include <iostream>
#include <string.h>

#include "verilated.h"
#include "Vtop.h"
#include "test_base.h"

int main(int argc, char ** argv){
    Tb_Base<Vtop> * top = new Tb_Base<Vtop>(argc, argv);

    int line_count=atoi(argv[1]);
    while(!top->isDone() && top->getTime() < 2*line_count){
        top->toggleClock();
    }

    delete top;
}
