#include<iostream>
#include<vector>
#include<unordered_set>


class Solution{
	public:
		bool containsDuplicate(std::vector<int>& nums){
			std::unordered_set<int> hashSet;
			for(size_t i=0; i<nums.size(); i++){
                if(hashSet.contains(nums[i])){
                    return true;
                }
                hashSet.insert(nums[i]);
			}
			return false;
		}
};

