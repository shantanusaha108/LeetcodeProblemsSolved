#include<iostream>
#include<vector>
#include<algorithm>



//amar bhava samadhan
class Solution {
public:
    int maxProduct(std::vector<int>& nums) {
        std:sort(nums.begin(),nums.end());
        return std::max((nums[0]-1)*(nums[1]-1) , (nums[nums.size()-2]-1)*(nums[nums.size()-1]-1));
    }
};


int main(){
    return 0;
}