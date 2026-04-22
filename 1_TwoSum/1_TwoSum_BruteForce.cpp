// 1. Two Sum
// Easy
// Hint
// Given an array of integers nums and an integer target, return indices of the two 
// numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not
//  use the same element twice.
// You can return the answer in any order.

 
// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]
 

// Constraints:
// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.
 

#include<iostream>
#include<vector>

class Solution{
	public:
		std::vector<int> twoSum(std::vector<int> &nums , int target){
			for(size_t i=0 ;i<nums.size(); i++){
				for(size_t j=i+1 ; j<nums.size(); j++){
					if(nums[i] + nums[j] == target){
						return {i,j};
					}
				}
			} 
            return {};
		}
};	






int main(){
    std::vector<int> nums ;
    std::cout<<"Enter the total number of elements : "<<std::endl;
    int size_of_nums;
    std::cin>>size_of_nums;
    int temp;
    for(size_t i=0;i<size_of_nums;i++){
        std::cout<<"Enter the "<<i<<" element of the array : "<<std::endl;
        std::cin>>temp;
        nums.push_back(temp);
    }
    int target=0;
    std::cout<<"Enter the target sum : "<<std::endl;
    std::cin>>target;

    Solution sol;
    std::vector<int> answer = sol.twoSum(nums,target);
    if(answer.size()==2){
            std::cout<<"The required elements are found at index : "<<answer[0]<<" and "<<answer[1]<<std::endl;
    }else{
        std::cout<<"No valid elements"<<std::endl;
    }
	return 0;
}
