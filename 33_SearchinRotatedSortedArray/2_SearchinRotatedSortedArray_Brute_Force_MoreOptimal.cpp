#include<iostream>
#include<vector>


class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            if(nums[low] == target) return low;
            if(nums[high] == target) return high;
            low++;
            high--;
        }
        return -1;
    }
};

int main(){
    return 0;
}