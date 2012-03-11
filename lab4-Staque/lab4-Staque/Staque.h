#include <iostream>
#include "LStack.h"

using namespace std;

#ifndef LSTAQUE
#define LSTAQUE

typedef int StaqueElement;

class Staque
{
public:

    Staque();
    void push(const StaqueElement & value);
    StaqueElement pop();
    Stack evens;
    Stack odds;
private:
    
    
    
}; // end of class declaration

ostream & operator<<(ostream & out, const Staque & s);

#endif
