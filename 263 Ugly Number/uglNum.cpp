#include <iostream>
using namespace std;

bool isUgly(int n){
    if (n < 1) return false; //Base Case 1
    else if (n == 1) return true; //Base case 2 
    else if (n % 2 == 0) return isUgly(n/2); 
    else if (n % 3 == 0) return isUgly(n/3); 
    else if (n % 5 == 0) return isUgly(n/5); 
    else return false;
};

int main(){
    int x = 31;
    cout<<isUgly(x);
};