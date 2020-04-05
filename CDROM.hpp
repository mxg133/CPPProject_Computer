//
//  CDROM.hpp
//  COMPUTER
//
//  Created by 孟享广 on 2019/10/30.
//  Copyright © 2019 孟享广. All rights reserved.
//

#ifndef CDROM_hpp
#define CDROM_hpp

#include <iostream>
using namespace std;
enum CDROM_Interface{SATA, USB};
enum CDROM_Install_Type{external, built_in};
class CDROM {
    CDROM_Interface m_Interface;
    unsigned int m_Cache_Size;//容量
    CDROM_Install_Type m_Install_Type;
public:
    CDROM(CDROM_Interface, unsigned int, CDROM_Install_Type);
    ~CDROM();
    void Run();
    void Stop();
    
    CDROM_Interface GetInterface(){ return m_Interface; }
    void SetInterface( CDROM_Interface val ){ m_Interface = val; }
    unsigned int GetCache_Size(){ return m_Cache_Size; }
    void SetCache_Size( unsigned int val ){ m_Cache_Size = val; }
    CDROM_Install_Type GetInstall_Type(){ return m_Install_Type; }
    void SetInstall_Type( CDROM_Install_Type val ){ m_Install_Type = val; }
};
#endif /* CDROM_hpp */
