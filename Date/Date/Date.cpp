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

Date::~Date()
{
    
    
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

void Date::setDate(unsigned day, unsigned month, unsigned year)
{
    if (day<31 && month < 12)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }
    else
        cerr << "*** Invalid initial values ***\n";

}

void Date::setDay(unsigned day)
{
    this->setDate(day, this->month, this->year);
}

void Date::setMonth(unsigned month)
{
    this->setDate(this->day, month, this->year);
}
void Date::setYear(unsigned year)
{
    this->setDate(this->day, this->month, year);
}

void Date::incrementMonth(Date & d, int delta)
{

    unsigned year=(month+delta)/12;
    this->year+=year;
    
    
    this->month = (month+delta)%12;
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
    <<this->year <<endl;
}

