#include<iostream>
#include<vector>



class Solution {
public:
    std::vector<int> leftRightDifference(std::vector<int>& nums) {
        if(nums.size() == 0) return {};
        int numsSize = static_cast<int>(nums.size());

        std::vector<int> left;
        std::vector<int> right(numsSize,0);
      

        int low = 0;
        int high = numsSize - 1;

        int leftSums = 0;
        int rightSums = 0;
        while(low < numsSize && high >= 0){
            if(low == 0){
                left.push_back(0);
                leftSums += nums[low];
                low++;
            }else{
                left.push_back(leftSums);
                leftSums += nums[low];
                low++;
            }

            if(high == numsSize-1){
                right[high] = 0;
                rightSums += nums[high];
                high--;
            }else{
                right[high] = rightSums;
                rightSums += nums[high];
                high--;
            }
        }

        std::vector<int> answer;
        // std::reverse(right.begin(),right.end());
        for(size_t i=0; i<left.size(); ++i){
            answer.push_back(std::abs(left[i] - right[i]));
        }
        return answer;
    }
};

int main(){
    return 0;
}