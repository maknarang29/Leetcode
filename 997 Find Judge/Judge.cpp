#include <iostream>
#include<unordered_set>
#include<unordered_map>
#include <vector>
using namespace std;

int findJudge(int n, vector<vector<int>>& trust) {
       if (trust.size() == 0 && n == 1 ) return 1;
       vector<int> trustpeople(n+1);
       for (auto person: trust){
            trustpeople[person[0]]--;
            trustpeople[person[1]]++;
       } 
       for (int i = 0;i<trustpeople.size();i++){
        if (trustpeople[i] == n-1) return i;
       }
       return -1;
    }
int main(){
    vector<vector<int > > trust{{1,3},{2,3},{3,1}};
    unordered_map<int, unordered_set<int> > umap;
    unordered_map<int, bool > trust; 
    for (auto elem : trust){
        umap[elem[1]].insert(elem[0]);
        trust[elem[0]] = true;
    }
    for (auto i: umap) cout<<i.first<<"   "<<i.second<<endl;
}