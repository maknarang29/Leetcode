#include <iostream>
#include <vector>
using namespace std;


int coinChange2(vector<int> & coins, int amount,int count,int index){
    if (coins[index] > amount){
        return coinChange2(coins,amount,count,index-1);
    }
    if(amount == 0) return count;
    else{
        amount -= coins[index];
        count++;
        return coinChange2(coins,amount,count,index);
    } 

    else return -1;
    
}





int coinChange(vector<int>& coins, int amount,int idx, vector<int> amt) {
    amt.push_back(amount);
    // Base case 1
    if (amt[amt.size()-1] == 0) return amt.size()-1;
    // Base case 2
    if (amt[amt.size()-1]<coins[0]) return -1;
    int idx = coins.size()-1;
    if ( amt[amt.size()-1] > coins[idx]){
        amt.push_back(amt[amt.size()-1] - coins[idx]);
        coinChange(coins,amt[amt.size()-1]);
    }
    else if (idx > 0){
        coinChange(coins, amt[amt.size()-1]);
    }
    else return -1;
}





class Solution {
public:    
    int dp[12 + 1][10000 + 1];
    
    int findLowestCoins(vector<int> &coins, int arraySize, int amount) {
        for (int i = 0; i < arraySize + 1; i++)
            for (int j = 0; j < amount + 1; j++)
                if (i == 0 || j == 0)
                    dp[i][j] = (j == 0) ? 0 : INT_MAX - 1;
        
        for (int i = 1; i < arraySize + 1; i++) {
            for (int j = 1; j < amount + 1; j++) {
                if (coins[i - 1] > j)
                    dp[i][j] = 0 + dp[i - 1][j];
                else
                    dp[i][j] = min(0 + dp[i - 1][j], 1 + dp[i][j - coins[i - 1]]);
            }
        }
        
        return dp[arraySize][amount];
    }
    
    int coinChange(vector<int>& coins, int amount) {
        int res = findLowestCoins(coins, coins.size(), amount);
        return (res == INT_MAX - 1) ? -1 : res;
    }
};




// int coinChange(vector<int> & coins, int amount){
//     vector<int> amt;
//     amt.push_back(amount);
//     int index = coins.size()-1;
//     if (amt[amt.size()-1] == 0) return amt.size()-1;
//     if (amt[amt.size()-1] > coins[index]){
//         amt.push_back(amt[amt.size()-1] - coins[index]);
//     }
//     else if(index>=0){
//         index--;
//         coinChange(coins,amt[amt.size()-1]);
//     }
//     else return -1;
// }



int main(){
    vector <int> coins;
    coins.push_back(1);
    coins.push_back(2);
    coins.push_back(5);

    int amount = 11;
    cout<<coinChange(coins,amount);
}