#include<iostream>
#include<vector>
#include<string>



class Solution {
public:
    int numberOfSpecialChars(std::string word) {
        if(word.size() == 0) return 0;

        int countSpecialChar = 0;
        std::vector<int> upperCaseVec(26,0);
        std::vector<int> lowerCaseVec(26,0);

        
        for(size_t i=0; i<word.size(); i++){
            if(word[i] >= 'A' && word[i] <= 'Z'){
                upperCaseVec[word[i] - 'A']++;

            }else if(word[i] >= 'a' && word[i] <= 'z'){
                lowerCaseVec[word[i] - 'a']++;
            }
        }


        for(size_t i=0; i<word.size(); i++){
            if(word[i] >= 'A' && word[i] <= 'Z'){
                if(upperCaseVec[word[i] - 'A'] == 0) continue;
                if(lowerCaseVec[(word[i] + 32) - 'a'] >= 1) countSpecialChar++;
                lowerCaseVec[(word[i] + 32) - 'a'] = 0;
            }else if(word[i] >= 'a' && word[i] <= 'z'){
                if(lowerCaseVec[word[i] - 'a'] == 0) continue;
                if(upperCaseVec[(word[i] - 32) - 'A'] >= 1) countSpecialChar++;
                upperCaseVec[(word[i] - 32) - 'A'] = 0;
            }
        }

        return countSpecialChar;
    }
};


int main(){
    return 0;
}