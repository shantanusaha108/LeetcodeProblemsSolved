#include<iostream>
#include<vector>
#include<algorithm>
#include <set>

//the brute force approach passed 311 testcases out 316 , then time limit exceeded
class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        
        
        std::set<std::vector<int>> uniqueTriplets;
        int vecIndex = 0;
        for(int i=0 ; i<nums.size(); i++){
            for(int j=0 ; j<nums.size(); j++){
                if(i==j) continue;
                int sum = nums[i] + nums[j];
           
                for(int k=0 ; k<nums.size(); k++){
                    if(k==i || k==j) continue;
                    if(nums[k] == 0-sum){

                        std::vector<int> triplet = {
                            nums[i],
                            nums[j],
                            nums[k]
                        };
                        
                        //sorting the vector so we could have only unique triplets in the set
                        std::sort(triplet.begin(), triplet.end());

                        uniqueTriplets.insert(triplet);
                    }
                }
            }
        }

        return std::vector<std::vector<int>>(
            uniqueTriplets.begin(),
            uniqueTriplets.end()
        );
    }
};

int main(){

    //  std::vector<std::vector<int>> result = {
    //     {1,2,3},
    //     {2,3,4},
    //     {2,2,3}
    // };

    std::vector<std::vector<int>> result;
    std::vector<int> testCase = {-1,0,1,2,-1,-4};
    Solution sol;
    result = sol.threeSum(testCase);

    for(size_t i = 0; i < result.size(); i++){

        for(size_t j = 0; j < result[i].size(); j++){
            std::cout << result[i][j]<<" ";
        }

        std::cout << '\n';
    }
    return 0;
}