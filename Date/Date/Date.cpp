//
//  Date.cpp
//  Date
//
//  Created by Alex Egg on 2/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Date.h"

using namespace std;

Date::Date() : day(12), month(1), year(2012)
{
}

//----- Definition of explicit-value  constructor -----

Date::Date(unsigned day, unsigned month, unsigned year)
{
    // Check class invariant
    if (day<31 && month < 12)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }
    else
        cerr << "*** Invalid initial values ***\n";
}

unsigned Date::getDay() const
{
    return this->day;
}

unsigned Date::getMonth() const
{
    return this->month;
}

unsigned Date::getYear() const
{
    return this->year;
}
