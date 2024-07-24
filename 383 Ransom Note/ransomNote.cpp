#include <iostream> 
#include <unordered_map> 
using namespace std; 


bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> dict;
    for(char i : magazine){
        dict[i]++;
    }
    for (char j : ransomNote){
        if (dict[j] <= 0){
            return false;
        }
        dict[j]--;
    }
    return true;
}
int main(){
    string ransomNote = "aa", magazine = "aab";
    cout<<canConstruct(ransomNote,magazine);
}