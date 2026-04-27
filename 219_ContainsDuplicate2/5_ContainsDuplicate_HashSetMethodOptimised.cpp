#include<iostream>
#include<vector>
#include<unordered_set>

class Solution{
	public:
		bool containsNearbyDuplicate(std::vector<int>& nums , int k){
			std::unordered_set<int> hashSet;
			for(size_t i =0; i<nums.size(); i++){
				if(hashSet.contains(nums[i])){return true;}
				hashSet.insert(nums[i]);
				if(hashSet.size() > k){
					hashSet.erase(nums[i-k]);
				}
			}
            return false;
		}
};