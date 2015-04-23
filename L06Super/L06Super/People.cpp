//
//  People.cpp
//  L01OOP
//
//  Created by Dylan Yang on 4/22/15.
//  Copyright (c) 2015 Dylan Yang. All rights reserved.
//

#include "People.h"

People::People(){
    this->age = 10;
    this->sex = 1;
}

People::People(int age,int sex){
    this->age = age;
    this->sex = sex;
}

int People::getAge(){
    return this->age;
}

int People::getSex(){
    return this->sex;
}

void People::sayHello(){
    printf("People say Hello,hi\n");
}
