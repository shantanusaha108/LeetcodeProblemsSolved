




#include<iostream>
#include<vector>

int leftMostIndex(std::vector<int>& nums , int target){
	int low = 0;
	int high = nums.size()-1;
	int ans = -1;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(nums[mid]==target){
			ans = mid;
			high = mid-1;
		}else if(nums[mid]<target){
			low = mid+1;
		}else{
			high = mid-1;
		}
	}
	return ans;
}


int rightMostIndex(std::vector<int>& nums , int target){
	int low = 0;
	int high = nums.size()-1;
	int ans = -1;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(nums[mid]==target){
			ans = mid;
			low = mid+1;
		}else if(nums[mid]<target){
			low = mid+1;
		}else{
			high = mid-1;
		}
	}
	return ans;
}


class Solution{
	public:
		std::vector<int> searchaRange(std::vector<int>& nums, int target){
		return {
			leftMostIndex(nums,target),
			rightMostIndex(nums,target)
		};	
		}
};



int main(){
	return 0;
}
