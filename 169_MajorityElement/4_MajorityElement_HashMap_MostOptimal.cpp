#include<iostream>
#include<vector>
#include<climits>
#include<unordered_map>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];

        
        int reqElement = nums[0];
        int count = 1;
        for(size_t i=1; i<nums.size(); i++){
            if(count == 0){
                reqElement = nums[i];
            }
            if(reqElement == nums[i]){
                count++;
            }else{
                count --;
            }
        }
        // Boyer-Moore Majority vote algorithm

        return reqElement;
    }
};

// Time Complexity : O(n) ,n-> no of elements in nums


int main(){
    Solution sol;
    std::vector<int> nums = {2,2,1,1,1,2,2};
    std::cout<<"Required Element is : "<<sol.majorityElement(nums)<<std::endl;
    return 0;
}