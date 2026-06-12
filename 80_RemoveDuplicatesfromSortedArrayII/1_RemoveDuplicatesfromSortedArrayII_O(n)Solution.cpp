class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        int k = 0;
        for(size_t i=0; i<nums.size(); i++){
            if(i==0){
                k++;
                count++;
                continue;
            }
            if(nums[i] == nums[i-1]){
                if(count<2){
                    nums[k] = nums[i];
                    k++;
                }
                count++;
            }else{
                count = 1;
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};