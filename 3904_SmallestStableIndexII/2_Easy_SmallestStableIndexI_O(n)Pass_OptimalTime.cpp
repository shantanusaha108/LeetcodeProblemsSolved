#include<iostream>
#include<vector>
#include<climits>



class Solution {
public:
    int firstStableIndex(std::vector<int>& nums, int k) {
        int maxTillI = INT_MIN;
        std::vector<int> minTillI(nums.size(),0);

        minTillI[nums.size()-1] = nums[nums.size()-1];
        for(int i=nums.size()-2; i>=0; --i){
            int temp = std::min(minTillI[i+1], nums[i]);
            minTillI[i] = temp;
        }

        for(size_t i=0; i<nums.size(); i++){
            maxTillI = std::max(maxTillI , nums[i]);
            int temp = maxTillI - minTillI[i];
            if(temp <= k){
                return i;
            }
        }
        return -1;
    }
};

int main(){
    return 0;
}