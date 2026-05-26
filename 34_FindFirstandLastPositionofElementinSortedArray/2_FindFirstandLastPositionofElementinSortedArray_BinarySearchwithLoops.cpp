#include<iostream>
#include<vector>

class Solution {
public:
    std::vector<int> searchRange(std::vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        if(nums.size()==1 && target == nums[0]){
            return {0,0}; 
        }
        int low  = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                int lowEndIndex = mid;
                int highEndIndex = mid;
                while(lowEndIndex-1 >= 0 && nums[lowEndIndex-1] == target ){
                    lowEndIndex--;
                }
                while(highEndIndex+1 < nums.size() && nums[highEndIndex+1] == target){
                    highEndIndex++;
                }
                return {lowEndIndex,highEndIndex};
            }
            else if(nums[mid] < target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return {-1,-1};
    }
};


int main(){
    return 0;
}