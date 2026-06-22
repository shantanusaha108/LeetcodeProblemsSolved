#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

class Solution {
public:
    int maxNumberOfBalloons(std::string text) {
        std::vector<size_t> letterCount(26,0);
    
        for(auto ch : text){
            letterCount[ch - 'a'] ++;
        }


        return std::min({
            letterCount['b' - 'a'],
            letterCount['a' - 'a'],
            letterCount['l' - 'a']/2,
            letterCount['o' - 'a']/2,
            letterCount['n' - 'a']
        });
    }
};

int main(){
    return 0;
}
