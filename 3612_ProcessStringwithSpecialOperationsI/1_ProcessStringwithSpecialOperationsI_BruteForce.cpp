#include<iostream>


class Solution {
public:
    string processStr(string s) {
        if(s.size() == 0) return {};
        std::string result;
        for(size_t i=0; i<s.size(); ++i){
            if(s[i] >= 'a' && s[i] <= 'z') result.push_back(s[i]);
            else if(s[i] == '*'){
                if(!result.empty()) result.pop_back();
            }else if(s[i] == '#') result += result;
            else if(s[i] == '%') std::reverse(result.begin(),result.end());
        }
        return result;
    }
};


int main(){
    return 0;
}