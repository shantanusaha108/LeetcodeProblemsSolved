class Solution {
    public:
        vector<vector<int>> fourSum(vector<int>& nums, int target) {
            if (nums.size() < 4) return {};

            vector<vector<int>> result;

            for (size_t i = 0; i < nums.size() - 3; i++) {
                for (size_t j = i + 1; j < nums.size() - 2; j++) {
                    for (size_t k = j + 1; k < nums.size() - 1; k++){
                        for (size_t l = k + 1; l < nums.size(); l++){

                        }
                    }   
                }
            }
            return result;
        }
};


long long sum = (long long)nums[i] + nums[j] + nums[low] + nums[high];
                        if (sum == target) {
                            result.push_back( {nums[i], nums[j], nums[low], nums[high]} );
                            low++;
                            high--;
                        }