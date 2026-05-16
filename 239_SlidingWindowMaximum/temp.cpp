class Solution{
	public:
		std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k){
			if(nums.size() == 0) return {0};
			if(nums.size() == 1) return {nums[0]};
			std::vector<int> result;
			int maxValue = INT_MIN;
            std::unordered_map<int,int> elemFreq;
			for(int i=0; i<k; i++){
				maxValue = std::max(maxValue,nums[i]);	
			}
            elemFreq[maxValue]++;
			result.push_back(maxValue);

			for(size_t j=(size_t)k; j<nums.size(); j++){

                if(nums[j-k] == maxValue){
                    int temp = j-k;
                    elemFreq[nums[temp]]--;
                    if(elemFreq[nums[temp]] == 0){
                        elemFreq.erase(nums[temp]);
                        int tempIndex = temp+1;
                        while(tempIndex <= temp+k){
                            maxValue = std::max(maxValue , nums[tempIndex]);
                        }
                    }
                }

				maxValue = std::max(maxValue,nums[j]);
                result.push_back(maxValue);
			}
			return result;
		}
};
