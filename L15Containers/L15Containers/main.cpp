//
//  main.cpp
//  L15Containers
//
//  Created by Dylan Yang on 5/5/15.
//  Copyright (c) 2015 Dylan Yang. All rights reserved.
//

#include <iostream>
#include <list>
#include <string>
#include <map>

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    std::list<std::string> l;
    l.push_back("Hello");
    l.push_back("jikexueyuan");
    
    for (std::list<std::string>::iterator it=l.begin(); it!=l.end(); it++) {
        std::cout<<*it<<"\n";
    }
    
    std::map<std::string, std::string> m;
    m.insert(std::pair<std::string, std::string>("hello","dylan"));
    std::cout<<m.at("hello")<<"\n";
    
    m["name"]="zhangsan";
    std::cout<<m["name"]<<"\n";
    return 0;
}
