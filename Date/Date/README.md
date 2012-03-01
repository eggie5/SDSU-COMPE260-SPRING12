Discussion Section:

The Date class is a simple data structure. It has a default constructor, explicit constructor and a destructor. The explicit constructor uses the class invariant to validate input data. It has 3 members: day, month and year. Each member has a getter and setter method. Also implemented is the incrementMonth function with takes a number of monthes to increment the Date taking into account deltas > 12 adjusting the year respectively. e.g if you increment the date 3/2/87 12 monthes, it will return 3/2/88. Also implemented is the printDate function which prints to the output stream the current date.

Sample output:
//
//  main.cpp
//  Date
//
//  Created by Alex Egg on 2/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

```c++
#include <iostream>
#include "Date.h"
using namespace std;
int main (int argc, const char * argv[])
{

    Date *d=new Date();
    d->printDate();
    
    d->setDay(2);
    d->setMonth(3);
    d->setYear(1987);
    cout << *d <<endl;
    
    d->setMonth(13);
    
    d->incrementMonth(*d, 300); //my birthday
    cout << *d <<endl;
    

    
    d->incrementMonth(*d, 6);
    cout << *d << endl;
    d->incrementMonth(*d, 12);
    cout << *d << endl;
    d->incrementMonth(*d, 16);
    cout << *d << endl;
    return 0;
}
```


01-01-2000 // default constructor
03-02-1987 //after setting month/day/year using setter methods
*** Invalid initial values *** // after using settier method w/ 13
03-02-2012 //after incrementing month by 300
09-02-2012 // increment by 6
09-02-2013 // increment by 12
01-02-2015 // increment by 16