#include<iostream>
#include<vector>
#include<unordered_set>
#include<climits>





class Solution {
public:
    std::vector<int> findMissingElements(std::vector<int>& nums) {
        std::vector<int> result;

        std::unordered_set<int> hashSet(nums.begin() , nums.end());
        int minNums = *min_element(nums.begin() , nums.end());
        int maxNums = *max_element(nums.begin() , nums.end());
        
        for(size_t i=minNums; i<=maxNums; ++i){
            if(!hashSet.contains(i)) result.push_back(i);
        }
        return result;
    }
};



int main(){
    return 0;
}