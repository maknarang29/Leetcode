#include <iostream>
#include <unordered_map>
using namespace std;


int farr[1000];
int fibMemo(int n){
    if (farr[n]) return farr[n];
    if (n<2) return 1;
    else{
        farr[n] = fibMemo(n-1) + fibMemo(n-2);
        return farr[n];
    }
    
}
int fibRec(int n){
    if (n<2) return 1;
    return fibRec(n-1) + fibRec(n-2);
}

int main(){
    cout<<fibRec(5)<<endl<<fibMemo(5);

}
