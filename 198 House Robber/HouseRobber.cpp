#include <iostream>
using namespace std;

int rob(vector<int>& nums) {
    int len = nums.size();
    vector<int> dp(len);
    if (len == 1) return nums[0];
    dp[0] = nums[0]; //base case
    dp[1] = max(dp[0],nums[1]);
    for (int i=2;i<len;i++)
        dp[i] = max(dp[i-2]+nums[i],dp[i-1]);
    return dp[len-1];
    };