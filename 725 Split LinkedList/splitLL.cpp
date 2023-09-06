#include <iostream>
#include <cstdlib>
#include <vector>
#include "LinkedList.h"
#include "LLFuncs.cpp"


   vector<Node*> splitListToParts(Node* head, int k) {
        vector<Node*> vec(k);
        int size = 0;
        Node* temp = head;
        while(temp){
            temp=temp->next;
            size++;
        }
        int len = floor(size/k);
        for (int i = 0;i<k;i++){
            if (i%len == 0){
                vec.push_back(head);
                head=head->next;
            }
        }
        return vec;
        
    }


int main(){

    Node* head = new Node();
    int lb = 0, ub = 10;
    for (int i = 0;i<11;i++) addTail(head, rand() % (ub - lb + 1));
    vector<Node*> ans = splitListToParts(head,2);
    traversalLoop(ans[0]); 
    cout<<endl;
}