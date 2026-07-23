#include<iostream>
#include<set>
#include<vector>


class Solution {
public:
    int uniqueXorTriplets(std::vector<int>& nums) {
        std::set<int> s;

        for(const auto& elem1 : nums)
            for(const auto& elem2 : nums)
                for(const auto& elem3 : nums)
                    s.insert(elem1^elem2^elem3);

        return static_cast<int>(s.size());
    }
};


int main(){
    Solution sol;
    std::vector<int> nums = {3,111,126,106,116,50,16,18,34,62,101,53,152,130,158,85,78,125,35,81,92,51,12,15,79,59,23,19,4,121,140,156,74,89,21,90,112,22,45,13,128,68,43,122,9,7,118,153,114,86,24,70,82,28,8,6,5,65,73,38,147,27,95,52,91,56,131,44,124,97,127,61,99,98,155,157,60,75,119,120,17,25,117,48,64,148,1,134,146,49,71,30,136,150,87,42,132,159,143,102,2,33,39,149,20,76,94,103,37,135,46,66,123,32,137,77,151,129,113,109,154,69,84,11,142,58,67,144,115,105,145,54,141,31,138,139,55,40,80,100,96,83,104,88,133,36,10,14,63,29,107,41,57,93,110,47,72,26,108};
    int result = sol.uniqueXorTriplets(nums);
     std::cout<<result<<std::endl;
       
}