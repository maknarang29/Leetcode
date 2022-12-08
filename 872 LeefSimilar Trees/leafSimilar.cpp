#include <iostream>
#include <vector>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution{
    public:
        bool leafSimilar(TreeNode* root1, TreeNode* root2){
            vector <int> tree1;
            vector <int> tree2;
            traverse(root1,tree1);
            traverse(root2,tree2);
            return (tree1==tree2);
        };
        void traverse(TreeNode* root, vector<int> tree){
            if (root){
            if (root->left==NULL && root->right==NULL) tree.push_back(root->val);
            traverse(root->left,tree);
            traverse(root->right,tree);
            }
        }
};