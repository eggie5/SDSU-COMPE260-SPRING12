

#include <iostream>
#include "Chef.h"
#include "Waiter.h"

using namespace std;

int main (int argc, const char * argv[])
{


    Employee * owner = new Employee('O');
    owner->setSalary(15000); //+60% profit
    
    Employee * chef1=new Chef("Dog Meat");
    Employee * chef2=new Chef("Smoothies");

    

    Employee * w1=new Waiter(3, 1000);
    Employee * w2=new Waiter(5, 1500);
    Employee * w3=new Waiter(7, 1700);
    
    
    int month_profit=6000;
 
    
    
    cout <<"Owner's pay="<< owner->calculate_month_income(month_profit)<<endl;
    cout <<"Pay per chef="<<chef1->calculate_month_income(month_profit)<<endl;
    cout <<"Pay per waiter="<<w1->calculate_month_income(month_profit)<<endl;
    cout <<"Pay per waiter="<<w2->calculate_month_income(month_profit)<<endl;
    cout <<"Pay per waiter="<<w3->calculate_month_income(month_profit)<<endl;

    

    return 0;
}

