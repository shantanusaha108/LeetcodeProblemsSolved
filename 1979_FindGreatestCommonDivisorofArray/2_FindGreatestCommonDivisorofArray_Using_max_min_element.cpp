#include<iostream>
#include<vector>
#include<numeric>




//amar bhava samadhan
class Solution {
public:
    int findGCD(vector<int>& nums) {
    
        return gcd(*std::max_element(nums.begin(),nums.end()),*std::min_element(nums.begin(),nums.end()));
    }
};


int main(){
    return 0;
}