#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> candies(n,1);
        for (int i = 1;i<n;i++){
            if(ratings[i]>ratings[i-1]) candies[i] = candies[i-1] + 1;
        }
        for (int i = n-2;i>=0;i--){
            if (ratings[i]>ratings[i+1]) candies[i] = max(candies[i], 1+candies[i+1]);
        }
        return accumulate(candies.begin(),candies.end(),0);
    }


int main(){
    vector<int> ratings;
    ratings.push_back(1);
    ratings.push_back(2);
    ratings.push_back(2);
    cout<<candy(ratings);
}
