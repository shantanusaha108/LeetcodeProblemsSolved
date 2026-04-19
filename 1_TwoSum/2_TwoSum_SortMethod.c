#include<iostream>
#include<vector>

class Solution{
	public:
		std::vector<int> twoSum(std::vector<int> nums , int target){

			if(nums.empty()){
			std::cout<<"No data found"<<std::endl;
			return{} ;
		}

			// 2d vector in cpp for storing the nums elements with their actual index
			// otherwise we woudnt we able to get correct index after sorting
			std::vector<std::vector<int>> arr; // {value,index}
			arr.reserve(nums.size());
			
			for(size_t i=0; i<nums.size(); i++){
				arr.push_back({nums[i],i});//{value,index}
			}

			if (!arr.empty()) {
    			mergeSort(&arr, 0, arr.size()-1); //defensive programming
			}
	
			for(size_t i=0; i<arr.size(); i++){
				int temp = target-arr[i][0];
				int index=0;
				if(binarySearch(&arr,temp,i+1,arr.size()-1,&index)){
					return {arr[i][1],index};
				}
			}
			return {};
		}

			
	bool binarySearch(std::vector<std::vector<int>> *arr, int target, int low, int high, int *index){
		while(low<=high){
			int mid = low + (high - low) / 2;//protection against integer overflow
			if((*arr)[mid][0]==target){
				*index = (*arr)[mid][1];
				return true;
			}else if((*arr)[mid][0]<target){
				low=mid+1;
			}else{
				high=mid-1;
			}
		}
		return false;
	}

	void mergeSort(std::vector<std::vector<int>> *arr, int low , int high){
		if(low<high){
			int mid = low + (high-low)/2;
			mergeSort(arr,low,mid);
			mergeSort(arr,mid+1,high);
			merge(arr,low,mid,high);
		}
	}

	void merge(std::vector<std::vector<int>> *arr, int low, int mid, int high){
		int i = low;
		int j = mid+1;
		std::vector<std::vector<int>> arr2;
		while(i<=mid && j<=high){
			if((*arr)[i][0] < (*arr)[j][0]){
				arr2.push_back((*arr)[i]);
				i++;
			}else{
				arr2.push_back((*arr)[j]);
				j++;
			}
		}
		while(i<=mid){
				arr2.push_back((*arr)[i]);
				i++;
			}

		while(j<=high){
			arr2.push_back((*arr)[j]);
			j++;
		}

		//coping arr2 into arr
		for(size_t i=0; i<arr2.size(); i++){
			(*arr)[low+i] = arr2[i];//due to recurrsion here low gives us the index
			//of the first element in the particular version of the vector
			//and i acts as the offset and yes this copies the entire 2d vector
		}
	}
};



	



int main(){
	return 0;
}
