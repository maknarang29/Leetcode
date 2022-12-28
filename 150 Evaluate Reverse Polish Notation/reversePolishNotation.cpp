#include <iostream>
#include <stack>
#include <vector>
using namespace std;


int evalRPN(vector<string>& tokens) {
        stack<int> value;

        for (int i = 0; i<tokens.size();i++){
            if (tokens[i] == "+"){
                int a = value.top();
                value.pop();
                int b = value.top();
                value.pop();
                value.push(a+b);
            }
            else if(tokens[i] == "-"){
                int a = value.top();
                value.pop();
                int b = value.top();
                value.pop();
                value.push(b-a);
            }
            else if(tokens[i]== "*"){
                int a = value.top();
                value.pop();
                int b = value.top();
                value.pop();
                value.push(a*b);
            }
            else if(tokens[i]=== "/"){
                int a = value.top();
                value.pop();
                int b = value.top();
                value.pop();
                value.push(b/a);
            }
            else {
                value.push((int(elem)));
            };
        }
        return value.top();
    }


int main(){
    vector<string> eval =  {"2","1","+","3","*"};
    cout<<evalRPN(eval);
}