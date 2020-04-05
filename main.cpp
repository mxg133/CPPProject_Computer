//
//  main.cpp
//  COMPUTER
//
//  Created by 孟享广 on 2019/10/30.
//  Copyright © 2019 孟享广. All rights reserved.
//

#include <iostream>
#include "COMPUTER.hpp"
using namespace std;
int main() {
    // insert code here...
//    CPU a = {P3, 300, 3.0};
//    a.Run();
//    a.Stop();
//    cout << "***************" << endl;
//    RAM b = {DDR3, 1066, 8};
//    b.Run();
//    b.Run();
//
//    cout << "***************" << endl;
//    CDROM c = {SATA, 2, built_in};
//    c.Run();
//    c.Stop();
//
//    cout << "***************" << endl;
//    COMPUTER my = {a, b, c, 128, 10};
//    my.Run();
//    my.Stop();
    
    CPU *a = new CPU(P3, 300, 3.0);
    a->Run();
    a->Stop();
    delete a;
    cout << "***************" << endl;
    RAM *b = new RAM(DDR3, 1066, 8);
    b->Run();
    b->Run();
    delete b;
    cout << "***************" << endl;
    CDROM *c = new CDROM(SATA, 2, built_in);
    c->Run();
    c->Stop();
    delete c;
    cout << "***************" << endl;
    COMPUTER *my = new COMPUTER(*a, *b, *c, 128, 10);
    my->Run();
    my->Stop();
    delete my;
    return 0;
}

