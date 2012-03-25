//
//  main.cpp
//  Lab5_Employee
//
//  Created by Alex Egg on 3/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Chef.h"

int main (int argc, const char * argv[])
{


    Employee * e=new Employee("alex", 3, 'C', 34233);
    std::cout <<  e->getSalary()<<endl;
    
    Employee * chef=new Chef();
    chef->getSalary();
    

    return 0;
}

