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
            int val=n*((i+j-1+(int)floor(n/2))%n) + ((i+2*j-2)%n)+1;
            
            cout << val <<" ";
            if(j%n==0) //newline
                cout <<""<<endl;
        }
    }
    return 0;
}

