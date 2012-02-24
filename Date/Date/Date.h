//
//  Date.h
//  Date
//
//  Created by Alex Egg on 2/24/12.
//  Copyright (c) 2012 . All rights reserved.
//

#ifndef Date_Date_h
#define Date_Date_h

class Date
{
private:
    unsigned day, month, year;
    
public:
    Date();
    Date(unsigned day, unsigned month, unsigned year);
    
    unsigned getDay() const;
    unsigned getMonth() const;
    unsigned getYear() const;
    
    void setDay();
    void setMonth();
    void setYear();
    void setDate();
    
    void incrementMonth(Date &, int);
    
    void printDate();
    
};

#endif
