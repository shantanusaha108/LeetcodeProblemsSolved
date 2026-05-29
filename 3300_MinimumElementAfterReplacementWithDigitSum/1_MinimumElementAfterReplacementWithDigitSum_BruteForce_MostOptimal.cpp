#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>


class Solution {
public:
    int minElement(std::vector<int>& nums) {
        if(nums.empty()) return 0;

        int ans = INT_MAX;
        for(size_t i=0; i<nums.size(); i++){
            int sum = 0;

            while(nums[i] > 0){
                sum += nums[i] % 10;

                nums[i] = nums[i] / 10;
            }

            ans = std::min(ans , sum);
        }
        return ans;
    }
};

int main(){
    return 0;
}