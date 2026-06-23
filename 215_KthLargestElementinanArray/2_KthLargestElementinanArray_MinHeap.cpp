#include<iostream>
#include<vector>
#include<queue>


class Solution {
public:
    int findKthLargest(std::vector<int>& nums, int k) {
        if(nums.size() == 0) return 0;
        
        std::priority_queue<
            int,
            std::vector<int>,
            std::greater<int>
        > minHeap;

        for(const int& elem : nums){
            minHeap.push(elem);
            if(minHeap.size() > k) minHeap.pop();
        }

        return minHeap.top();
    }
};

int main(){
    Solution sol;
    return 0;
}