
#include <iostream>
#include <stack>
using namespace std;


class Solution{
    public:
    bool isValid(string s){
        stack<char> st;
        bool ans = true;
        for (char elem: s){
            if(elem == '(' || elem== '{' || elem == '[' ) st.push(elem);
            else if (elem == ')' && st.top() != ')') {
                ans = false;
                }
            else if (elem == '}'&& st.top() != '}'){
                ans = false;
            }
            else if (elem ==']'&& st.top() != ']'){
                ans = false;
            }
        }
    return ans;
    }
};