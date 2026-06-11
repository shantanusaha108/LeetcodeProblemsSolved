#include<iostream>
#include<vector>

class Solution{
    public:
        int maxProfit(std::vector<int>& prices){
            int minProfit = INT_MAX;
            int maxProfit = 0;
            for(size_t i=0; i<prices.size(); i++){
                if(prices[i] < minProfit){
                    minProfit = prices[i];
                }else{
                    maxProfit = max(maxProfit , prices[i]-minProfit);
                }
            }
            return maxProfit;
        }
};


int main(){
    return 0;
}