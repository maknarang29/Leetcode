#include <iostream>
#include <vector>
using namespace std;


int conversion(string s){
    int num = 0;
    for (int i =0;i<s.length();i++){
        int N = 0;
        N = int(s[i])-96;
        if (N>=10){
            num = num * 100;
            num = num + N;
        }
        else{
            num = num * 10;
            num = num + N;
        }
       // cout<<num<<endl;
    }
    return num;
}

int Change(int sNum){
    int numDigit = 0;
    while (sNum>0){
        numDigit = numDigit + (sNum % 10);
        sNum = sNum/10;
    }
    return numDigit; 
}
int getLucky(string s, int k){
    int numS = conversion(s);
    while (k>0){
        numS = Change(numS);
        k--;
        cout<<numS<<endl;
    }
    return numS;
}

int main(){
    cout<<getLucky("zbax",2) ;
}
