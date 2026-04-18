#include<iostream>
#include<vector>

class Solution{
	public:
		std::vector<int> twoSum(std::vector<int> nums , int target){
			nums = mergeSort(&nums);
			for(size_t i=0; i<nums.size(); i++){
				int temp = target-nums[i];
				int index=0;
				if(binarySearch(&nums,temp,0,nums.size(),&index)){
					return {i,index};
				}
			}
			return {};
		}
};

boolean binarySearch(std::vector<int> nums, int target, int low, int high, int *index){
	int mid;
	while(low<high){
		mid = left + (right - left) / 2;#protection against integer overflow
		if(arr[mid]==target){
			*index = mid;
			return true;
		}else if(arr[mid]<target){
			low=mid+1;
		}else{
			high=mid-1;
		}
	}
}


std::vector<int> merge(std::vector<int> *nums, int low, int mid, int high){
	int i = low;
	int j = mid;

	while(i<=mid && j<=high){
		if(nums[i] < nums[j]){
			arr[k].push_back(nums[i]);
			i++;
			k++;
		}else{
			arr[k].push_back(nums[j]);
			k++;
			j++;
		}

		while(i<=mid){
			arr[k].push_back(nums[i]);
			i++;
			k++;
		}

		while(j<=high){
			arr[k].push_back(nums[j]);
			j++;
			k++;
		}
	}


	std::vector<int> mergeSort(std::vector<int> *nums){
		int low = 0;
		int high = nums.size()-1;
		int mid = (low+high)/2;
		if(low<high){
			mergeSort(&nums,low,mid);
			mergeSort(&nums,mid+1,high);
			merge(&nums,low,mid,high);
		}
		return nums;
	}



	int main(){
		return 0;
	}
