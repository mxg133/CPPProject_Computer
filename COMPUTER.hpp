//
//  COMPUTER.hpp
//  COMPUTER
//
//  Created by 孟享广 on 2019/10/30.
//  Copyright © 2019 孟享广. All rights reserved.
//

#ifndef COMPUTER_hpp
#define COMPUTER_hpp

#include <iostream>
#include "CPU.hpp"
#include "RAM.hpp"
#include "CDROM.hpp"
using namespace std;
class COMPUTER {
    CPU m_cpu;
    RAM m_ram;
    CDROM m_cdrom;
    unsigned int m_storage_size;
    unsigned int m_bandwidth;
public:
    COMPUTER(CPU, RAM, CDROM, unsigned int, unsigned int);
    ~COMPUTER();
    void Run();
    void Stop();
    
    CPU Getcpu(){ return m_cpu; }//返回了一个对象
    void Setcpu( CPU val ){ m_cpu = val; }
    RAM Getram(){ return m_ram; }
    void Setram( RAM val ){ m_ram = val; }
    CDROM Getcdrom(){ return m_cdrom; }
    void Setcdrom( CDROM val ){ m_cdrom = val; }
    unsigned int Getstorage_size(){ return m_storage_size; }
    void Setstorage_size( unsigned int val ){ m_storage_size = val; }
    unsigned int Getbandwidth(){ return m_bandwidth; }
    void Setbandwidth( unsigned int val ){ m_bandwidth = val; }
};
#endif /* COMPUTER_hpp */
