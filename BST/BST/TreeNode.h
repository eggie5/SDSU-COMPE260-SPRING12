//
//  TreeNode.h
//  BST
//
//  Created by Alex Egg on 4/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef BST_TreeNode_h
#define BST_TreeNode_h

Class TreeNode {
    Friend class BST;
Public:
    TreeNode();  //default constructor
    TreeNode(int i, TreeNode* L = 0; TreeNode* R = 0); //explicit value constructor
    int getItem () const; // accessor function
    
private:
    int item;
    TreeNode *Lchild;
    TreeNode *Rchild;
    
};

TreeNode::TreeNode()
{
    Lchild = Rchild = NULL;
}

TreeNode::TreeNode(int i, TreeNode *L = 0, TreeNode *R = 0) : item(i), Lchild(L), Rchild(R)
{}

int TreeNode::getItem() const
{ return item;}

#endif
