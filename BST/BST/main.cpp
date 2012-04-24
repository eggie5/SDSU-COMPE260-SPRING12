
#include <iostream>
#include "BST.h"

using namespace std;

int main(int argc, const char * argv[])
{

    BST * tree=new BST();
    tree->add(5);
    tree->add(1);
    tree->add(8);
    tree->add(2);
    tree->add(3);
    tree->add(44);
    
    
    
    
    tree->in_order_print();
    cout <<endl;
    tree->pre_order_print();
    cout <<endl;
    tree->post_order_print();
}

