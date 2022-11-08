#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //initialise the resultant vector
        vector<vector< int>>result;
        //Base case if Interval is empty or Interval vec has one interval only
        if (intervals.size()<=1) return intervals;
        else{
            //sort the inetravls 
            sort(intervals.begin(),intervals.end());
            //Put the first inetrval in the resultant vector
            result.push_back(intervals[0]);
            //interval[0].erase();
            for (int i =1; i<intervals.size();i++){
                //Check if the end of the last interval in result is greater than than start of the next interval in Intervals
                if (result.back()[1] >= intervals[i].front()){
                    //If so merge the intervals
                    result.back()[1] = max(result.back()[1],intervals[i].back());
                }
                else{
                    //Else just push the last interval in
                    result.push_back(intervals[i]);
                }
            }
        } 
        
}
};
int main(){
    return 0;
}