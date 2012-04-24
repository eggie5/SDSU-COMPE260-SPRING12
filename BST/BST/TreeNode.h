//
//  TreeNode.h
//  BST
//
//  Created by Alex Egg on 4/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//


#ifndef BST_TreeNode_h
#define BST_TreeNode_h

using namespace std;

class TreeNode {
    friend class BST;
public:
    TreeNode()
    {
        Lchild = Rchild = NULL;
    };  //default constructor
    TreeNode(int i)
    {
        item=i;
        Lchild = Rchild = NULL;
        
    }
    int getItem () const
    {
        return item;
    }; // accessor function
    
private:
    int item;
    TreeNode *Lchild;
    TreeNode *Rchild;
    
};



//TreeNode::TreeNode(int i, TreeNode *L = 0, TreeNode *R = 0) : item(i), Lchild(L), Rchild(R)
//{}



#endif
