#include <iostream>
#include <vector>
using namespace std;


struct Node {
     int val;
     Node *left;
     Node *right;
     Node() : val(0), left(nullptr), right(nullptr) {}
     Node(int x) : val(x), left(nullptr), right(nullptr) {}
     Node(int x, Node *left, Node *right) : val(x), left(left), right(right) {}
};


void invertTree(Node* root){
    
    if (!root) return;
    else{
    invertTree(root->left);
    invertTree(root->right);

    Node* temp = root->left;
    root->left = root->right;
    root->right = temp;
    
    }
}
void printPreorder(Node* node){
    if (!node) return;
    cout<<node->val<<" ";
    printPreorder(node->left);
    printPreorder(node->right);
}

int main(){
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(1);
    root->left->right= new Node(3);
    root->right->left = new Node(6);
    root->right->right= new Node(9);





    printPreorder(root);
    cout<<endl;

    invertTree(root);
    
    printPreorder(root);

}


