//
//  main.cpp
//  L09Overload
//
//  Created by Dylan Yang on 4/24/15.
//  Copyright (c) 2015 Dylan Yang. All rights reserved.
//

#include <iostream>

class Hello{
public:
    void sayHello(){
        printf("Hello jikexueyuan\n");
    }
    
//    void sayHello(char *name){
//        printf("Hello %s\n",name);
//    }
    
    void sayHello(std::string name){
        std::string str="hello ";
        str += name;
        std::cout<<str<<"\n";
    }
};

int main(int argc, const char * argv[]) {
    Hello *h = new Hello();
    
//    std::string name = "sss";
//    h->sayHello((char*)name.c_str());
    
    h->sayHello("zhangsan");
    return 0;
}
