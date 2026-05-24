#include<iostream>
#include<vector>
#include<climits>
#include<unordered_map>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];

        std::unordered_map<int,int> hashMap;
        for(size_t i=0; i<nums.size(); i++){
            hashMap[nums[i]] ++;
        }

        int reqElement = INT_MIN;
        for(const auto& pair : hashMap){
            if(pair.second > nums.size()/2 && pair.second>hashMap[reqElement]){
                //in the above like has for the very first time reqElement = INT_MIN
                //so it creates a new entry in the hashMap as {INT_MIN , 0}
                reqElement = pair.first;
            }
        }
        return reqElement;
    }
};
// Time Complexity : O(n+k) , n-> no of elements in nums
//                            k-> no of keys in Hash Map 



int main(){
    Solution sol;
    std::vector<int> nums = {2,2,1,1,1,2,2};
    std::cout<<"Required Element is : "<<sol.majorityElement(nums)<<std::endl;
    return 0;
}