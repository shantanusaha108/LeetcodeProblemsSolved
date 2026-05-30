class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        std::vector<int> result(26,0);
        int count = 0;
        for(const auto elem : nums){
            if(elem == val){
                continue;
            }
            result.push_back(elem);
            count ++;
        }

        for(size_t i=0; i<result.size(); i++){
            nums[i] = result[i];
        }

        return count;
    }
};