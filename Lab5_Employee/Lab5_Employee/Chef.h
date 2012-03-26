
#include "Employee.h"

#ifndef Lab5_Employee_Chef_h
#define Lab5_Employee_Chef_h

using namespace std;

class Chef:public Employee 
{
public:
    Chef(string expertise);


    
    string getExpertise() const
    {
        return this->expertise;
    }
    
    void setExpertise(string expertise)
    {
        this->expertise=expertise;
    }
    
    int calculate_month_income(int income_for_month)
    {
        return this->salary+(income_for_month*.2);
    }    
    
private:
    string expertise;
    

};

Chef::Chef(string expertise):Employee()
{
    this->expertise=expertise;
    this->salary=10000;
    this->_class='C';
}


#endif
