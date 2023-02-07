#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;

string gcdOfStrings(string str1, string str2){
    if (str1 + str2 == str2 + str1){
        return str1.substr(0,gcd(str1.length(),str2.length()));
    }
    else return "";
}

int main(){
    string a = "abcd";
    string b = "abcdabcdabcd";
    cout<<gcdOfStrings(a,b);
}