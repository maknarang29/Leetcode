# Intuition
The problem revolves around traversal of tree. We need to compute the maximum product of sum of two subtrees. 
<ol>
<li> Compute the Total Sum
<li> Compute sum of subtrees and 
</ol>

 
# Approach
We start by defining tot and prodmax variables. tot will store the sum of the complete tree whereas maxprod will store the maximum product.
```
long long tot;
long long prodmax;
```
The function ```long long TotalSum ``` is responsible for computing the totalsum and storing in the variable tot. It uses a recursive approach in which we start from the root, if the root is not null we add the root value and the subsequent left node and right node, If the left and right node contain subtrees, they inturn become root since we call TotalSum on these children. if the root is null we just return a 0 thus not affecting the TotalSum and ending the recursion once the whole tree is traversed
```
long long TotalSum(TreeNode* root){
    if (not root) return 0;
    long long leftsum = TotalSum(root->left);
    long long rightsum = TotalSum(root->right);
    return leftsum+rightsum+root->val;;
}

```


# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

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
long long tot;
long long prodmax;
long long TotalSum(TreeNode* root){
    if (not root) return 0;
    long long leftsum = TotalSum(root->left);
    long long rightsum = TotalSum(root->right);
    return leftsum+rightsum+root->val;;
}
long long currSum(TreeNode* root){
    if (not root) return 0;
    long long sub = root->val + currSum(root->left)+currSum(root->right);
    prodmax = max(prodmax, (tot-sub)*sub );
    return sub;
}
int maxProduct(TreeNode* root){
    tot = TotalSum(root);
    int modu = pow(10,9)+7;
    prodmax = 0;
    currSum(root);
    int answer = prodmax%modu;
    return answer;
}
};
```