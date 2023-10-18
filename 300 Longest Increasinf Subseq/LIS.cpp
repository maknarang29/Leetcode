#include <iostream>
#include <vector>
using namespace std;


int LIS(vector<int> nums){
    int n = nums.size();
    vector<int> lis(n,1) ;
    for (int i = 1;i<n;i++){
        for (int j =0;j<i;j++){
            if(nums[j]<nums[i]){
                lis[i] = max(lis[i],lis[j]+1);
            }
        }
    }
    return *max_element(lis.begin(),lis.end());
}

int main(){
    vector<int> nums;
    nums.push_back(3); 
    nums.push_back(4); 
    nums.push_back(2); 
    nums.push_back(8); 
    nums.push_back(10); 
    nums.push_back(5); 
    nums.push_back(1); 
    cout<<LIS(nums);
}