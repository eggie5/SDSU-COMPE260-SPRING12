//
//  main.cpp
//  calculator
//
//  Created by Alex Egg on 1/19/12.
//  Copyright (c) 2012 All rights reserved.
//

#include <iostream>
using namespace std;

int main (int argc, const char * argv[])
{
    while(true)
    {
    int l;
    int r;
    string opperand;
        
    cout << "\nPlease enter first argument ";
    cin >> l;
    cout << "Please enter second argument ";
    cin >> r;
    cout << "Please enter opperand ";
    cin>>opperand;
    
    if(opperand.compare("+")==0)
    {
        cout << l+r;
    }
    else if(opperand.compare("-")==0)
    {
        cout << l-r;
    }
    else if(opperand.compare("*")==0)
    {
        cout << l*r;
    }
    else if(opperand.compare("/")==0)
    {
        cout << l/r;
    }
    else if(opperand.compare("%")==0)
    {
        cout << l%r;
    }
    else
    {
        cout << "unknown opperand";
    }
    }
    
    cout<<"\n";
        
    
    
    return 0;
}


//Sample Output
//Please enter first argument 2
//Please enter second argument 2
//Please enter opperand +
//4
//Please enter first argument 2
//Please enter second argument 3
//Please enter opperand -
//-1
//Please enter first argument 3
//Please enter second argument 4
//Please enter opperand *
//12
//Please enter first argument 10
//Please enter second argument 3
//Please enter opperand %
//1


//Discussion Section:
//
//This is a very simple program. It sits in an infinite loop waiting for user input of 3 variables. The first, second and arithmetic operand. It then passes the arithmetic operand though a series of string compares to determine which operation to preform on the first and second operands. If no match is found it falls to the else statement where an error is displayed. 
