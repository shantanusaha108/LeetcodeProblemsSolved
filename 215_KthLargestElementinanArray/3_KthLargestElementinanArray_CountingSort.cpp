#include<iostream>
#include<vector>



class Solution {
public:
    int findKthLargest(std::vector<int>& nums, int k) {
        if(nums.size() == 0) return 0;
        
        std::vector<int> forCountSort(20001 , 0);

        for(const int& elem : nums){
            forCountSort[elem + 10000] ++;
            //we add 10000 as offset to include -ve numbers
            //as constraints are -10000 to +10000 , so we took
            //vector of size 20001
        }

        int tempCount = 0;
        for(int i=forCountSort.size()-1; i>=0; --i){
            if(forCountSort[i] > 0) tempCount += forCountSort[i];
            if(tempCount >= k) return i-10000;
        }

        return 0;
    }
};

int main(){
    Solution sol;
    return 0;
}