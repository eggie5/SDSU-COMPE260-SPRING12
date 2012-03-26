Discussion Section:

This lab consists of a simple composition of 3 Classes. First there is the base class Employee and from there we derive 2 child classes: Chef and Waiter. The Base class defines 2 members class and salary which the two child classes inherit. Also the base class exposes a function to calculate the salary for a given employee. For example an owner type gets 15000 base salary + 60% of profit, Chef: 10000 base + 20% profit and a Waiter 3000 base + tips. Each implementation of employee overrides the calculate salary routine via polymorphism.  

In the database implementation a set of 6 Employee types are created and added to a list type Employee. This list is then iterated and the respective paycheck of each employee is outputted for a $6000 profit month.

```c++

#include <iostream>
#include "Chef.h"
#include "Waiter.h"
#include <list>

using namespace std;

int main (int argc, const char * argv[])
{
    int month_profit=6000;

    //build database
    list<Employee*> empList;
    
    Employee * owner = new Employee('O');
    owner->setSalary(15000);
    
    empList.push_back(owner);
    empList.push_back(new Chef("Dog Meat")); 
    empList.push_back(new Chef("Smoothies")); 
    empList.push_back(new Waiter(3, 1000)); 
    empList.push_back(new Waiter(5, 1500));
    empList.push_back(new Waiter(7, 1700));
    
    Employee * ptr;
    for (list<Employee*>::iterator it = empList.begin();
         it!= empList.end(); it++)
    {
        ptr = *it;
        cout << ptr->calculate_month_income(month_profit) << endl;
    }

    return 0;
}
```
Sample Execution

```
18600
11200
11200
4000
4500
4700
```