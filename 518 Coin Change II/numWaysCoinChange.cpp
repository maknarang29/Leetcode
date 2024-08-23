#include <iostream>
#include <vector>
using namespace std;



int getCountRecursive(vector<int> coins, int numCoins, int sum){

    //If sum = 0; there is only one solution i.e. no coins to be picked
    //(Do not pick any coins)
    if (sum == 0) return 1;

    // If sum < 0 ; there is no solution
    if (sum < 0) return 0;

    // If there are no coins i.e. numCoins = 0
    // and sum > 0, then no solution exists
    if (numCoins <= 0 && sum > 0) return 0;

    return getCountRecursive(coins,numCoins-1,sum) + getCountRecursive(coins,numCoins,sum-coins[numCoins-1]); 
    
}


int main(){
    vector<int> coins;
    coins.push_back(2);
//    coins.push_back(2);
//    coins.push_back(5);
    cout<< getCountRecursive(coins,1,5);
}
