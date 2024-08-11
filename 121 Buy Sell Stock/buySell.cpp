#include <iostream>
#include <vector>
using namespace std;


int maxProfit(vector<int>& prices) {
    int buy = prices[0];
    int profit = 0;
    for (int i = 1; i<prices.size(); i++){
        if (prices[i] < buy) buy = prices[i];
        else if (prices[i]-buy > profit) profit = prices[i]-buy;
    }
    return profit;
}

int main(){
    vector<int> prices;
    prices.push_back(7);
    prices.push_back(6);
    prices.push_back(5);
    prices.push_back(4);
    prices.push_back(3);
    prices.push_back(2);

    cout<<maxProfit(prices)<<endl;

    for (int i : prices) cout<<i<<" ";

}
