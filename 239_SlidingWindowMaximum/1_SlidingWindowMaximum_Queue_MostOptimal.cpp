#include<iostream>
#include<vector>
#include<deque>

class Solution{
    public:
        std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k){

            if(nums.empty()) return {};
            if(nums.size() == 1) return {nums[0]};

            std::deque<int> dq;
            std::vector<int> result;

            for(int i=0; i<(int)nums.size(); i++){
                //instead of size_t use int , size_t will produce a bug
                
                //pop left index that is out of window
                while(!dq.empty() && dq.front() <= i-k){
                    dq.pop_front();
                }

                while(!dq.empty() && nums[dq.back()] < nums[i]){
                    dq.pop_back();
                }

                dq.push_back(i);
                //only start adding after first window is formed
                //i.e i=0 to i=k-1 (k-1 because i starts from 0)
                if(i >= k-1){
                    result.push_back(nums[dq.front()]);
                }

            }
            return result;
        }
};

int main(){
    return 0;
}