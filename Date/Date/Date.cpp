//
//  Date.cpp
//  Date
//
//  Created by Alex Egg on 2/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "Date.h"

using namespace std;

Date::Date() : day(1), month(1), year(2000)
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

void Date::setDay(unsigned day)
{
    this->day=day;
}

void Date::setMonth(unsigned month)
{
    this->month=month;
}
void Date::setYear(unsigned year)
{
    this->year=year;
}

void Date::incrementMonth(Date & d, int delta)
{
    
}

ostream & operator<<(ostream & out, const Date & d)
{
    d.display(out);
    return out;
}

void Date::display(ostream & out) const
{
    out <<  setfill ('0') << setw (2)<< this->month << "-" 
        <<setfill ('0') << setw (2)<<this->day <<"-"
        <<this->year ;
}

void Date::printDate() const
{
    cout <<  setfill ('0') << setw (2)<< this->month << "-" 
    <<setfill ('0') << setw (2)<<this->day <<"-"
    <<this->year ;
}

