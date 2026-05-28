#include<iostream>
#include<vector>
#include<cctype>
#include<climits>
#include<algorithm>

class Solution {
public:
    int threeSumClosest(std::vector<int>& nums, int target) {
        if(nums.size()==0) return 0;

        int closestValue = nums[0] + nums[1] + nums[2];
        std::sort(nums.begin(),nums.end());

        int left = 0;
        while(left<nums.size()-2){
            int middle = left+1;
            int right = nums.size()-1;
            while(middle<right){
                int sum = nums[left] + nums[middle] + nums[right];
                if(sum == target) return sum;
                if(std::abs(sum-target) < std::abs(closestValue-target)){
                    closestValue = sum;
                }
                if(sum < target) middle++;
                else if(sum > target) right--;
                else return closestValue; 
            }
            left++;
        }
        return closestValue;
    }
};




int main(){
    Solution sol;
    std::vector<int> nums = {0,0,0};
    std::cout<<sol.threeSumClosest(nums,1)<<std::endl;
    return 0;
}