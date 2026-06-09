#include<iostream>
#include<vector>


class Solution{
    public:
        std::vector<int> pivotArray(std::vector<int>& nums, int pivot){
            std::vector<int> result;

            for(int elem : nums){
                if(elem < pivot) result.push_back(elem);
            }
            for(int elem : nums){
                if(elem == pivot) result.push_back(elem);
            }
            for(int elem : nums){
                if(elem > pivot) result.push_back(elem);
            }

            return result;
        }

};

int main(){
    return 0;
}