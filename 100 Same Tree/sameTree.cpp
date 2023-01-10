#include <iostream>
#include <vector>
using namespace std;


struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode  left, TreeNode  right) : val(x), left(left), right(right) {}
};


vector<bool> ans;
bool traversal(TreeNode *p, TreeNode *q){
    
    //if (p && q) return (p->val == q->val) ;
    if (!p && !q) return true;
    if (!p || !q) return false;
    return ((p->val == q->val) && traversal(p->left,q->left) && traversal(p->right,q->right));
    }
 int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    // root->right = new TreeNode(3);
    // root->right->left = new TreeNode(4);
    // root->right->right = new TreeNode(5);

    TreeNode* root2 = new TreeNode(1);
//    root2->left = new TreeNode(2);
    root2->right = new TreeNode(2);
    // root2->right->left = new TreeNode(4);
    // root2->right->right = new TreeNode(5);


    cout<< traversal(root,root2);
    //for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    //cout<<a.size();
 }