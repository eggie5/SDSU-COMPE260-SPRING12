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

bool BST::ddelete(int value)
{
    
    TreeNode * node = find(value, root);
    TreeNode * parent = remove(node, root);

    root=parent;
    current_size--;
    
    return true;
    
}

TreeNode * BST::find_from_root(int value) {
    return find(value, root);
    
}

TreeNode * BST::find(int value, TreeNode * n) {
    if (n == NULL)
        return NULL;
    
    if (value < n->item) {
        return find(value, n->Lchild); //go left
    }
    else if (value > n->item) {
        return find(value, n->Rchild); //go right
    }
    else
        return n; //found!
    
}



TreeNode * BST::remove(TreeNode * node_to_delete, TreeNode * start_node)
{
    if( start_node == NULL )
        return start_node;   // Item not found; do nothing
    
    if(node_to_delete->item < start_node->item )
        start_node->Lchild = remove( node_to_delete, start_node->Lchild );
    else if(node_to_delete->item > start_node->item )
        start_node->Rchild = remove( node_to_delete, start_node->Rchild );
    else if( start_node->Lchild != NULL && start_node->Rchild != NULL ) // Two children
    {
        start_node->item = findMin( start_node->Rchild )->item;
        start_node->Rchild = remove( start_node, start_node->Rchild );
    }
    else
        start_node = ( start_node->Lchild != NULL ) ? start_node->Lchild : start_node->Rchild;
    return start_node;
}

/**
 * Internal method to find the smallest item in a subtree.
 * @param t the node that roots the tree.
 * @return node containing the smallest item.
 */
TreeNode *  BST::findMin( TreeNode * t )
{
    if( t == NULL )
        return NULL;
    else if( t->Lchild == NULL )
        return t;
    return findMin( t->Lchild );
}

TreeNode BST::search(int value)
{
    TreeNode * tn = new TreeNode();
    return *tn;
}

//example how to traverse tree
void  BST::print(TreeNode * n) {
    if (n == NULL) {
        return;

    }
    print(n->Lchild);
    cout << n->item <<endl;
    print(n->Rchild);
}

void  BST::print() {
    print(root);
}

