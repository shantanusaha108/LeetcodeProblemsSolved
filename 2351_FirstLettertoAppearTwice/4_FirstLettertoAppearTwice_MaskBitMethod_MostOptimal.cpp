#include<iostream>
#include<vector>
#include<string>


class Solution {
public:
    char repeatedCharacter(std::string s) {
        int mask = 0;

        for(size_t i=0; i<s.size(); ++i){
            int bit = s[i] - 'a';

            if(mask & (1 << bit)){ //mask AND (1<<bit) results in 
            // 1 if required bit is already 1
                return s[i];
            }

            mask |= (1 << bit);// mask OR = (1 left_shift bit) , where bit = s[i] - 'a'
            //turns the required bit to 1
        }
        return ' ';
    }
};//slightly more optimal than hashSet


int main(){
    return 0;
}