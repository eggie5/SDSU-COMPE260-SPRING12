//
//  main.cpp
//  BST
//
//  Created by Alex Egg on 4/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "BST.h"

using namespace std;

int main(int argc, const char * argv[])
{

    BST * tree=new BST();
    tree->add(5);
    tree->add(1);
    tree->add(8);
    cout << "Hi"<<endl;
}

