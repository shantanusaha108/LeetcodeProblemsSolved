#include<iostream>
#include<vector>
#include<string>



class Solution {
public:
    int numberOfSpecialChars(std::string word) {
        if(word.size() == 0) return 0;

        
        std::vector<bool> upperCaseVec(26,false);
        std::vector<bool> lowerCaseVec(26,false);

        
        for(char ch : word){
            if(ch >= 'A' && word[i] <= 'Z'){
                upperCaseVec[ch - 'A'] = true;

            }else if(word[i] >= 'a' && word[i] <= 'z'){
                lowerCaseVec[ch - 'a'] = true;
            }
        }

        int countSpecialChar = 0;

        for(size_t i=0; i<26; i++){
            if(upperCaseVec[i] && lowerCaseVec[i]) countSpecialChar++;
        }

        return countSpecialChar;
    }
};


int main(){
    return 0;
}