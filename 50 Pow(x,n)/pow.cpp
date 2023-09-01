#include <iostream>
#include <cmath>
using namespace std;

double pow(double x, int n){
    if(n<0){
        n = abs(n);
        if (n==1) return 1/x;
        return 1/ (x*pow(x,n-1));
    }
    else{
    if (n==1) return x;
    return x*pow(x,n-1);
    }
}
int main(){
    cout<<pow(2,-281563785128);
}