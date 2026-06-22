#include<iostream>
#include<vector>
#include<string>

//amar bhava samadhan
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
            int temp = 0;
            for(auto ch : balloon){
                if(letterCount[ch - 'a'] > 0){
                    temp ++;
                    letterCount[ch - 'a'] -- ;
                }else{
                    return balloonCount;
                }
            }
            if(temp == 7) balloonCount++;
        }

        return balloonCount;
    }
};

int main(){
    return 0;
}