#include<iostream>
#include <vector>
using namespace std;


int numTilings(int n) {
    int M = 1e9 +7; 
    int f[n+5];
    f[0]=1;
    f[1]=1;
    f[2]=2;
    if (n<3) return f[n];
    for (int i=3;i<n+1;i++){
    f[i] = ((2*f[i-1])%M + (f[i-3])%M)%M;
    }
    return f[n];
}  



int main(){

cout<<numTilings(40);
 }