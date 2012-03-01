//
//  Date.h
//  Date
//
//  Created by Alex Egg on 2/24/12.
//  Copyright (c) 2012 . All rights reserved.
//
#include <iostream>

using namespace std;

#ifndef Date_Date_h
#define Date_Date_h

class Date
{
private:
    unsigned day, month, year;
    void setDate(unsigned day, unsigned month, unsigned year);
    
public:
    Date();
    Date(unsigned day, unsigned month, unsigned year);
    ~Date();
    
    unsigned getDay() const;
    unsigned getMonth() const;
    unsigned getYear() const;
    
    void setDay(unsigned day);
    void setMonth(unsigned month);
    void setYear(unsigned year);
    
    
    void incrementMonth(Date &, int);
    
    void display(ostream & out) const;
    void printDate() const;
    
};

 ostream & operator<<(ostream & out, const Date & d);

#endif

