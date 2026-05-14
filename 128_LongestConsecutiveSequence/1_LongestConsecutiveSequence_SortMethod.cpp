#include<iostream>
#include<vector>


class Solution{
	public:
		int longestConsecutive(std::vector<int>& nums){
			if(nums.size()==0) return 0;

			std::sort(nums.begin(),nums.end());

			int longestSize = 1;
			int tempLongestSize = 1;
			for(size_t i=0; i<nums.size()-1; i++){
				if(nums[i]+1 == nums[i+1]){
					tempLongestSize ++;
				}
				else if(nums[i] == nums[i+1]){
					continue;
				}
				else{
					if(longestSize < tempLongestSize){
						longestSize = tempLongestSize;
					}
					tempLongestSize = 1;
				}
			}
			if(longestSize < tempLongestSize){
				longestSize = tempLongestSize;
			}
			return longestSize;
		}
};


int main(){
	return 0;
}




