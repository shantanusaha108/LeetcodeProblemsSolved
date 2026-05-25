class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        if(nums.size()==0) return {};
        for(size_t i=0; i<nums.size(); i++){
            nums[i] = nums[i] * nums[i];
        }
        std::sort(nums.begin(),nums.end());
        return nums;
    }
};