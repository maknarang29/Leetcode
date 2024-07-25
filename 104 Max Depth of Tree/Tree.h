#include<iostream>
#pragma once



class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    // Val is the key or the value that
    // has to be added to the data part
    
    TreeNode (int val)
    {
        data = val;
        // Left and right child for node
        // will be initialized to null
        left = NULL;
        right = NULL;
    }
};
