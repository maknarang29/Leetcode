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



