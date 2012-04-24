//
//  BST.h
//  BST
//
//  Created by Alex Egg on 4/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
#include "TreeNode.h"

#ifndef BST_BST_h
#define BST_BST_h



using namespace std;

class BST
{
public:
    BST();
    bool add(int value);
    void insert(int value, TreeNode * root, TreeNode * parent, bool was_left);
    void remove();
    TreeNode search(int value);
    
    
private: 
    TreeNode * root;
    
    int current_size;
    int mod_counter;
    
};


#endif
