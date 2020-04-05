//
//  RAM.cpp
//  COMPUTER
//
//  Created by 孟享广 on 2019/10/30.
//  Copyright © 2019 孟享广. All rights reserved.
//

#include "RAM.hpp"
RAM::RAM(RAM_Type t, unsigned int f, unsigned int s){
    SetType(t);
    SetFrequency(f);
    SetSize(s);
    cout << "RAM(RAM_Type t, unsigned int f, unsigned int s)" << endl;
}
void RAM::Run(){
    cout << "RAM had RUN now!" <<endl;
}
void RAM::Stop(){
    cout << "RAM had STOP now!" << endl;
}

RAM::~RAM(){
    cout << "RAM had replease!" << endl;
}
