#include <iostream>
#include <unordered_set>
using namespace std;

int subarrayK (int arr[], int k){
    int count = 0;
    unordered_set<int> uset;
    int val = 0;
    for (int i = 0; i <= 6; i++){
        val += arr[i];
        if (uset.find(val-k) != uset.end()) count++;
        if (val == k) count++;
        uset.insert(val);
    }
    return count;
}

int main(){
    int arr[] = {5,8,6,13,3,-1};
    int res = subarrayK(arr,22);
    cout<< res;
}
