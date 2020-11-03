//
// Created by cst on 10/31/20.
//

#include "cpx.h"
#include "cpu.h"

void cpximm()
{
    uint8_t value_mem = get_arg(1);
    if(value_mem >= cpu.x)//Seteamos el carry flag
        setsr(0);

    if(value_mem == cpu.x)//Seteamos el zero flag
        setsr(1);

    if((value_mem >> 7) & 0x01)
        setsr(7);
}

void cpxzpg()
{}

void cpxabs()
{}