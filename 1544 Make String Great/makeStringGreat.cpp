#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
string makeGood(string s){
    //take length of string
    int len = s.length();
    //traverse over the string
    for (int i = 0; i<len-1;i++){
        //check consecutivecharacters for the condition 
        if (abs(s.at(i) - s.at(i+1))== 32){
            //if so, erase the characters, and restart the loop with different length
            s.erase(i,2);
            i = -1;
            len -=2;
        }
        }
        return s;
    };
};

bool StringGood(char a, char b){
    if (abs(a - b) == 32) return false;
    else return true;
}
string makeGood2(string s){
    string good;
    int len = s.length();
    for (int i =0; i<len; i++){
        if (!StringGood(s[i],s[i+1])){
            i = i+2;
        }
        else good.push_back(s[i]);
    }
    return good;
}
    


int main(){
    string a = "abBAcC";
    string b = makeGood2(a);
    cout<<b;
}

