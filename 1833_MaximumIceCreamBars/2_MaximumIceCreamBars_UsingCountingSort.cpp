#include<iostream>
#include<algorithm>


//amar bhava samadhan kintu idea by chatgpt
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        std::vector<int> numberCount(100001,0);

        for(auto ch : costs){
            numberCount[ch] ++;
        }

        int count = 0;
        int temp = 0;
        for(size_t i=0; i<numberCount.size(); i++){
            if(temp + (i*numberCount[i]) <= coins ){
                temp += i*numberCount[i];
                count += numberCount[i];
                continue;
            }else if(temp + numberCount[i] <= coins ){
                while(temp + numberCount[i] <= coins){
                    temp += i*numberCount[i];
                    count += numberCount[i];
                }
            }
        }
        return count;
    }
};

int main(){
    return 0;
}