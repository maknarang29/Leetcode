#include <iostream>
#include <vector>

using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    // Val is the key or the value that
    // has to be added to the data part
    
    TreeNode (int x)
    {
        val = x;
        // Left and right child for node
        // will be initialized to null
        left = NULL;
        right = NULL;
    }
};
  
vector<int> preorderTraversal(TreeNode* root){
    vector<int> tr;
    if (root) {
    tr.push_back(root->val);
    preorderTraversal(root->left);
    preorderTraversal(root->right);}
    return tr;
}
int main(){
TreeNode* root = new TreeNode(1);
    // root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    // root->right->right = new TreeNode(5);
    vector<int> ar;
    ar = preorderTraversal(root);
    for (int i=0;i<ar.size();i++) cout<<ar[i]<<" ";
}