//
//  main.cpp
//  L01OOP
//
//  Created by Dylan Yang on 4/22/15.
//  Copyright (c) 2015 Dylan Yang. All rights reserved.
//

#include <iostream>
#include "People.h"
using namespace jikexueyuan;
//class People{
//
//public:
//    void sayHello(){
//        printf("Hello CPP\n");
//    }
//};

int main(int argc, const char * argv[]) {
    People *p = new People();
    p->sayHello();
    delete p;
    return 0;
}
