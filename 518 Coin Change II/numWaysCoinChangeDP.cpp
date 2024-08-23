#include <iostream>
#include <vector>

using namespace std;

int getCountDP(vector<int> coins, int numCoins, int sum){
    int dp[sum+1][numCoins+1];
    for (int i=0;i<=numCoins;i++) dp[0][i]=1;
    for (int i=1;i<=sum;i++) dp[i][0]=0;
    for (int i=1;i<=sum;i++){
        for (int j = 1;j<=numCoins;j++){
            dp[i][j] = dp[i][j-1];
            if(coins[j-1]<=i) dp[i][j]+= dp[i-coins[j-1]][j];
        }
    }
    return dp[sum][numCoins];
}


int main(){
    vector<int> coins;
    coins.push_back(1);
    coins.push_back(2);
    coins.push_back(5);
    cout<< getCountDP(coins,3,5);
}
