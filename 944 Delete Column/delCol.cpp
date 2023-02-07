#include <iostream>
#include <vector>
using namespace std;

int minDeletionsize(vector<string> &s){
    int count = 0;
    int j=0;
    while(j<s[0].length()){
    vector<int> vals;
    for(int i = 0;i<s.size();i++){
        vals.push_back(int(s[i][j]));
        }
        if (std::is_sorted(vals.begin(),vals.end())) vals.clear();
        else {
            count++;
            vals.clear();
        }
        j++;
    }
    return count;
}

int main(){
    vector<string> S;
    S.push_back("a");
    S.push_back("b"); 
//   S.push_back("tsr"); 
    cout<<minDeletionsize(S);
}