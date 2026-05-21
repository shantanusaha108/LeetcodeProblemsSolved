#include<iostream>
#include<vector>
#include<climits>

using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        size_t KCount = 0;
        size_t lastDuplicateIndex = 0;
        int lastDuplicateElement = 0;
        for(size_t i=0 ;i<nums.size(); i++){
            if(i != 0 &&  nums[i]==nums[i-1] ){
                if(lastDuplicateElement == nums[i]){
                    continue;
                }
                lastDuplicateElement = nums[i];
                continue;
            }
            KCount++;
            nums[lastDuplicateIndex] = nums[i];
            lastDuplicateIndex++;
        }
        
        return KCount;
    }
};


int main(){
    std::vector<int> nums = {1, 2, 2, 2, 3};
    Solution sol;
    int count = sol.removeDuplicates(nums);
    for(size_t i=0; i<static_cast<int>(count); i++){
        std::cout<<nums[i]<<" ";
    }
    return 0;
}