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

//vector<int> rightSideView(TreeNode* root) {
//            
//}

void traversal(TreeNode* root){
    while(root){
        cout<<root->val;
        traversal(root->right);
    }
}

int main(){
    TreeNode tr = new TreeNode(1);
    tr->right = TreeNode(3);
    tr->left = TreeNode(2);
    tr->right->right = TreeNode(4);
    tr->left->right = TreeNode(5);
    traversal(tr);

}

