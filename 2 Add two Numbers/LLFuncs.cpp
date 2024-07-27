#include <iostream>
#include "LinkedList.h"
#pragma once

void traversalLoop(Node* head){
    while(head != NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
}

void traversalRec(Node* head){
    if (!head ) return;
    cout<<head->val<<" ";
    traversalRec(head->next);
}

int ListSearchLoop (Node* head, int elem){
    Node* temp = head;
    int count = 1;
    while( temp !=NULL){
        if(temp->val == elem) return count;
        else{
            temp = temp->next;
            count++;
        }
    }
    return -1;
}

int ListSearchRec(Node* head, int elem){
    if (head == NULL) return -1;
    if (head->val == elem) return 1;
    else{
        int res = ListSearchRec(head->next,elem);
        if (res == -1) return -1;
        else return res+1;
    }
}

int get(Node* head, int index){
    int count = 0;
    int dat;
    if(head == NULL) return -1;
    else {
    while(count<index){
        dat = head->val;
        head = head->next;
        count++;
    }
    return dat;
    }
}

void addTail(Node* head, int value){
    Node* newNode = new Node(value);
    if (head==NULL)
        head = newNode;
    
    while (head->next != NULL) head=head->next;
    head->next=newNode;
} 

void addIndex(Node* head,int index,int value){
    Node* newNode = new Node(value);
    int count = 0;
    Node* temp = head;
    while(count<index-1){
        temp = temp->next;
        count++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void append(Node** headref, int newdata){
    //Create new node, assign data and next  
    Node* newNode = new Node();
    newNode->val = newdata;
    newNode->next = NULL;
    
    //If an empty linked list
    if (*headref == NULL){
        *headref = newNode;
        return;
    }
}

void insertHead(Node* head, int elem){
    Node* newhead = new Node(elem,head);
}