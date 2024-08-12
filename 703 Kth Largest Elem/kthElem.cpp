#include <iostream>
#include <queue>
using namespace std; 
    

class KthLargest{
public:
    int num;
    priority_queue<int,vector<int>,greater<int>> pq;
    KthLargest(int k,vector<int> nums){
        num = k;
        for (int n: nums){
            pq.push(n);
            if(pq.size() > k) pq.pop();
        }

    }

    int add(int val){
        pq.push(val);
        if(pq.size()>num) pq.pop();
        return pq.top();
    }
}


