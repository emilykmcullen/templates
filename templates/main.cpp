//
//  main.cpp
//  templates
//
//  Created by Emily Cullen on 29/04/2021.
//

#include <iostream>
#include "Accum.hpp"


int main(int argc, const char * argv[]) {
    
    Accum<int> integers(0);
    integers += 3;
    integers += 7;
    std::cout << integers.GetTotal() << std::endl;
    
    Accum<std::string> strings("");
    strings += "Hello ";
    strings += "world.";
    std::cout << strings.GetTotal() << std::endl;
    
    
    return 0;
}
