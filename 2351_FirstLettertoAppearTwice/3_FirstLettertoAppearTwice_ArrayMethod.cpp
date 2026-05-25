#include<iostream>
#include<vector>
#include<string>


class Solution {
public:
    char repeatedCharacter(std::string s) {
        std::vector<int> count(26,0);
        for(size_t i=0; i<s.size(); ++i){
            count[s[i] - 'a'] ++ ;
            if(count[s[i] - 'a'] == 2){
                return s[i];
            }
        }
        return ' ';
    }
};//slightly more optimal than hashSet


int main(){
    return 0;
}