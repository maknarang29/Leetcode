#include <iostream>
#include <cmath>

class Solution {
public:
    int reverse(int x) {
        long reversed = 0;
        while (x!=0){
            reversed *= 10;
            reversed += x%10;
            x /= 10;
            x = floor(x);
        }
        if(reversed >=-1*pow(2,31)&&reversed<=pow(2,31)-1) return reversed;
        else return 0;
        
    }
};