
#include <iostream>
#include <stack>
using namespace std;


class Solution{
    public:
    bool isValid(string s){
        stack<char> st;
        bool ans = true;
        for (char elem : string){
            if(elem == '(' || elem == '{' || elem == '[' ) st.push(elem);
            else if (elem == ')' & st.top!= ')') {
                ans = false;
                else continue;
                };
            else if (elem == '}'){
                if (st.top != '}')
                ans = false;
                else continue;
            }
            else if (elem ==']'){
                if (st.top != ']')
                ans = false;
                else continue;
            }
        }
    return ans;
    }
}