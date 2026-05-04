#include<iostream>
#include<vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int highestProfit = 0;
        int temp = 0;
        for(int i=0; i<prices.size()-1; i++){
            for(int j=i; j<prices.size(); j++){
                temp = prices[j]-prices[i];
                if(temp > highestProfit){
                    highestProfit = temp;
                }
            }
        }
        return highestProfit;
    }
};


int main(){
    Solution sol;
    return 0;
}