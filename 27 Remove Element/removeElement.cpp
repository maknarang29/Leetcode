#include <iostream>
#include <vector>
using namespace std;


int removeElement(vector<int> nums, int val){

    //Start a counter
    int k = 0;
    // Loop through the vector 
    for (auto i = nums.begin(); i!= nums.end();++i){
        // If the value is equivalent to val (The unwanted value) 
        // DELETE it
        if (*i == val) {
            nums.erase(i);
            i--;
        }
        // Else increase the counter as the value is acceptable
        else k++;
    }
    // cout<<k<<endl;
    return k;
}

int main(){
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    int ans = removeElement(nums,3);
    cout<<"Value of k is: "<<ans<<endl;
    // NOTE: Apparently it doesn't give the right nums value even though its rightly inplace changed
    for(int i: nums) cout<<i<<" "; 
}
