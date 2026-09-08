#include<iostream>
#include<vector>
#include<climits>



class Solution {
public:
    int firstStableIndex(std::vector<int>& nums, int k) {
        int maxTillI = INT_MIN;
        int minTillI = INT_MAX;

        for(int i=0; i<nums.size(); i++){
            maxTillI = std::max(maxTillI , nums[i]);
            minTillI = INT_MAX;
            for(int j=nums.size()-1; j>=i; --j){
                minTillI = std::min(minTillI , nums[j]);
            }
            int temp = maxTillI - minTillI;
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