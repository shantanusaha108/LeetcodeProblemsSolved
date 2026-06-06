#include<iostream>
#include<vector>


class Solution {
public:
    std::vector<int> leftRightDifference(std::vector<int>& nums) {
        if(nums.size() == 0) return {};

        int totalSum = 0 ;
        for(auto elem : nums){
            totalSum += elem;
        }

        std::vector<int> answer;
        answer.reserve(nums.size());
        int leftSum = 0;
        for(auto elem : nums){
            answer.push_back(std::abs(leftSum - (totalSum - leftSum - elem)));
            leftSum += elem;
        }

        return answer;
    }
};

int main(){
    return 0;
}