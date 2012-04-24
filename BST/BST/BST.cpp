//
//  BST.cpp
//  BST
//
//  Created by Alex Egg on 4/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//



#include <iostream>
#include "BST.h"


using namespace std;



BST::BST()
{
    root = 0;
    current_size = 0;
}


bool BST::add(int value)
{
    if (root == 0)
        root = new TreeNode(value);
    else
        insert(value, root, NULL, false);

    current_size++;
    mod_counter++;
    return true;
}

void BST::insert(int value, TreeNode * n, TreeNode *parent, bool was_left)
{
    if (n == NULL) { // if you reached the end of a branch (at a leaf) - insert here
        if (was_left)
            parent->Lchild = new TreeNode(value);
        else
            parent->Rchild = new TreeNode(value);
    }
    else if (value < root->item)
        insert(value, n->Lchild, n, true); //go down tree to the left
    else
        insert(value, n->Rchild, n, false); // go down right
}

void BST::remove()
{
    
}

TreeNode BST::search(int value)
{
    TreeNode * tn = new TreeNode();
    return *tn;
}

