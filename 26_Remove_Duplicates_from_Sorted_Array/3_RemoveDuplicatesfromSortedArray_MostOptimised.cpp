#include<iostream>
#include<vector>


class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        size_t KCount = 0;
        for(size_t i=0 ;i<nums.size(); i++){
            if(i != 0 &&  nums[i]==nums[i-1] ){
                continue;                                
            }

            //to prevent coping same thing at the same index
            //will be insignificant in case of int 
            //but for larger and complex inputs will have 
            //huge performance boost
            if(KCount != i){
                nums[KCount] = nums[i];
            }
            KCount++;
        }
        
        return KCount;
    }
};


int main(){
    return 0;
}