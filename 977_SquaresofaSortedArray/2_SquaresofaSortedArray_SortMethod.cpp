#include<iostream>
#include<vector>
#include<algorithm>


class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        if(nums.size()==0) return {};
        for(size_t i=0; i<nums.size(); i++){
            nums[i] = nums[i] * nums[i];
        }
        std::sort(nums.begin(),nums.end());
        return nums;
    }
};


int main(){
    return 0;
}