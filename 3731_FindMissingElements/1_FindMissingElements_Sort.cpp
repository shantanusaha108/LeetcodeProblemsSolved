#include<iostream>
#include<vector>
#include<algorithm>




//amar bhava samadhan
class Solution {
public:
    std::vector<int> findMissingElements(std::vector<int>& nums) {
        std::vector<int> result;
        std::sort(nums.begin(),nums.end());
        for(size_t i=1; i<nums.size(); ++i){
            if(nums[i]-1 != nums[i-1]){
                int missingNo = nums[i-1] + 1;
                while(missingNo < nums[i]){
                    result.push_back(missingNo);
                    missingNo++;
                }
            }
        }
        return result;
    }
};



int main(){
    return 0;
}