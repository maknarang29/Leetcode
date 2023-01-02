#include <iostream>
#include <vector>
using namespace std;

vector<bool> jump(vector<int>& nums, int destination, vector<bool>& dp){
    int i = 1;
    if (destination == 0) return dp;
    if (nums[destination - i]>= i) {
        dp[destination - i] = true;
        return jump(nums,destination-i,dp);
        }
    else {
        return jump(nums,destination,dp);
        }
    i++;
}

bool canJump(vector<int>& nums) {
        vector<bool> dp;
        for (int i=0;i<nums.size();i++) dp[i] = false;
        dp[nums.size()-1] = true;
        jump(nums,nums.size()-1,dp,1);
        return dp[0];
    }
bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<bool> dp(n,false);
        dp[n-1] = true;
        dp = jump(nums,n-1,dp);
        return dp[0];
    }

int main(){
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(4);
    cout<<canJump(nums);
}