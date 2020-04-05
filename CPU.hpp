//
//  CPU.hpp
//  COMPUTER
//
//  Created by 孟享广 on 2019/10/30.
//  Copyright © 2019 孟享广. All rights reserved.
//

#ifndef CPU_hpp
#define CPU_hpp

#include <iostream>
using namespace std;
enum CPU_Rank{P1 = 1, P2, P3, P4, P5, P6, P7};
class CPU {
    CPU_Rank m_Rank;//等级
    int m_Frequenc; //频率值
    double m_Voltage;//电压值
public:
    CPU(CPU_Rank, int, double);
    ~CPU();
    CPU(CPU &c){
        m_Rank = c.m_Rank;
        m_Frequenc = c.m_Frequenc;
        m_Voltage = c.m_Voltage;
    }
    void Run();
    void Stop();
    
    CPU_Rank GetRank(){ return m_Rank; }
    void SetRank(CPU_Rank val){ m_Rank = val; }
    int GetFrequenc(){ return m_Frequenc; }
    void SetFrequenc(int val){ m_Frequenc = val; }
    double GetVoltage(){ return m_Voltage; }
    void SetVoltage(double val){ m_Voltage = val; }
};
#endif /* CPU_hpp */
