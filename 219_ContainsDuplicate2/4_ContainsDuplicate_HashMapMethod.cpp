#include<iostream>
#include<vector>
#include<unordered_map>
#include<math>

class Solution{
	public:
		bool containsNearbyDuplicate(std::vector<int>& nums , int k){
			std::unordered_map<int,int> hashMap;
			for(size_t i=0; i<nums.size(); i++){
				if(hashMap.contains(nums[i])){
                    if( std::abs(hashMap[nums[i]]- (int)i) <= k){
                    return true;
                    }
				}
                hashMap[nums[i]] = (int)i;
			}
			return false;
		}
};