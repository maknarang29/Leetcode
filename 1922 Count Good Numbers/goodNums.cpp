#include <iostream>
using namespace std;

int countGoodNumbers(long long n) {
        long m= 1000000007;
        if (n==1) return 5;
        if (n%2 == 0) return ((4*countGoodNumbers(n-1))%m);
        else return ((5*countGoodNumbers(n-1))%m);
    }

int main(){
    cout<<countGoodNumbers(50)%1000000007;
}