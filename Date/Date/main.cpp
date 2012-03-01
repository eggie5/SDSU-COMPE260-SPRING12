//
//  main.cpp
//  Date
//
//  Created by Alex Egg on 2/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

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

