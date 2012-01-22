//
//  main.cpp
//  calculator
//
//  Created by Alex Egg on 1/19/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
//using namespace std;

int main (int argc, const char * argv[])
{

    int l;
    int r;
    std::string opperand;
    std::cout << "Please enter first argument ";
    std::cin >> l;
    std::cout << "Please enter second argument ";
    std::cin >> r;
    std::cout << "Please enter opperand ";
    std::cin>>opperand;
    
    if(opperand.compare("+")==0)
    {
        std::cout << l+r;
    }
    else if(opperand.compare("-")==0)
    {
        std::cout << l-r;
    }
    else if(opperand.compare("*")==0)
    {
        std::cout << l*r;
    }
    else if(opperand.compare("/")==0)
    {
        std::cout << l/r;
    }
    else if(opperand.compare("%%")==0)
    {
        std::cout << l%r;
    }
    else
    {
        std::cout << "unknown opperand";
    }
        
    
    
    return 0;
}

