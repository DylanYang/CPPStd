//
//  main.cpp
//  L03Classes
//
//  Created by Dylan Yang on 4/23/15.
//  Copyright (c) 2015 Dylan Yang. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[]) {
    Man *m = new Man();
    m->sayHello();
    printf("\n");
    printf("%d\n",m->getAge());
    printf("\n");
    printf("%d\n",m->getSex());
    return 0;
}
