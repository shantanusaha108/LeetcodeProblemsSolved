#include<iostream>
#include<vector>

class Solution{
	public:
		std::vector<int> twoSum(std::vector<int> nums , int target){

			// 2d vector in cpp for storing the nums elements with their actual index
			// otherwise we woudnt we able to get correct index after sorting
			std::vector<std::vector<int>> arr; // {value,index}
			for(size_t i=0; i<nums.size(); i++){
				arr.push_back({nums[i],i});//{value,index}
			}

			arr = mergeSort(&arr);
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

void mergeSort(std::vector<std::vector<int>> *arr, int low , int high){
		if(low<high){
			int mid = low + (high-low)/2;
			mergeSort(arr,low,mid);
			mergeSort(arr,mid+1,high);
			merge(arr,low,mid,high);
		}
	}

std::vector<std::vector<int>> merge(std::vector<std::vector<int>> *arr, int low, int mid, int high){
	int i = low;
	int j = mid+1;
	std::vector<std::vector<int>> arr2;
	while(i<=mid && j<=high){
		if((*arr)[0][i] < (*arr)[0][j]){
			arr2.push_back({(*arr)[0][i],arr[1][i]});
			i++;
		}else{
			arr2.push_back({arr[0][j],arr[1][j]});
			j++;
		}
	}
	while(i<=mid){
			arr2.push_back({arr[0][i],arr[1][i]});
			i++;
		}

	while(j<=high){
		arr2.push_back({arr[0][j],arr[1][j]});
		j++;
	}

	//coping arr2 into arr
	for(size_t i=0; i<arr2.size(); i++){
		(*arr)[low+i] = arr2[i];//due to recurrsion here low gives us the index
		//of the first element in the particular version of the vector
		//and i acts as the offset
	}
}


	



	int main(){
		return 0;
	}
