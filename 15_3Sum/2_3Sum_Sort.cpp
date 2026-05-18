#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>




class Solution{
    public:
        std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
            if(nums.size() < 3) return {};
            std::vector<std::vector<int>> result;
            std::sort(nums.begin() , nums.end());
            
            for(size_t i=0; i<nums.size(); i++){
                
                if(i>0 && nums[i] == nums[i-1]) continue;//to prevent duplicate starting value

                //indexs for the while loop
                int leftPointer = i+1;
                int rightPointer = static_cast<int>(nums.size()-1);

                while(leftPointer < rightPointer){
                    int sum = nums[i] + nums[leftPointer] + nums[rightPointer];

                    if(sum == 0){
                        result.push_back({nums[i] , nums[leftPointer] , nums[rightPointer]});
                        leftPointer++;
                        rightPointer--;

                        //to prevent duplicate left pointer elements
                        while(leftPointer<rightPointer && nums[leftPointer] == nums[leftPointer-1]){
                            leftPointer++;
                        }
                        //to prevent duplicate right pointer elements
                        while(leftPointer<rightPointer && nums[rightPointer] == nums[rightPointer+1]){
                            rightPointer--;
                        }
                    }
                    else if(sum > 0){
                        rightPointer--; 
                        continue;
                    } 
                    else{
                        leftPointer++; 
                        continue;
                    }
                    //make sure all the three condition for sum(==,<,>) are done
                    //using if then else if and the else insead of three if
                    //it gives huge performance boost
                }
            }
            
            return result;
        }
};

int main(){
    return 0;
}