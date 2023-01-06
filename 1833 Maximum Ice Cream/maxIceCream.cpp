#include <iostream>
#include <vector>
using namespace std;

int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int count = 0;
        for (int i = 0;i<costs.size();i++){
            if(coins>=costs[i]){
                count++;
                coins = coins - costs[i];
            }
        }
        return count;
    }
int main(){
    vector<int> v;
    int coins = 20;
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    cout<<maxIceCream(v,coins);
    
}