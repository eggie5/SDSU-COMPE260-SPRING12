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
        cout << "\nOrder (must be odd): ";
        
        //input sanitization
        cin >> n;
        if(n%2==0 || cin.fail())
        {
            cin.clear(); // reset the state bits back to goodbit so we can use ignore()
            cin.ignore(1000, '\n');
            continue;      
        }
        
        
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


/* Example Execution
 
 $ g++ main.cpp 
 eggie5@Alexs-MacBook-Air magic_square]$ ./a.out 
 
 Order (must be odd): 1
 1 
 
 Order (must be odd): 3
 5 7 3 
 9 2 4 
 1 6 8 
 
 Order (must be odd): 5
 12 19 21 3 10 
 18 25 2 9 11 
 24 1 8 15 17 
 5 7 14 16 23 
 6 13 20 22 4 
 
 Order (must be odd): 9
 29 40 51 62 64 75 5 16 27 
 39 50 61 72 74 4 15 26 28 
 49 60 71 73 3 14 25 36 38 
 59 70 81 2 13 24 35 37 48 
 69 80 1 12 23 34 45 47 58 
 79 9 11 22 33 44 46 57 68 
 8 10 21 32 43 54 56 67 78 
 18 20 31 42 53 55 66 77 7 
 19 30 41 52 63 65 76 6 17 
 
 Order (must be odd): 2
 
 Order (must be odd): 4
 
 Order (must be odd): a
 
 Order (must be odd): asdf
 
 */
