//
//  Employee.h
//  Lab5_Employee
//
//  Created by Alex Egg on 3/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Lab5_Employee_Employee_h
#define Lab5_Employee_Employee_h

using namespace std;

class Employee {
    string name;
    int id;
    char _class;
    int salary;
    
public:
    Employee();
    Employee(string name, int id, char _class, int salary)
    {
        this->name=name;
        this->id=id;
        this->_class=_class;
        this->salary=salary;
    }
    
    int getSalary()
    {
        return salary;
    }
};


#endif
