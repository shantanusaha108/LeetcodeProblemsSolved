#include<iostream>
#include<vector>
#include<algorithm>


class Solution {
public:
    int findKthLargest(std::vector<int>& nums, int k) {
        if(nums.size() == 0) return 0;
        
        std::sort(nums.begin() , nums.end());

        return nums[nums.size()-k];
    }
};

int main(){
    Solution sol;
    return 0;
}