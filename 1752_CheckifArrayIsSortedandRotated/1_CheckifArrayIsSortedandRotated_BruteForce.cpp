#include<iostream>
#include<vector>
#include<algorithm>


class Solution {
public:
    bool check(std::vector<int>& nums) {
        if(nums.size()==0) return false;
        if(nums.size()==1) return true;
        
        std::vector<int> nums2 = nums;
        std::sort(nums2.begin() , nums2.end());

        std::vector<int> nums3(nums2.size(),0);

        for(size_t x=0; x<nums2.size(); x++){
            for(size_t i=0; i<nums2.size(); i++){
                nums3[i] = nums2[(i+x) % nums2.size()];
                //value of x is between 0 and n-1 , 
                //where n is size of the array/vector
            }
            if(nums3 == nums) return true;
        }

        return false;
    }
};


int main(){
    Solution sol;
    std::vector<int> nums = {1,2,3};
    std::cout<<"Is the Array/Vector{";
    for(size_t i=0; i<nums.size(); i++){
        if(i==nums.size()-1) {
            std::cout<<nums[i];
            continue;    
        }
        std::cout<<nums[i]<<",";
    }
    std::cout<<"} , Sorted(in Ascending Order) and then Rotated : "
    << (sol.check(nums) != 0 ? "True" : "False") <<std::endl;
    return 0;
}