#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

bool detectcapitalUse(string word){
    int count = 0;
    for (char ch: word) if (isupper(ch)) count ++;
    if (word.length() == 1) return true;
    else if (word.length() == count) return true;
    else if (count == 1 && isupper(word[0])) return true;
    else if (word.length() > 0 && count == 0) return true;
    else return false;
}

int main(){
    string w = "Flag";
    if(detectcapitalUse(w)) cout<<"TRUE";
    else cout<<"FALSE";
    
}
