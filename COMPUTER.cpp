//
//  COMPUTER.cpp
//  COMPUTER
//
//  Created by 孟享广 on 2019/10/30.
//  Copyright © 2019 孟享广. All rights reserved.
//

#include "COMPUTER.hpp"
COMPUTER::COMPUTER(CPU c, RAM r, CDROM cd, unsigned int s, unsigned int b):m_cpu(c), m_ram(r), m_cdrom(cd){
//    Setcpu(c);
//    Setram(r);
//    Setcdrom(cd);
    Setstorage_size(s);
    Setbandwidth(b);
    cout << "COMPUTER(CPU c, RAM r, CDROM cd, unsigned int s, unsigned int b)" << endl;
}
void COMPUTER::Run(){
    m_cpu.Run();
    m_ram.Run();
    m_cdrom.Run();
    cout << "COMPUTER had RUN now!" << endl;
}
void COMPUTER::Stop(){
    m_cpu.Stop();
    m_ram.Stop();
    m_cdrom.Stop();
    cout << "COMPUTER had STOP now!" << endl;
}

COMPUTER::~COMPUTER(){
    cout << "COMPUTER had replease!" << endl;
}
