//
//  RAM.hpp
//  COMPUTER
//
//  Created by 孟享广 on 2019/10/30.
//  Copyright © 2019 孟享广. All rights reserved.
//

#ifndef RAM_hpp
#define RAM_hpp

#include <iostream>
using namespace std;
enum RAM_Type{DDR2 = 2, DDR3, DDR4};
class RAM {
    RAM_Type m_Type;
    unsigned int m_Frequency;//频率
    unsigned int m_Size;//容量
public:
    RAM(RAM_Type, unsigned int, unsigned int);
    ~RAM();
    void Run();
    void Stop();
    
    RAM_Type GetType(){ return m_Type; }
    void SetType(RAM_Type val){ m_Type = val; }
    unsigned int GetFrequency(){ return m_Frequency; }
    void SetFrequency(unsigned int val){ m_Frequency = val; }
    unsigned int GetSize(){ return m_Size; }
    void SetSize(unsigned int val){ m_Size = val; }
};
#endif /* RAM_hpp */
