class Solution {
public:
    int firstMissingPositive(std::vector<int>& nums) {

        int sizeOfInput = nums.size();

        for(size_t i=0; i<sizeOfInput; i++){
            
            //the answer exits within 1 to n+1 , where n is the size of the array
            while(nums[i] > 0 && nums[i]<=sizeOfInput && nums[i] != nums[nums[i] - 1]){
                std::swap(nums[i],nums[nums[1]-1]);
            }
        }

        for(size_t i=0; i<sizeOfInput; i++){
            if(nums[i] != i+1) return i + 1;
        }

        return sizeOfInput + 1;
    }
};
