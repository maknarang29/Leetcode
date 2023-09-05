#include <iostream>
#include "LinkedList.h"

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
        if (index>size || index < 0) return;
        else if (index == 0) addAtHead(val); 
        else if (index == size) addAtTail(val);
        else{
            Node* temp = head;
            Node* newNode = new Node(val);
            for (int i =0;i<index-1;++i) {temp = temp->next;}
            Node* newNode = new Node(val,temp->next);
            newNode->next = temp->next;
            temp->next = newNode;
            size++;
        }
    }
    
    void deleteAtIndex(int index) {
        if (index>size || index<0) return;
        

        //Delete at head
        if (index == 0){
            Node* nextNode = new Node();
            // If list empty
            if (head == NULL) return;
            else if(head->next==NULL) delete head;
            else{
                nextNode = head->next;
                delete head;
                head = nextNode;
            }
        }
        else{
            Node* curr = head;
            for (int i = 0;i<index-1;i++){
                curr = curr->next;
            }
            Node* nextNode = curr->next->next;
            delete curr->next;
            curr->next = nextNode;
        }
        size--;
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