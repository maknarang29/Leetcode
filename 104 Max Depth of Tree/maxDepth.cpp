#include <iostream>
#include "Tree.h"
using namespace std;

int maxDepth(TreeNode* root){
    if (!root) return 0;
    else return max(maxDepth(root->left),maxDepth(root->right))+1;
}

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);
//   root->right->right->left = new TreeNode(6);

    cout<<maxDepth(root);


}