//
//  main.cpp
//  lab4-Staque
//
//  Created by Alex Egg on 3/10/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Staque.h"

int main (int argc, const char * argv[])
{

    Staque stack;
    

    stack.push(1);
    stack.push(3);
    stack.push(2);
    stack.push(4);
    stack.push(6);
    stack.push(8);
    stack.push(9);
    
    cout <<stack<<endl;
    
    stack.evens.remove();
    stack.evens.remove();
    stack.odds.remove();
    
    cout<<stack<<endl;
    

    
    
    
    return 0;
}

