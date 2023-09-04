#include <iostream>
#pragma once
using namespace std;



//Construction of a basic linked list data structure
class Node{
    public:
        int val;
        Node* next;
        Node() : val(0), next(nullptr) {}
        Node(int x) : val(x), next(nullptr) {}
        Node(int x, Node *next) : val(x), next(next) {}
};



class Node{
    public:
        int val;
        Node* next;
        Node() : val(0), next(nullptr) {}
        Node(int x) : val(x), next(nullptr) {}
        Node(int x, Node *next) : val(x), next(next) {}
};

class MyLinkedList {
public:
     
        int size = 0;
        Node* head = NULL;
        MyLinkedList() {

        }
    
    
    int get(int index) {
        if (index > size)  return -1;
        int dat;
        int count = 0;
        Node* temp = head;
        while (count<=index){
            dat = temp->val;
            temp = temp->next;
            count++;
        }
        return dat;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val,head);
        // newNode->val = val;
        // newNode->next = head;
        size++;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        // newNode->val = val;
        // newNode->next = NULL;
        if (head == NULL) 
            head=newNode;
        while (head->next != NULL) head = head->next;
        head->next = newNode;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index>size) return;
        int count = 0;
        Node* newNode = new Node(val);
        while(count<=index) {
            head = head->next;
            count++;
    }
        newNode->next = head->next;
        head->next = newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */