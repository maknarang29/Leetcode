#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s){
    //Create stack for answer
    stack <char> ans; 
    //traverse over the string
    for (auto ch : s){
        if (!ans.empty() && ans.top() == ch) ans.pop();
        else ans.push(ch);
        }
        string Ans = (string) ans
        return Ans;
    };

};


