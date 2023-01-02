#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;



void showpq(priority_queue<int> gq)
{
    priority_queue<int> g = gq;
    while (!g.empty()) {
        cout <<" "<< g.top();
        g.pop();
    }
    cout<<endl;
}


void func(priority_queue<int> & v){
    
    int elem = v.top();
    v.pop();
    int j = elem - floor(elem/2); 
    v.push(j);
    
};


int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> p;
        int i = 0;
        for (i=0;i< piles.size();i++) p.push(piles[i]);
        for (i=0;i < k; i++) func(p);
        int s = 0;
        while(!p.empty()){
            s+=p.top();
            p.pop();
        }
        return s;      
    };


int main(){
    vector<int> piles;
    piles.push_back(5);
    piles.push_back(4);
    piles.push_back(9);
    cout<<minStoneSum(piles,2);
}
