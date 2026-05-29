//OptionalOptimizations
#include<stdio.h>
#include<vector>
#include<algorithm>


class Solution {
    public:
        vector<vector<int>> fourSum(vector<int>& nums, int target) {
            if (nums.size() < 4) return {};

            sort(nums.begin(), nums.end());
            vector<vector<int>> result;

            for (size_t i = 0; i < nums.size() - 3; i++) {
                int n = nums.size();
                //early prunning
                if(static_cast<long long>(nums[i]+nums[i+1]+nums[i+2]+nums[i+3]) > target) break;
                else if(static_cast<long long>(nums[i]+nums[i+1]+nums[i+2]+nums[i+3]) < target) continue;
                
                //duplicate checking to prevent duplicate vector<int> in vector<vector<int>>
                if (i>0 && nums[i] == nums[i - 1]) continue;

                for (size_t j = i + 1; j < nums.size() - 2; j++) {

                    //early prunning
                    if(static_cast<long long>(nums[i]+nums[j]+nums[j+1]+nums[j+2]) > target) break;
                    else if(static_cast<long long>(nums[i]+nums[j]+nums[j+1]+nums[j+2]) < target) continue;

                    //duplicate checking to prevent duplicate vector<int> in vector<vector<int>>
                    if (j>i+1 && nums[j] == nums[j - 1]) continue;
                    int low = j + 1;
                    int high = nums.size() - 1;
                    while (low < high) {
                        
                        long long sum = (long long)nums[i] + nums[j] + nums[low] + nums[high];
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