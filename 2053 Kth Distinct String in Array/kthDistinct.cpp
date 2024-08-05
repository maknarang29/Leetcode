#include <iostream>
#include <vector>
#include <unordered_map> 
using namespace std;


string kthDistinct(vector<string>& arr, int k) {
    unordered_map<string,int> umap;
    for (string i : arr) umap[i]++;
    int cnt = 0;
    for (string i : arr){
        if (umap[i] == 1) {
            cnt++;
            if (cnt == k) return i;
        }
    } 
    return "";
}

int main(){
unordered_map<string,int> umap;
vector<string> arr;
arr.push_back("d");
arr.push_back("b");
arr.push_back("c");
arr.push_back("b");
arr.push_back("c");
arr.push_back("a");
for (string i : arr) umap[i]++;
int k = 0;
for (string i : arr){
    if (umap[i] == 1) k++;
} 
cout<<k;
};