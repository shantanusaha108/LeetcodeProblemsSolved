#include<iostream>
#include<vector>


class Solution{
    public:
        std::vector<int> pivotArray(std::vector<int>& nums, int pivot){
            std::vector<int> result(nums.size());

            int smallElemCount = 0;
            int sameElemCount = 0;

            for(int elem : nums){
                if(elem < pivot) ++smallElemCount;
                else if(elem == pivot) ++sameElemCount;
            }

            int smallElemSrtIndex = 0;
            int sameElemSrtIndex = smallElemCount;
            int bigElemSrtIndex = smallElemCount + sameElemCount;

            for(int elem : nums){
                if(elem < pivot) result[smallElemSrtIndex++] = elem;
                else if(elem > pivot) result[bigElemSrtIndex++] = elem;
                else result[sameElemSrtIndex++] = elem;
            }
            

            return result;
        }

};

int main(){
    return 0;
}