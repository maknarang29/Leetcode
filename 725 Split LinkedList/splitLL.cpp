#include <iostream>
#include <cstdlib>
#include <vector>
#include "LinkedList.h"
#include "LLFuncs.cpp"


vector<Node*> splitListToParts(Node* head, int k) {
    vector<Node*> vec(k,NULL);
    int size = 0;
    for (Node* node = head; node; node = node->next)    size++;
    int step = size/k, extra = size%k ;
    Node* node = head, *prev = NULL;
    for (int i = 0;node && i<k;i++,extra--){
        vec[i] = node;
        for(int j =0; j < step + ( extra > 0); j ++){
            prev = node;
            node = node->next;
        }
        prev->next = NULL; 
    }
    return vec;
}

int main(){

    Node* head = new Node();
    int lb = 0, ub = 10;
    for (int i = 0;i<11;i++) addTail(head, rand() % (ub - lb + 1));
    traversalLoop(head);
    cout<<endl;
    vector<Node*> ans = splitListToParts(head,2);
    for (Node* i : ans) {traversalLoop(i);cout<<endl;} 
    
}