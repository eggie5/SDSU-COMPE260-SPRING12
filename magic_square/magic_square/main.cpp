//
//  main.cpp
//  magic_square
//
//  Created by Alex Egg on 2/10/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, const char * argv[])
{
    int n=5;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            int val=n*((i+j-1+(int)floor(n>>2))%n) + ((i+2*j-2)%n)+1;
            
            cout << val <<" ";
            if(j%n==0) //newline
                cout <<""<<endl;
        }
    }
    return 0;
}

//this method uses a form equation of the magic square algorithm. The equation takes 3 arguments i, j and n which
//are row and coloum index and magic square order respectively. Although the code will have O(n^2) growth rate
//in reality it will be closer to O(1) since it is known that n will be small for all cases and that the only code
//is a simple math equation.

