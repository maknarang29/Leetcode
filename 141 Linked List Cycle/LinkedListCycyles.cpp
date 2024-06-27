#include <iostream>
using namespace std;

struct Node {
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL) {}
};


bool hasCycles( Node *head){
    if (!head || !head->next) return false;
    Node *slow = head;
    Node *fast = head;
    while (slow && fast && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast){
            return true;
        }
    }
    return false;
}

int main(){
    cout<<"Worked";
}
