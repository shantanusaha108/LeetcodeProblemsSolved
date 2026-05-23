class Solution {
public:
    bool check(vector<int>& nums) {
        if(nums.size()==0) return false;
        if(nums.size()==1) return true;
        size_t drop = 0;
        for(size_t i=0; i<nums.size(); i++){
            if(nums[i] > nums[(i+1)%nums.size()]){
                drop ++;
                if(drop > 1) return false;
            }
        }
        return true;
    }
};