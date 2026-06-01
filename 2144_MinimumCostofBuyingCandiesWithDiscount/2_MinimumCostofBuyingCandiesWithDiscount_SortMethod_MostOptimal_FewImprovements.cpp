#include<iostream>
#include<vector>
#include<algorithm>

class Solution{
    public:
        int minimumCost(std::vector<int>& cost){
            if(cost.size() == 0) return 0;

            std::sort(cost.rbegin(),cost.rend());
            int ans = 0;
            for(size_t i=0; i<cost.size(); i++){
                if(i%3 == 2) continue;
                ans += cost[i];
            }
            return ans;
        }
};

int main(){
    Solution sol;
    std::vector<int> cost = {6,5,7,9,2,2};
    std::cout<<sol.minimumCost(cost)<<std::endl;
    return 0;
}