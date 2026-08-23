//OptionalOptimizations :- adding prunning
#include<stdio.h>
#include<vector>
#include<algorithm>


class Solution {
    public:
        std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target) {
            if (nums.size() < 4) return {};

            sort(nums.begin(), nums.end());
            std::vector<std::vector<int>> result;

            const int n = nums.size();
            for (int i = 0; i < n - 3; i++) {
                //duplicate checking to prevent duplicate vector<int> in vector<vector<int>>
                if (i>0 && nums[i] == nums[i - 1]) continue;

                //early prunning
                if(static_cast<long long>(nums[i]) +nums[i+1]+nums[i+2]+nums[i+3] > target) break;
                if(static_cast<long long>(nums[i]) +nums[n-1]+nums[n-2]+nums[n-3] < target) continue;
                
                for (int j = i + 1; j < n - 2; j++) {

                    //duplicate checking to prevent duplicate vector<int> in vector<vector<int>>
                    if (j>i+1 && nums[j] == nums[j - 1]) continue;

                    //early prunning
                    if(static_cast<long long>(nums[i]) +nums[j]+nums[j+1]+nums[j+2] > target) break;
                    if(static_cast<long long>(nums[i]) +nums[j]+nums[n-1]+nums[n-2] < target) continue;

                    int low = j + 1;
                    int high = n - 1;
                    while (low < high) {
                        
                        long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[low] + nums[high];
                        if (sum == target) {
                            result.push_back( {nums[i], nums[j], nums[low], nums[high]} );
                            low++;
                            high--;

                            //duplicate checking to prevent duplicate vector<int> in vector<vector<int>>
                            while (low < high && nums[low] == nums[low - 1] ) low++;
                            while (low < high && nums[high] == nums[high + 1]) high--;
                        }
                        else if (sum < target) {
                            low++;
                        }
                        else {
                            high--;
                        }
                    }
                }
            }
            return result;
        }
};

int main(){
    return 0;
}