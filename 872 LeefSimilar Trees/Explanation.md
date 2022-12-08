# Intuition
Upon reading the problem it seems like a simple traversal problem. We traverse the tree and add the leaf nodes in a lists, compare them and output the result
# Approach
```
bool leafSimilar(TreeNode* root1, TreeNode* root2){
    vector <int> tree1;
    vector <int> tree2;
    traverse(root1,tree1);
    traverse(root2,tree2);
    return (tree1 == tree2);
};

```
The function <b>leafSimilar</b> is the block of the code responsible for the implementation of the job and returning the output on comparison
First we initiate two vectors, <b>tree1</b> and <b>tree2</b> for storing lists
<b>traverse</b> function appropriately traverses the roots[Tree] and fills up the vectors.
```
void traverse(TreeNode* root, vector<int>& tree){
            if (root){ 
                if (root->left==NULL && root->right==NULL) tree.push_back(root->val);
                traverse(root->left, tree);
                traverse(root->right,tree);
            }
        }
```
<b>traverse</b> function as the name suggests is responsible for traversing the tree, reaching the leaf node and adding it into the subsequent vector. The approach is to check for a root (if exists) we move to the child node, If the child node doesn't have any more children thus making it leaf node ```if (root->left==NULL && root->right==NULL) ``` we add it to the vector ```tree.push_back(root->val) ``` . Further we traverse the tree on the left and the right side using <b><i>Recursion</i></b>. This is post traversal method in tree traversal.

# Code
```
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

        bool leafSimilar(TreeNode* root1, TreeNode* root2){
            vector <int> tree1;
            vector <int> tree2;
            traverse(root1,tree1);
            traverse(root2,tree2);
            return (tree1 == tree2);
        };
        void traverse(TreeNode* root, vector<int>& tree){
            if (root){ 
                if (root->left==NULL && root->right==NULL) tree.push_back(root->val);
                traverse(root->left, tree);
                traverse(root->right,tree);
            }
        }
};
```
