**Discussion Section:**

A binary search tree (BST), which may sometimes also be called an ordered or sorted binary tree, is a node-based binary tree data structure which has the following properties:

* The left subtree of a node contains only nodes with keys less than the node's key.
* The right subtree of a node contains only nodes with keys greater than the node's key.
* Both the left and right subtrees must also be binary search trees.

All operations on BST have average O(logn) growth.

This is an implementation of a binary search tree. Each node is linked to each other by a left and right child member. Nodes are inserted in a sorted order following this algorithm: Starting at root if new node < node go down to left child else go to right child and repeat this recursively until the end of the branch is reached. Insertion time is O(logn). Removal algorithm follows this algorithm: 

* Deleting a leaf (node with no children): Deleting a leaf is easy, as we can simply remove it from the tree. 
* Deleting a node with one child: Remove the node and replace it with its child.
*  Deleting a node with two children: Call the node to be deleted N. Do not delete N. Instead, choose either its in-order successor node or its in-order predecessor node, R. Replace the value of N with the value of R, then delete R.

The main advantage of the BST ADT is that it has O(logn) search time!

```C
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
```

**Sample Execution:**

```
$./BST.o
3
2
1
5
8
44

5
1
2
3
8
44

3
2
1
44
8
5
```