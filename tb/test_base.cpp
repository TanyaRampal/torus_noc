#include <iostream>
#include <string.h>

#include "verilated.h"
#include "Vtop.h"
#include "test_base.h"

int main(int argc, char ** argv){
    Tb_Base<Vtop> * top = new Tb_Base<Vtop>(argc, argv);

    int line_count=1024;
    if(argc >= 2 && argv[1][0] >= '0' && argv[1][0] <= '9') {
        line_count = atoi(argv[1]);
    }

    while(!top->isDone() && top->getTime() < 100 + 2*line_count){
        top->toggleClock();
    }

    delete top;
}
