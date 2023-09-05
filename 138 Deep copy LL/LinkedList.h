#include <iostream>
#pragma once
using namespace std;



//Construction of a basic linked list data structure
class Node{
    public:
        int val;
        Node* next;
        Node* random;

        Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


