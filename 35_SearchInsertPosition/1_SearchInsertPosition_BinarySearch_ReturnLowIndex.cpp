#include<iostream>
#include<vector>


class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;

        int requiredIndex = 0;

        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target) return mid; 
            else if(target < nums[mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};

int main(){
    return 0;
}