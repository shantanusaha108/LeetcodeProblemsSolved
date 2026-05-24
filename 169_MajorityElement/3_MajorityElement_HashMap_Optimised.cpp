#include<iostream>
#include<vector>
#include<climits>
#include<unordered_map>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];

        int sizeOfNums = static_cast<int>(nums.size());
        std::unordered_map<int,int> hashMap;
        for(const auto& elem : nums){
            hashMap[elem] ++;

            if(hashMap[elem] > sizeOfNums/2){//there can be only one element whose frequency
                //is greater than nums.size()/2
                return elem;
            }
        }
        return -1;
    }
};

// Time Complexity : O(n) ,n-> no of elements in nums


int main(){
    Solution sol;
    std::vector<int> nums = {2,2,1,1,1,2,2};
    std::cout<<"Required Element is : "<<sol.majorityElement(nums)<<std::endl;
    return 0;
}