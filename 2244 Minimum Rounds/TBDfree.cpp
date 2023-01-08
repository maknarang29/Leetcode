#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<int,int> findFreq(int arr[]){
    unordered_map <int,int> mp;
    for(int i =0;i<10;i++) mp[arr[i]]++;
    return mp;
} 
int main(){
    int v[]  =  {2,2,3,3,2,4,4,4,4,4 };
    unordered_map <int,int> mp = findFreq(v);
    for (auto i : mp) {
        cout << "Element " << i.first << " occurs "<< i.second << " times" << endl; 
        
    }
}