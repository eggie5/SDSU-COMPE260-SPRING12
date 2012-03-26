
#include "Employee.h"
#ifndef Lab5_Employee_Waiter_h
#define Lab5_Employee_Waiter_h

using namespace std;

class Waiter:public Employee 
{
public:
    Waiter();
    Waiter(int years_of_service, int tips);
    
    
    
    int getYearsOfService() const
    {
        return this->years_of_service;
    }
    
    void setYearsOfService(int years_of_service)
    {
        this->years_of_service=years_of_service;
    }
    
    
    int calculate_month_income(int income_for_month)
    {
        return this->salary + this->tips;
    }
    
private:
    int years_of_service;
    int tips;
    
    
};

Waiter::Waiter():Employee()
{
    this->years_of_service=0;
    this->salary=3000;
}

Waiter::Waiter(int years_of_service, int tips):Employee()
{
    this->years_of_service=years_of_service;
    this->salary=3000;
    this->_class='W';
    this->tips=tips;
}

#endif
