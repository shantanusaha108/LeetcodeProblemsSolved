#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<string>


class Solution {
public:
    int maxNumberOfBalloons(std::string text) {
        std::vector<size_t> letterCount(26,0);
    
        for(auto ch : text){
            letterCount[ch - 'a'] ++;
        }


        size_t temp = INT_MAX;
        std::string balloon = "balloon";
        for(auto ch : balloon){
            if(ch == 'l' || ch == 'o'){
                temp = std::min(temp , letterCount[ch-'a']/2 );
                continue;
            }
            temp = std::min(temp , letterCount[ch-'a']);
                
        }

        return temp;
    }
};


int main(){
    return 0;
}