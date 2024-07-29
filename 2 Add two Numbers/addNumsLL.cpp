#include <iostream>
#include "LinkedList.h"
#include "LLFuncs.cpp"
using namespace std;


int main(){
    Node* l1 = new Node(2);
    addTail(l1,4);
    addTail(l1,6);
    
    Node* l2 = new Node(5);
    addTail(l2,6);
    addTail(l2,4);

    traversalRec(l1);
    cout<<endl;
    traversalLoop(l2);


    Node* dummHead = new Node(0);
    Node* tail = dummyHead;
    int carry = 0;
    while (l1 != NULL || l2!= NULL || carry!= 0){
        int digit1 = (l1!=NULL) ? l1->val : 0;
        int digit2 = (l2!=NULL) ? l2->val : 0;
        int sum = digit1+ digit2 + carry;
        int digit = sum%10;
        carry = sum/10;

        ListNode* newNode = new Node(digit);
        tail->next = newNode;
        tail = tail->next;

        l1 = (l1!=NULL) ? l1->next : NULL;
        l2 = (l2!=NULL) ? l2->next : NULL;
    }
    

    // int num1 = 0;
    // while(l1!=NULL){
    //     num1+= l1->val;
    //     num1 *=10;
    //     l1 = l1->next;
    // };
    // int num2 = 0;
    // while(l2!=NULL){
    //     num2+= l2->val;
    //     num2 *=10;
    //     l2 = l2->next;
        
    // };
    // cout<<"Number 1:"<<num1/10<<endl;
    // cout<<"Number 2:"<<num2/10<<endl;
    // cout<<endl;
    // int ans = num1+num2;
    // Node* ansL = new Node();
    // while (ans){
    //     append(&ansL,ans%10);
    //     ans = ans/10;
    // }
    // while(ansL!=NULL){
    //     cout<<ansL->val;
    //     ansL = ansL->next;  
    // }; 

}
