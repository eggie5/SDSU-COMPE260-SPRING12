


#ifndef Lab5_Employee_Employee_h
#define Lab5_Employee_Employee_h

using namespace std;

class Employee {

    
public:
    Employee()
    {

    }
    
    Employee(char type)
    {
        this->_class=type;
    }
    
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
    
    void setSalary(int salary)
    {
        this->salary=salary;
    }
    
    virtual int calculate_month_income(int income_for_month)
    {
        return this->salary+(income_for_month*.6);
    }
    
    
protected:
    int salary;
    char _class;
private:
	string name;
    int id;
    

};


#endif
