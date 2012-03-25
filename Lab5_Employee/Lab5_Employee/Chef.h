//
//  Chef.h
//  Lab5_Employee
//
//  Created by Alex Egg on 3/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
#include "Employee.h"

#ifndef Lab5_Employee_Chef_h
#define Lab5_Employee_Chef_h

using namespace std;

class Chef:public Employee {
    string bests_dish;
    
public:
    Chef():Employee()
    {
        
    }
    string getBestDish();
};

#endif
