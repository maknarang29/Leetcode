#include <iostream>
#include "LinkedList.h"
#include "LLFuncs.cpp"
using namespace std;

Node* merge (Node* l1, Node* l2){
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;

    if (l1->val <= l2->val){
        l1->next = merge(l1->next,l2);
        return l1;
    }
    else{
        l2->next = merge(l1,l2->next);
        return l2;
    }
}



int main(){
    Node* l1 = new Node(1);
    addTail(l1,2);
    addTail(l1,4);
    
    Node* l2 = new Node(1);
    addTail(l2,3);
    addTail(l2,4);

    // traversalRec(l1);
    // cout<<endl;
    // traversalLoop(l2);

    traversalRec(merge(l1,l2));
    
}