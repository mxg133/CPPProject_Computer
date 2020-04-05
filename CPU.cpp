//
//  CPU.cpp
//  COMPUTER
//
//  Created by 孟享广 on 2019/10/30.
//  Copyright © 2019 孟享广. All rights reserved.
//

#include "CPU.hpp"
CPU::CPU(CPU_Rank r, int f, double v){
    SetRank(r);
    SetFrequenc(f);
    SetVoltage(v);
    cout << "CPU(CPU_Rank r, int f, double v)" << endl;
}
void CPU::Run(){
    cout << "CPU had RUN now!" <<endl;
}
void CPU::Stop(){
    cout << "CPU had STOP now!" << endl;
}

CPU::~CPU(){
    cout << "CPU had replease!" << endl;
}
