#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
#include<climits>





class Solution {
public:
    std::vector<int> findMissingElements(std::vector<int>& nums) {
        std::vector<int> result;
        std::unordered_set<int> hashSet;
        int minNums = INT_MAX;
        int maxNums = INT_MIN;
        for(size_t i=1; i<nums.size(); ++i){
            hashSet.insert(nums[i]);
            if(nums[i] > maxNums) maxNums = nums[i];
            if(nums[i] < minNums) minNums = nums[i];
        }
        for(size_t i=minNums; i<=maxNums; ++i){
            if(hashSet.contains(i)) continue;
            else result.push_back(i);
        }
        return result;
    }
};



int main(){
    return 0;
}