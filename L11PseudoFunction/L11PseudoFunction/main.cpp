//
//  main.cpp
//  L11PseudoFunction
//
//  Created by Dylan Yang on 4/25/15.
//  Copyright (c) 2015 Dylan Yang. All rights reserved.
//

#include <iostream>

void hello(std::string str){
    std::cout<<str<<"\n";
}

void hello(){
    printf("hello\n");
}

class Hello{
    
public:
    void operator()(){
        printf("Hello CPP\n");
    }
};

int main(int argc, const char * argv[]) {
    Hello h;
    h();
    hello("hello str");
    hello();
    return 0;
}
