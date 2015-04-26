//
//  main.cpp
//  L12FunctionPointer
//
//  Created by Dylan Yang on 4/26/15.
//  Copyright (c) 2015 Dylan Yang. All rights reserved.
//

#include <iostream>
#include <thread>
#include <unistd.h>

class Object;

typedef void(Object::*SayHi)();
typedef void(Object:: *CallaterHandler)();

class Object{
    
public:
    SayHi sayHi;
};

class Hello:public Object{
    
public:
    Hello(){
        sayHi = (SayHi)(&Hello::HelloSayHi);
        (this->*sayHi)();
    }
    
    void HelloSayHi(){
        printf("Hello CPP\n");
    }
};

void threadFunc(Object *target,CallaterHandler handler,int delay){
    sleep(delay);
    (target->*handler)();
}

void callater(Object *target,CallaterHandler handler,int delay){
    std::thread t(threadFunc,target,handler,delay);
    t.join();
}

int main(int argc, const char * argv[]) {
    Hello *h = new Hello();
    delete h;
    //    // insert code here...
    //    std::cout << "Hello, World!\n";
    return 0;
}
