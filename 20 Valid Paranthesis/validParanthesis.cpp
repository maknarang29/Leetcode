#include <iostream>
#include <stack>
using namespace std;


bool isValid(string s) {
    stack<char> stack;
    for (char i : s) {
        if (i == '(' || i == '[' || i == '{') stack.push(i);
        else if (i == ')') {
            if (stack.empty() || stack.top() != '(') return false;
            stack.pop();
        }
        else if (i == ']') {
            if (stack.empty() || stack.top() != '[') return false;
            stack.pop();
        }
        else if (i == '}') {
            if (stack.empty() || stack.top() != '{') return false;
            stack.pop();
        }
        
    }
    return stack.empty();
};