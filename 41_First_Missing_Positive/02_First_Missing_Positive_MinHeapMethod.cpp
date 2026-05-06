#include<iostream>
#include<queue>
#include <functional>
#include<vector>


class Solution {
public:
    int firstMissingPositive(std::vector<int>& nums) {
        std::priority_queue<
            int,
            std::vector<int>,
            std::greater<int>
        > minHeap;
        for(size_t i=0; i<nums.size(); i++){
            if(nums[i] >= 1){
                minHeap.push(nums[i]);
            }
        }

        if(minHeap.empty()) return 1;
        if(minHeap.top() > 1) return 1;

        int temp = minHeap.top();
        minHeap.pop();
        while(!minHeap.empty()){
            if(temp == minHeap.top()){
                minHeap.pop();
                continue;
            }
            if(temp+1 != minHeap.top()) return temp+1;
            temp = minHeap.top();
            minHeap.pop();
        }

        return temp+1;
    }
};



int main(){
    return 0;
}