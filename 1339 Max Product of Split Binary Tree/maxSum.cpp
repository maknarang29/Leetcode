#include <iostream>
#include <cmath>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};



long long tot;
long long STsum;
long long TotalSum(TreeNode* root){
    if (not root) return 0;
    long long leftsum = TotalSum(root->left);
    long long rightsum = TotalSum(root->right);
    return leftsum+rightsum+root->val;;
}
long long currSum(TreeNode* root){
    if (not root) return 0;
    long long sub = root->val + currSum(root->left)+currSum(root->right);
    STsum = max(STsum, (tot-sub)*sub );
    return sub;
}
int maxProduct(TreeNode* root){
    tot = TotalSum(root);
    int modu = pow(10,9)+7;
    STsum = 0;
    currSum(root);
    int answer = STsum%modu;
    return answer;
}


int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    cout<<maxProduct(root);
}