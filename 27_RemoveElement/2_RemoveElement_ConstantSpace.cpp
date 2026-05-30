#include<iostream>
#include<vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int count = 0;
        for(size_t i=0; i<nums.size(); i++){
            if(nums[i] == val){
                nums.erase(nums.begin() + i);
                continue;
            }
          
        }
        return nums.size();
    }
};


int main(){
    Solution sol;
    std::vector<int> nums = {3,2,2,3};
    std::cout<<sol.removeElement(nums,3);
    return 0;
}