#include <iostream>
#include <vector>

using namespace std;

bool closeStrings(string word1, string word2) {
    if (word1.length() == word2.length()){
        vector <int> freqW1 (26,0) ; vector <int> freqW2 (26,0);
        vector <int> presentW1 (26,0); vector <int> presentW2 (26,0);
        for (char ch:word1){
            freqW1[ch -'a']++;
            presentW1[ch - 'a'] = 1;
        }     
        for (char ch:word2){
            freqW2[ch -'a']++;
            presentW2[ch - 'a'] = 1;
        }
        sort(freqW1.begin(),freqW1.end());
        sort(freqW2.begin(),freqW2.end());
        if (freqW1 == freqW2 && presentW1 == presentW2) return true;
        else return false;
        }
        else return false;
    }
