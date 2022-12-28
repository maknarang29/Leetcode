#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;



void showpq(priority_queue<int> gq)
{
    priority_queue<int> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}

void func(priority_queue<int> & v){
    int elem = v.top();
    cout<<elem<<endl;
    v.pop();
    int j = elem - floor(elem/2); 
    cout<<j<<endl;
    v.push(j);
    showpq(v);
};

int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> p;
        int i = 0;
        for (i=0;i< piles.size();i++) p.push(i);
        for (i=0;i < k; i++) func(p);
        int s = 0;
        for (i=0 ;i<p.size();i++){
            s+=p.top();
            cout<<s<<"/";
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