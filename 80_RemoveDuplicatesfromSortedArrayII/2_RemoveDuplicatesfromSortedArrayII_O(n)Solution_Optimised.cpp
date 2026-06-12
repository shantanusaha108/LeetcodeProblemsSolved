#include<iostream>
#include<vector>


//this is O(n) solution most optimised sol for this problem
//but we can make some minor optimizations 
class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int count=1;
        int k = 1;
        for(size_t i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                if(count<2){
                    nums[k] = nums[i];
                    k++;
                }
                count++;
            }else{
                count = 1;
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};


int main(){
    return 0;
}