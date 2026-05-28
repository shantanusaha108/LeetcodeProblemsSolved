#include<iostream>
#include<vector>
#include<cctype>
#include<climits>

class Solution {
public:
    int threeSumClosest(std::vector<int>& nums, int target) {
        if(nums.size()==0) return 0;

        int closetValue = nums[0] + nums[1] + nums[2];

        for(size_t i=0; i<nums.size()-2; i++){
            for(size_t j=i+1; j<nums.size()-1; j++){
                for(size_t k=j+1; k<nums.size(); k++){
                    int sum = nums[i] + nums[j] + nums[k];
                    if(sum == target) return sum;
                    if(std::abs(sum-target) <= std::abs(closetValue-target)){
                        closetValue = sum;
                    }
                }
            }
        }
        return closetValue;
    }
};


int main(){
    Solution sol;
    std::vector<int> nums = {0,0,0};
    std::cout<<sol.threeSumClosest(nums,1)<<std::endl;
    return 0;
}