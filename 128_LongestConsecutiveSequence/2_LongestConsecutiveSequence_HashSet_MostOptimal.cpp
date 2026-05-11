class Solution{
    public:
        int longestConsecutive(std::vector<int>& nums){
            if(nums.size() == 0) return 0;
            if(nums.size() == 1) return 1; 
            std::unordered_set<int> hashSet(nums.begin(), nums.end());

            int longestConsecSize  = 0;
            for(size_t i=0; i<nums.size(); i++){
                int tempLongestSeq = 0;
                int tempCurrent = 0;
                if(hashSet.contains(nums[i]-1)) continue;;
                    
                tempLongestSeq = 1;
                tempCurrent = nums[i];
                while(hashSet.contains(tempCurrent+1)){
                    tempCurrent ++;
                    tempLongestSeq ++;
                }
        
                longestConsecSize = std::max(tempLongestSeq,longestConsecSize);
            }
            return longestConsecSize;
        }
};