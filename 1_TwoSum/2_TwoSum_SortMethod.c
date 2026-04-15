#include<iostream>
#include<vector>

class Solution{
    public:
        std::vector<int> twoSum(std::vector<int> nums , int target){
            for(size_t i=0; i<nums.size(); i++){

            }
        }
};

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
