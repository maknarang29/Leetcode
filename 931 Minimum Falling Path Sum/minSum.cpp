#include<iterator>
#include<iostream>
using namespace std;

    int getIndex(vector<int> v,int K){
        vector <int> :: iterator itr;
        itr = find (v.begin(), v.end(), K);
        int index = distance (v.begin (), itr);
        return index;
    };

    int minVal(vector<int> vec,int ind){
        int min;
        vector<int>::iterator st = vec.begin();
        vector<int>::iterator nd = vec.begin();
        if (ind == -1 )  return *min_element(vec.begin(),vec.end());
        else if(ind == 0 ){
            advance(nd,2);
            return *min_element(st,nd);
            
        }if (ind == -1)  return *min_element(vec.begin(),vec.end());
        else if(ind == 0){
            if (vec.size()==2) return *min_element(vec.begin(),vec.end()); 
            else{
            advance(nd,1);
            return *min_element(st,nd);
            } 
        }
        else if(ind == vec.size()-1 ){
           advance(st,vec.size()-1);
           return *min_element(st,nd); 
        }
        else { 
        advance(st,ind-1);
        advance(nd,ind+1);
        return *min_element(st,nd); 
        }
    };
    int minFallingPathSum(vector<vector< int > > &vec){
        vector<int> minnums;
        vector<int> indexes;
        int val = 0;
        int min = minVal(vec[0],-1);
        val += min; 
        int ind = getIndex(vec[0],min);
        minnums.push_back(min);
        indexes.push_back(ind);
        for (int i = 1; i<vec.size();i++){
            val+= minVal(vec[i],indexes[indexes.size()-1]);
            minnums.push_back(minVal(vec[i],indexes[indexes.size()-1]));
            indexes.push_back(getIndex(vec[i],minnums[minnums.size()-1]));
        }
        return val; 
    }


int main(){
    vector<vector<int> > vec;
  
    srand(56);
  
    for (int i = 0; i < 2; i++) {
        vector<int> v1;
  
        for (int j = 0; j < 2; j++) {
            v1.push_back(rand()%210 - 100);
        }
  
    
        vec.push_back(v1);
    }
    // for (int i = 0; i < vec.size(); i++) {
    //     for (int j = 0; j < vec[i].size(); j++)
    //         cout << vec[i][j] << " ";
    //     cout << endl;
    // }
    vector<int> v1 {82,81};
    vector<int> v2 {69,33};
    vector<vector<int>> v;
    v.push_back(v1);
    v.push_back(v2);
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    //cout<<minVal(v[1],0)<<endl; 
    cout<<minFallingPathSum(v);
}
