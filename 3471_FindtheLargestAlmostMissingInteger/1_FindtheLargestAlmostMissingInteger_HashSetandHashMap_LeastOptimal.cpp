#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<vector>




//amar bhava samadhan
class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int i = 0;
        int j = k-1;
        int result = -1;
        unordered_map<int,int> hashMap;
        while(j<nums.size()){ 
            unordered_set<int> hashSet;
            int temp = i;  
            while(temp<=j){
                if(!hashSet.contains(nums[temp])){
                    hashMap[nums[temp]]++;
                    hashSet.insert(nums[temp]);
                }
                temp++;
            }
            i++;
            j++;
        }

        for(const auto elem : nums){
            if(hashMap[elem] == 1){
                result = std::max(result , elem);
            }
        }

        return result;
    }
};