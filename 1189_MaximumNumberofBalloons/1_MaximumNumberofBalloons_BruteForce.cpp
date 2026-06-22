#include<iostream>
#include<vector>
#include<string>

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        std::vector<int> letterCount(26,0);
    
        for(auto ch : text){
            letterCount[ch - 'a'] ++;
        }

        int balloonCount = 0;
        std::string balloon = "balloon";
        while(true){
            int tempCount = 0;
            for(auto ch : balloon){
                if(letterCount[ch - 'a'] > 0){
                    tempCount ++;
                    letterCount[ch - 'a'] -- ;
                }else{
                    return balloonCount;
                }
            }
            if(tempCount == 7) balloonCount++;
        }

        return balloonCount;
    }
};


int main(){
    return 0;
}