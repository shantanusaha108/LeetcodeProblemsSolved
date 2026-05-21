#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>


class Solution {
public:
    void nextPermutation(std::vector<int>& nums) {
        if(nums.size()==0) return;

        int pivot=-1;

        //to find the pivot element
        for(int i=(int)nums.size()-1; i>=0; i--){
            if(i == (int)nums.size()-1) continue;
            if(nums[i] < nums[i+1]){
                pivot = i;
                break;
            }
        }
        //-1 means no pivot found , so we reverse the 
        // entire vector and that will be the answer
        if(pivot == -1){
            std::reverse(nums.begin(),nums.end());
            return;
        }

        //to find the first element greater than pivot element 
        //and then swapping em
        int minimumIndex = 0;
        for(int i=(int)nums.size()-1; i>pivot; i++){
            if(nums[i] > nums[pivot]){
                minimumIndex = i;
                break;
            }
        }

        std::swap(nums[pivot] , nums[minimumIndex]);

        //now we reverse the part of vector starting from the index after pivot
        //still the last element of the vector
        int left = pivot+1;
        int right = nums.size()-1;
        while(left < right){
            std::swap(nums[left] , nums[right]);
            left++;
            right--;
        }
    }
};

int main(){
    Solution sol;
    std::vector<int> nums = {3,2,1}; 
    sol.nextPermutation(nums);
    for(auto elem : nums ){
        std::cout<<elem<<", ";
    }
    return 0;
}