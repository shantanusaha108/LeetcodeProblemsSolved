#include<iostream>
#include<vector>




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
        
        bool presentOrNot[51]= {};
        for(const auto& elem : nums){
            presentOrNot[elem] = true;
        }

        while(sum<=50 && presentOrNot[sum]){//cause the constraints are num[i]<=50
            sum++;
        }

        return sum;
    }
};


int main(){
    return 0;
}