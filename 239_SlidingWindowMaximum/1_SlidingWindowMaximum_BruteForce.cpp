
#include<iostream>
#include<vector>
#include <climits>//C-limits for limits like INT_MIN

class Solution{
    public:
        std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k){
            if(nums.size() == 0) return {0};
			if(nums.size() == 1) return {nums[0]};
            std::vector<int> result;
            int kValue = static_cast<size_t> k;//use cpp-style static_cast<type> instead of c-style (type)
            for(size_t i=0; i<nums.size(); i++){
                if(i+kValue > nums.size()) break;//to prevent the index going out of bounds
                int maxValue = INT_MIN;
                size_t j = i;
                while(j < i+kValue){
                    maxValue = std::max(maxValue,nums[j]);
                    j++;
                }
                result.push_back(maxValue);
            }
            return result;
        }
};


int main(){

    std::vector<int> nums = {1,3,-1,-3,5,3,6,7};
    Solution sol;
    std::vector<int> result = sol.maxSlidingWindow(nums,3);
    for(auto st : result){
        std::cout<<st<<" ";
    }
    std::cout<<std::endl;

    std::vector<int> nums2 = {1};
    Solution sol2;
    result.clear();
    result = sol2.maxSlidingWindow(nums2,1);
    for(auto st : result){
        std::cout<<st<<" ";
    }
    std::cout<<std::endl;

    std::vector<int> nums3 = {
                                9,10,9,-7,-4,-8,2,-6,
                                5,3,8,1,7,12,6,14,
                                13,0,5,11,2,15,4,16,
                                3,17,1,18,0,19,-1,20,
                                5,4,3,2,1,0,-1,-2,
                                100,99,98,97,96,95,94,93,
                                50,60,70,80,90,85,75,65,
                                55,45,35,25,15,5,4,3
                            };
    Solution sol3;
    result.clear();
    result = sol3.maxSlidingWindow(nums3,5);
    for(auto st : result){
        std::cout<<st<<" ";
    }
    std::cout<<std::endl;
    return 0;
}