#include<iostream>
#include<vector>
#include<cctype>
#include<string>




bool isAlphaNumeric(char ch){ //prefer std::isalnum(ch) frm <cctype> instead of custom functions
    return (ch >= 'a' && ch <= 'z') ||
        (ch >= 'A' && ch <= 'Z') ||
        (ch >= '0' && ch <= '9');
}

bool isUpperCase(char ch){ //prefer std::isupperm(ch) frm <cctype> instead of custom functions
    return (ch >= 'A' && ch <= 'Z');
}

char toLowerCase(char ch){ //prefer std::tolower(ch) frm <cctype> instead of custom functions
    if(isUpperCase(ch)){
        return ch + 32;
    }
    return ch;
}

class Solution {
public:
    bool isPalindrome(std::string s) {
        if(s.size() == 0 || s.size() == 1) return true;

        std::vector<char> tempStr;
        for(size_t i=0; i<s.size(); i++){
            if(isAlphaNumeric(s[i])){
                if(isUpperCase(s[i])){
                    tempStr.push_back(toLowerCase(s[i]));
                    continue;
                }
                tempStr.push_back(s[i]);
            }
        }
        if(tempStr.size()==0 || tempStr.size()==1) return true;

        size_t i=0 , j=tempStr.size()-1;
        while(i<j){
            if(tempStr[i] != tempStr[j]) return false;
            i++;
            j--;
        }
        
        return true;
    }
};

int main(){
    return 0;
}