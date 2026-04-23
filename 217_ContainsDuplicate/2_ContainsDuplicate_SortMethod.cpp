#include<iostream>
#include<vector>
#include<algorithm>

class Solution{
	public:
		bool containsDuplicate(std::vector<int>& nums){
            if (nums.size() < 2) return false;
			std::sort(nums.begin(), nums.end());
			for(size_t i=0; i<nums.size()-1; i++){
				if(nums[i] == nums[i+1]){
					return true;
				}
			}
			return false;
		}
};

int main(){
	return 0;
}
