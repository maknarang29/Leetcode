
#include <iostream>
#include "LinkedList.h"

void push (Node** head, int value){
    Node* curr = new Node();
    curr->val = value;
    curr->next = *head;
    *head = curr;
}
int deletelast(Node* head){
    Node* second_last = head;
    while (second_last->next->next != NULL )
    {
        second_last = second_last->next;
    }
    int last = second_last->next->val;
    delete second_last->next;
    second_last->next = NULL;
    return last;
}
void traversalRec(Node* head){
    if (!head ) return;
    cout<<head->val<<" ";
    traversalRec(head->next);
}

Node* rotateRight(Node* head, int k){
    if (head == NULL || head->next == NULL) return head;
    int l = 0;
    Node* newhead = new Node();
    newhead = head;
    while(newhead != NULL){
        newhead = newhead->next;
        l++;
    }
    cout<<l<<endl;
    int nk=k;
    if (l!=0) nk = k%l;
    for (int i = 0; i< nk; i++){
        int j = deletelast(head);
        push(&head,j);
        cout<<i+1<<"th irteration: ";
        traversalRec(head);
        cout<<endl;
    }
    return head;
}


int main(){
    Node* p = new Node(5);
    push(&p,6);
    push(&p,7);
    push(&p,8);
    traversalRec(p);
    cout<<endl<<"Last Elem "<<deletelast(p)<<endl;
    traversalRec(p);
    cout<<endl;
    rotateRight(p,2000000000);
}