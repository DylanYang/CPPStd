//
//  main.cpp
//  L07Functions
//
//  Created by Dylan Yang on 4/23/15.
//  Copyright (c) 2015 Dylan Yang. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[]) {
    People *p = new Man(20);
    p->sayHello();
    p->eat();
    return 0;
}
