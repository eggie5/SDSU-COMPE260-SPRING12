#include <new>
#include "LStack.h"
using namespace std;


#import "Staque.h"

Staque::Staque()
{
    odds.is_LIFO=0;
}


StaqueElement Staque::pop()
{
    if(!evens.empty())
    {
        return evens.pop();
    }
    else if(!odds.empty())
    {
        return odds.pop();
    }
    else
    {
        cerr<< "Staque is empty"<<endl;
        return -9999999;
    }
}

void Staque::push(const StaqueElement & value)
{
    if(value%2==0)//even
    {
        evens.push(value);
    }
    else //odd
    {
        odds.push(value);
    }
}


ostream & operator<<(ostream & out, const Staque & s)
{
    s.evens.display(out);
    s.odds.display(out);
    return out;
}

