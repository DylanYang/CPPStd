//
//  main.cpp
//  L06Super
//
//  Created by Dylan Yang on 4/23/15.
//  Copyright (c) 2015 Dylan Yang. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[]) {
    Man *m = new Man(21);
//    m->sayHello();
    m->People::sayHello();
    m->sayHello();
    return 0;
}
