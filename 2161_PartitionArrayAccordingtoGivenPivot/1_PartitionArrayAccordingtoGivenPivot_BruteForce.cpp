class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        std::vector<int> smallerElems;
        std::vector<int> sameElems;
        std::vector<int> largerElems;

        for(size_t i=0 ; i<nums.size(); i++){
            if(nums[i] < pivot) smallerElems.push_back(nums[i]);
            else if(nums[i] > pivot) largerElems.push_back(nums[i]);
            else sameElems.push_back(nums[i]);
        }

        std::vector<int> result;

        result.insert(result.end(), smallerElems.begin(), smallerElems.end());
        result.insert(result.end(), sameElems.begin(), sameElems.end());
        result.insert(result.end(), largerElems.begin(), largerElems.end());
        
        return result;
    }
};