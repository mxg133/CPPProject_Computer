//
//  CDROM.cpp
//  COMPUTER
//
//  Created by 孟享广 on 2019/10/30.
//  Copyright © 2019 孟享广. All rights reserved.
//

#include "CDROM.hpp"
CDROM::CDROM(CDROM_Interface i, unsigned int s, CDROM_Install_Type it){
    SetInterface(i);
    SetCache_Size(s);
    SetInstall_Type(it);
    cout << "CDROM(CDROM_Interface i, unsigned int s, CDROM_Install_Type it)" << endl;
}
void CDROM::Run(){
    cout << "CD_ROM had RUN now!" << endl;
}
void CDROM::Stop(){
    cout << "CD_ROM had STOP now!" << endl;
}

CDROM::~CDROM(){
    cout << "CDROM had replease!" << endl;
}

