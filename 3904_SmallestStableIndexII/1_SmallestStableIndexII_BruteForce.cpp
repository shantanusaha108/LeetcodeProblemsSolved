#include<iostream>
#include<vector>
#include<climits>



//error : runtime error: addition of unsigned offset to 0x502000000090
// overflowed to 0x50200000008c (stl_vector.h)
// for(size_t i=0;....)
//     for(int j=num.size(); j>=i; --j)
//since size_t i can hold lots of more info j gets converted to size_t(unsigned int)
//in the very first iteration when i=0 , so j gets decremented to 0 and then again
//that leads to the above error

class Solution {
public:
    int firstStableIndex(std::vector<int>& nums, int k) {
        int maxTillI = INT_MIN;
        int minTillI = INT_MAX;

        for(int i=0; i<nums.size(); i++){
            maxTillI = std::max(maxTillI , nums[i]);
            minTillI = INT_MAX;
            for(int j=nums.size()-1; j>=i; --j){
                minTillI = std::min(minTillI , nums[j]);
            }
            int temp = maxTillI - minTillI;
            if(temp <= k){
                return i;
            }
        }
        
        return -1;

    }
};

int main(){
    return 0;
}