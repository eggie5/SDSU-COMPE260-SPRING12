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
    bool ddelete(int value);
    TreeNode search(int value);
    bool contains(int value);
    TreeNode * find_from_root(int value);
    int size();
    void in_order_print(TreeNode * node);
    void in_order_print();
    void pre_order_print(TreeNode * n);
    void pre_order_print();
    void post_order_print(TreeNode * n);
    void post_order_print();

   
    
    
private: 
    TreeNode * root;
    TreeNode * find(int value, TreeNode * n);
    void inOrderFillArray(TreeNode * tn);
    int current_size;
    int mod_counter;
    TreeNode * remove(TreeNode * node_to_delete, TreeNode * start_node);
    TreeNode *  findMin( TreeNode * t );
    
};


#endif
