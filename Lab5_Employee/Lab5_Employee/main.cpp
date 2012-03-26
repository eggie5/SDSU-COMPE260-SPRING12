
#include <iostream>
#include "Chef.h"
#include "Waiter.h"
#include <list>

using namespace std;

int main (int argc, const char * argv[])
{

    
    int month_profit=6000;


    
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

//output
//$ ./a.out 
//18600
//11200
//11200
//4000
//4500
//4700