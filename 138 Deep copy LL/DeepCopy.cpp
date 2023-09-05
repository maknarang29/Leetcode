#include <iostream>
#include "LinkedList.h"


using namespace std;




Node* copyRandomList(Node* head) {
    unordered_map<Node*,Node*> map;
    Node* copy = head;
    while(copy){
        map[copy] = new Node(copy->val);
        copy=copy->next;
    }
    copy = head;
    while(copy){
        map[copy]->next = map[copy->next];
        map[copy]->random = map[copy->random];
        copy=copy->next;
    }
    return map[head];
}

int main(){
    cout<<"works";
}