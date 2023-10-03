#include <iostream>
#include <unordered_map>
using namespace std;

int goodPairs(vector<int>& nums){
    unordered_map<int, int> umap;
    for (int i : nums){
        umap[i]+=1;
    }
    int pairs = 0;
    unordered_map<int, int>:: iterator p;
    for (p =umap.begin(); p != umap.end(); p++){
        if (p->second > 1){
            pairs += ((p->second) * (p->second-1))/2;
        }
    }
    return pairs;
}


int main(){
    vector<int> u;
    u.push_back(1);
    u.push_back(1);
    u.push_back(1);
    u.push_back(1);
    cout<<goodPairs(u);
}