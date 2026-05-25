#include<iostream>
#include<string>
#include<unordered_set>


class Solution {
public:
    char repeatedCharacter(std::string s) {
        std::unordered_set<char> hashSet;
        hashSet.reserve(s.size());
        for(size_t i=0; i<s.size(); ++i){
            if(hashSet.contains(s[i])){
                return s[i];
            }
            hashSet.insert(s[i]);
        }
        return ' ';
    }
};


int main(){
    return 0;
}