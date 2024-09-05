#include <iostream>
#include <vector>
using namespace std;


vector<int> missingRolls(vector<int>& rolls, int mean, int n){
    int sum=0;
    for (int r: rolls) sum += r;
    int m = rolls.size();
    int temp = (m+n)*mean - sum;
    int base = temp/n;
    int remainder = temp%n;
    vector<int>nonans;
    if (n*6<temp || temp < n) return nonans ; // 
    else{
        vector<int> ans (n,base);
        for (int i = 0;i<remainder;i++) ans[i]+=1;
        return ans;
    }
}


int main(){
    vector<int> rolls;
    rolls.push_back(1);
    rolls.push_back(2);
    rolls.push_back(3);
    rolls.push_back(4);
    //int mean = 4;
    //int n = 2;
    vector<int> ans = missingRolls(rolls,6,4);
    for (auto i: ans) cout<<i<<" ";
}

