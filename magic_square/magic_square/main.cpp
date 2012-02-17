/*
 Email from instructor:
 
 
 Delivered-To: eggie5@gmail.com
 Received: Fri, 10 Feb 2012 22:52:04 -0800 (PST)
 Return-Path: <msarkar2@mail.sdsu.edu>
 
 Date: Fri, 10 Feb 2012 22:52:00 -0800
 To: Alex Egg <eggie5@gmail.com>
 
 Yes
 
 On Feb 10, 2012, at 4:19 PM, Alex Egg <eggie5@gmail.com> wrote:
 
 > Hello,
 >
 > I am confused about the instructions for lab 2. The lab is to display a
 magic square and you provide an algorithm. May we implement the magic square
 algorithm any way we want?
 >
 > Thanks,
 > Alex
 */

//
//  main.cpp
//  magic_square
//
//  Created by Alex Egg on 2/10/12.
// 
//

#include <iostream>
#include <math.h> //need for floor function

using namespace std;

int main (int argc, const char * argv[])
{
    while(true)
    {
        int n;
        cout << "\nOrder: ";
        cin >> n;
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                int val=n*((i+j-1+(int)floor(n>>2))%n) + ((i+2*j-2)%n)+1;
                
                cout << val <<" ";
                if(j%n==0) //newline
                    cout <<""<<endl;
            }
        }
    }
    return 0;
}

/*
 ====================
Discussion Section:
 
This method uses a closed form equation of the magic square algorithm. 
The equation takes 3 arguments i, j and n which are row and column
index and magic square order respectively. Although the code 
will have O(n^2) growth rate in reality it will be closer to the lower bound
of O(n^2) and demonstrate o(1) runtime. Since it is known that n will be small
for all cases and that the only code is a simple math equation. This method
is far superiour to the instructors provided alorithm as it is simpler code
, less code and has a faster runtime.
 
=========================
*/
