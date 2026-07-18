#include<iostream>
#include<vector>
#include<algorithm>




//amar bhava samadhan
class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        std::sort(nums.begin() , nums.end());

        return gcd(nums[0] , nums[nums.size()-1]);
    }
};


int main(){
    return 0;
}