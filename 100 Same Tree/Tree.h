#include<iostream>
#pragma once



class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    // Val is the key or the value that
    // has to be added to the data part
    
    TreeNode (int num)
    {
        val = num;
        // Left and right child for node
        // will be initialized to null
        left = NULL;
        right = NULL;
    }
};
