#include<iostream>
#include<vector>





//amar bhava samadhan
class Solution {
public:
    std::vector<int> resultArray(std::vector<int>& nums) {
        std::vector<int> arr1;
        std::vector<int> arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(size_t i=2; i<nums.size(); ++i){
            if(arr1[arr1.size()-1] > arr2[arr2.size()-1]) arr1.push_back(nums[i]);
            else arr2.push_back(nums[i]);
        }
        for(const auto& elem : arr2){
            arr1.push_back(elem);
        }
        return arr1;
    }
};

int main(){
    return 0;
}