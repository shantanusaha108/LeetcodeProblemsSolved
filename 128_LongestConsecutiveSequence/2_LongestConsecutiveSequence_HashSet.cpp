class Solution{
    public:
        int longestConsecutive(std::vector<int>& nums){
            if(nums.size() == 0) return 0;
            if(nums.szie() == 1) return 1; 
            std::unordered_set<int> hashSet;

            int smallestValue = INT_MAX;

            for(size_t i=0; i<nums.size(); i++){
                if{nums[i] < smallestValue}{
                    smallestValue = nums[i];
                }

                hashSet.insert(nums[i]);
            }

            int longestConsecSize  = 1;
            for(size_t i=0; i<nums.size(); i++){
                if(hashSet.contains(nums[i] + 1)){
                    longestConsecSize ++;
                    continue;
                }
                longestConsecSize = 1;
            }
            return 1;
        }
};