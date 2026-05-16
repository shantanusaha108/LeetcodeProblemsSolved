#include<iostream>
#include<vector>


class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        if(numbers.size()==0) return {};
        int i = 0;
        int j = static_cast<int>(numbers.size() - 1);
        while(i<j){
            if(numbers[i]+numbers[j] == target) return {i+1,j+1};
            if(target - numbers[i] < numbers[j]){
                j--;
                continue;
            }else{
                i++;
            }
            
        }
        return {};
    }
};


int main(){
    return 0;
}