Discussion Section:

The Staque class is simply a composition of two traditional stack ADTs: evens and odds. The stack for evens is a traditional LIFO stack while the odds stack is more of a queue using FIFO functionality. When and even number us push(ed) to the Staque it is directed to the evens stack ADT and when an odd number is push(ed) to the Staque it is directed to the odds stack.

The stack is a simple data structure implemented using doubly linked list. Namely each node in the list can go next or previous relative to itself.

```c++
#include <iostream>
#include "Staque.h"

int main (int argc, const char * argv[])
{

    Staque stack;
    

    stack.push(1);
    stack.push(3);
    stack.push(2);
    stack.push(4);
    stack.push(6);
    stack.push(8);
    stack.push(9);
    cout <<stack<<endl;
    
    stack.evens.remove();
    stack.evens.remove();
    stack.odds.remove();
    cout<<stack<<endl;
    
    
    stack.evens.remove();
    cout<<stack<<endl;
    
    stack.odds.remove();
    cout<<stack<<endl;
    
    stack.evens.remove();
    cout<<stack<<endl;
    
    return 0;
}
```
Sample Execution

```
8642139
4213
213
21
1
```