#include <iostream>
#include <vector>
using namespace std;

using pii = pair<int,int>;
using vecp = vector<pii>;

bool check(pii a, pii b, pii c){
    if ((c.first - b.first)*(b.second - a.second) == (b.first - a.first)*(c.second - b.second)) return true;
    else return false;
}

int maxPoints(vector< vector <int> > &points){
    int n = points.size();
    if (n==0) return 0;
    else if (n == 1) return 1;
    else {
        int ans = 1;
        for (int i = 0; i<n;i++){
            pii a = make_pair(points[i][0],points[i][1]);
            for (int j = i+1;j<n;j++){
                pii b = make_pair(points[j][0],points[j][1]);
                int temp = 0;
                for (int k = j+1;k<n;k++){
                    pii c = make_pair(points[k][0],points[k][1]);
                    if (check(a,b,c)) temp++;
            }
            ans = max(ans,temp+2);
        }
    }
    return ans;
    }
}
