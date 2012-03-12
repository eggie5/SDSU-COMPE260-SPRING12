//--- LStack.cpp -------------------------------------------------
 
#include <new>
using namespace std;

#include "LStack.h"

//--- Definition of Stack constructor
Stack::Stack()
: myTop(0), is_LIFO(1), currentSize(0)
{

}

//--- Definition of Stack copy constructor
Stack::Stack(const Stack & original)
{
   myTop = 0;
   if (!original.empty())
   {
      // Copy first node
      myTop = new Stack::Node(original.top());

      // Set pointers to run through the stacksÕ linked lists
      Stack::NodePointer lastPtr = myTop,
                         origPtr = original.myTop->next;

      while (origPtr != 0)
      {
         lastPtr->next = new Stack::Node(origPtr->data);
         lastPtr = lastPtr->next;
         origPtr = origPtr->next;
      }
   }
}

//--- Definition of Stack destructor
Stack::~Stack()
{     
   // Set pointers to run through the stack
   Stack::NodePointer currPtr = myTop,  // node to be deallocated
                      nextPtr;          // its successor
   while (currPtr != 0)
   {
      nextPtr = currPtr->next;
      delete currPtr;
      currPtr = nextPtr;
   }
}

//--- Definition of assignment operator
const Stack & Stack::operator=(const Stack & rightHandSide)
{
   if (this != &rightHandSide)         // check that not st = st
   {
      this->~Stack();                  // destroy current linked list
      if (rightHandSide.empty())       // empty stack
         myTop = 0;
      else
      {                                // copy rightHandSide's list
         // Copy first node
         myTop = new Stack::Node(rightHandSide.top());

         // Set pointers to run through the stacks' linked lists
         Stack::NodePointer lastPtr = myTop,
                            rhsPtr = rightHandSide.myTop->next;

         while (rhsPtr != 0)
         {
            lastPtr->next = new Stack::Node(rhsPtr->data);
            lastPtr = lastPtr->next;
            rhsPtr = rhsPtr->next;
         } 
      }
   }
   return *this;
}

//--- Definition of empty()
bool Stack::empty() const
{ 
   return (myTop == 0); 
}

//--- Definition of push()
void Stack::push(const StackElement & value)
{
    if(is_LIFO)
    {
        myTop = new Stack::Node(value, myTop);
    }
    else //FIFO
    {
        if(currentSize==0)
        {
           Stack::Node * newNode= new Stack::Node(value, myTop);
            tail=myTop=newNode;
        }
        else
        {
            Stack::Node * newNode= new Stack::Node(value, 0);
            newNode->previous=tail;
            tail->next=newNode;
            
            tail=newNode;
            
        }
    }
    
    currentSize++;
}

//--- Definition of display()
void Stack::display(ostream & out) const
{
   Stack::NodePointer ptr;
   for (ptr = myTop; ptr != 0; ptr = ptr->next)
      out << ptr->data << endl;
}


StackElement Stack::pop()
{
    if(!empty())
    {
        StackElement temp = this->top();
        this->remove();
        return temp;
       
    }
    else
    {
        cerr << "*** Stack is empty "
        " -- returning garbage ***\n";
        StackElement * temp = new(StackElement);  
        StackElement garbage = *temp;     // "Garbage" value
        delete temp;
        return garbage;
    }
}

//--- Definition of top()
StackElement Stack::top() const
{
   if (!empty())
      return (myTop->data);
   else
   {
      cerr << "*** Stack is empty "
              " -- returning garbage ***\n";
      StackElement * temp = new(StackElement);  
      StackElement garbage = *temp;     // "Garbage" value
      delete temp;
      return garbage;
   }
}

//--- Definition of pop()
void Stack::remove()
{
   if (!empty())
   {
       if(is_LIFO)
       {
           Stack::NodePointer ptr = myTop;
           myTop = myTop->next;
           delete ptr;
           currentSize--;
       }
       else
       {
           Stack::NodePointer temp=tail;
           tail=tail->previous;
           if(tail!=NULL)
               tail->next=NULL;
           delete temp;
           currentSize--;
       }
     
   }   
   else
      cerr << "*** Stack is empty -- can't remove a value ***\n";
}

ostream & operator<<(ostream & out, const Stack & s)
{
    s.display(out);
    return out;
}
