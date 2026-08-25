#include<iostream>
#include<unordered_set>
#include<vector>


class Solution {
public:
    int missingMultiple(std::vector<int>& nums, int k) {
        std::unordered_set<int> hashSet(nums.begin(),nums.end());
        int temp = k;
        while(true){
            if(!hashSet.contains(temp)){
                return temp;
            }
            temp += k;
        }
    }
};

int main(){
    return 0;
}