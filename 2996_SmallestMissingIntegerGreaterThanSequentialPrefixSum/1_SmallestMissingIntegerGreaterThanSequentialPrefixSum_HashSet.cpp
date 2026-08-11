#include<iostream>
#include<unordered_set>
#include<vector>




//amar bhava samadhan
class Solution {
public:
    int missingInteger(std::vector<int>& nums) {
       
        int i = 0;
        int sum = 0;
        while(i<nums.size()){
            if(i!=0 && nums[i-1]+1 != nums[i]) break;
            sum += nums[i];
            ++i;
        }
        std::unordered_set<int> hashSet(nums.begin()+(i-1),nums.end());
        while(true){
            if(!hashSet.contains(sum)) return sum;
            else sum++;
        }
    }
};


int main(){
    return 0;
}