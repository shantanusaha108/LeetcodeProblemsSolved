#include<iostream>
#include<vector>
#include<set>
#include<algorithm>


class Solution {
    public:
        std::vector<std::vector<int>> fourSum(std::vector<int> nums, int target) {
            if (nums.size() < 4) return {};

            std::vector<std::vector<int>> result;
            std::set<std::vector<int>> mySet;
            for (size_t i = 0; i < nums.size() - 3; i++) {
                for (size_t j = i + 1; j < nums.size() - 2; j++) {
                    for (size_t k = j + 1; k < nums.size() - 1; k++){
                        for (size_t l = k + 1; l < nums.size(); l++){
                            long long sum = static_cast<long long>(nums[i]) 
                            + nums[j] + nums[k] +nums[l];
                            if(sum == target){
                                std::vector<int> temp= {nums[i] ,nums[j] , nums[k] , nums[l]};
                                std::sort(temp.begin(),temp.end());
                                mySet.insert(temp);
                            } 
                        }
                    }   
                }
            }
            return result = {
                mySet.begin() , mySet.end()
            };
        }
};


int main(){
    Solution sol;
    std::vector<std::vector<int>> result = sol.fourSum({1,0,-1,0,-2,2},0);
    for(auto elem : result){
        for(auto elem2 : elem){
            std::cout<<elem2<<",";
        }
        std::cout<<"  ";
    }
    return 0;
}