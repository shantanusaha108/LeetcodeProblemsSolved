#include<iostream>
#include<vector>
#include<algorithm>

void printVec(const std::vector<int>& cost){
    for(const auto& elem : cost){
        std::cout<<elem<<", ";
    }
    std::cout<<std::endl;
}

class Solution {
public:
    int minimumCost(std::vector<int>& cost) {
        std::sort(cost.begin(),cost.end());
        printVec(cost);
        int totalCost = 0;
        int high = cost.size()-1;
        while(high >= 0){
            if(high == 0){
                totalCost += cost[high];
                break;
            } 
            int low = high - 1; 
            totalCost += cost[high] + cost[low];
            if(low == 0){
                break;
            }else{
                high = low-2;
            }
        }
        return totalCost;
    }
};

int main(){
    Solution sol;
    std::vector<int> cost = {6,5,7,9,2,2};
    std::cout<<sol.minimumCost(cost)<<std::endl;
    return 0;
}