#include <iostream>
#include <vector>
using namespace std;


vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for (int i = 0; i<queries.size();i++){
            int sumCounter = 0;
            int lenCounter = 0;
            int j = 0;
            while(sumCounter<queries[i] & j<nums.size()){
                sumCounter+= nums[j];
                lenCounter++;
                j++;
            }
            if (sumCounter>queries[i]){
                lenCounter -= 1;
                ans.push_back(lenCounter);
            }
            else ans.push_back(lenCounter);
        }
        return ans;
    }

vector<int> answerQueries2 (vector<int>& nums, vector<int>& queries){
    sort(nums.begin,nums.end());
    
}
int main(){
   vector<int> nums;
   nums.push_back(4);
   nums.push_back(5);
   nums.push_back(2);
   nums.push_back(1);
   vector<int> queries;
   queries.push_back(3);
   queries.push_back(10);
   queries.push_back(21);
   vector<int> ans;
   ans = answerQueries(nums,queries);
   for (int i =0; i<ans.size();i++) cout<<ans[i]<<" "; 
}