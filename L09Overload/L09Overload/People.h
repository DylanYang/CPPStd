//
//  People.h
//  L01OOP
//
//  Created by Dylan Yang on 4/22/15.
//  Copyright (c) 2015 Dylan Yang. All rights reserved.
//

#ifndef __L01OOP__People__
#define __L01OOP__People__

#include <stdio.h>

class People{
   
private:
    int age;
    int sex;
    
public:
    People();
    People(int age,int sex);
    int getAge();
    int getSex();
    virtual void sayHello();
    virtual void eat()=0;
    void hi();
};
#endif /* defined(__L01OOP__People__) */