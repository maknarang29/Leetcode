#include <iostream>
#include <vector>
using namespace std;


int min(int x, int y, int z){
    if (x<y) return x<z ? x : z;
    else return y<z ? y : z;
};
int min(int y, int z){
    return y<z ? y : z;
}


int minPathSum( vector<vector< int > > &grid){
    int row = grid.size();
    int col = grid[0].size();
    int tc[row][col];
    tc[0][0] = grid[0][0];
    for (int i = 1; i<row;i++) {tc[i][0] =  tc[i-1][0] + grid[i][0]; cout<<tc[i][0]<<" /"; }
    for (int j = 1; j<col;j++) {tc[0][j] =  tc[0][j-1] + grid[0][j]; cout<<tc[0][j]<<" //"; }
    for (int i = 1;i<row;i++){
        for (int j = 1 ;j<col;j++) {
        tc[i][j] = min(tc[i-1][j],tc[i][j-1]) + grid[i][j];
        cout<<tc[i][j]<<" :";
        } 
    };
    return tc[row-1][col-1];
}
int minPathSum2( vector<vector< int > > &grid){
    int row = grid.size();
    int col = grid[0].size();
    int tc[row][col];
    tc[0][0] = grid[0][0];
    if (row == 1){    
        for (int j = 1; j<col;j++) tc[0][j] =  tc[0][j-1] + grid[0][j]; 
        return tc[0][col-1];
    };
     if (col == 1){    
        for (int i = 1; i<row;j++) tc[i][0] =  tc[i-1][0] + grid[i][0]; 
        return tc[row-1][];
    };
    if (row > 1& col>1){
    for (int i = 1; i<col;i++) tc[i][0] =  tc[i-1][0] + grid[i][0]; 
    for (int j = 1; j<row;j++) tc[0][j] =  tc[0][j-1] + grid[0][j]; 
    for (int i = 1;i<row;i++){
        for (int j = 1 ;j<col;j++) {
        tc[i][j] = min(tc[i-1][j],tc[i][j-1]) + grid[i][j];
        } 
    };
    return tc[row-1][col-1];}
}


    int main()
{    
    vector<vector<int > > grid;
    vector<int> v1 {1,3,1};
    grid.push_back(v1);
    vector<int> v2 {1,5,1};
    grid.push_back(v2);
    vector<int> v3 {4,2,1};
    grid.push_back(v3);
    vector<vector<int > > grid2;
    grid2.push_back(v1);
    
    cout << "  " << minPathSum2(grid2);
    return 0;
}
 