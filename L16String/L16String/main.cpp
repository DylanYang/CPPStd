//
//  main.cpp
//  L16String
//
//  Created by Dylan Yang on 5/5/15.
//  Copyright (c) 2015 Dylan Yang. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace::std;

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    string str;
    str+="Hello ";
    str+="World";
    std::cout<<str<<"\n";
    
    stringstream ss;
    ss<<"Hello ";
    ss<<200;
    ss<<" ";
    ss<<2.5;
    ss<<" Hello "<<"jikexueyuan "<<10000;
    cout<<ss.str()<<"\n";
    return 0;
}
