#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<vector>




//amar bhava samadhan
class Solution {
public:
    int largestInteger(std::vector<int>& nums, int k) {
        int i = 0;
        int j = k-1;
        int result = -1;

        std::unordered_map<int,int> hashMap;

        while(j<nums.size()){ 
            std::unordered_set<int> hashSet;
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
                if(elem > result) result = elem;
            }
        }

        return result;
    }
};


int main(){
    return 0;
}