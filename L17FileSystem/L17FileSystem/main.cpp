//
//  main.cpp
//  L17FileSystem
//
//  Created by Dylan Yang on 5/5/15.
//  Copyright (c) 2015 Dylan Yang. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
//    ofstream of("data.txt");
//    of<<"Hello CPP\n";
//    of.close();
    ifstream inf("data.txt");
//    char c;
//    inf>>c;
    
    stringbuf sb;
    inf>>&sb;
    
    cout<<sb.str()<<"\n";
    return 0;
}
