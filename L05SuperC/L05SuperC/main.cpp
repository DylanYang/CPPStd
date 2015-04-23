//
//  main.cpp
//  L05SuperC
//
//  Created by Dylan Yang on 4/23/15.
//  Copyright (c) 2015 Dylan Yang. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[]) {
    Man *m = new Man(20);
    
    printf("age:%d\n",m->getAge());
    printf("sex:%d\n",m->getSex());
    return 0;
}
