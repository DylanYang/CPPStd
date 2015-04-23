//
//  main.cpp
//  L04CMethod
//
//  Created by Dylan Yang on 4/23/15.
//  Copyright (c) 2015 Dylan Yang. All rights reserved.
//

#include <iostream>

class Object{
    
public:
    Object(){
        printf("Create Object\n");
    };
    
    ~Object(){
        printf("Delete Object\n");
    }
};

void runObject(){
//    {
        Object obj;
//    }
    printf("runObject end\n");
}

int main(int argc, const char * argv[]) {
//    Object *obj = new Object();
//    delete obj;
//    Object obj;
    runObject();
    printf("end\n");
    return 0;
}
