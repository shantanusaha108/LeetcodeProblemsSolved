#include<iostream>
#include<vector>




class Solution {
public:
    bool uniformArray(std::vector<int>& nums1) {
        std::vector<int> nums2;
        bool evenCheck = true;
        bool oddCheck = true;

        for(size_t i=0; i<nums1.size(); ++i){
            evenCheck = true;
            if(nums1[i]%2==0) nums2.push_back(nums1[i]);
            else{
                int j = 0;
                while(j<nums1.size()){
                    if(j==i){
                        j++;
                        continue;
                    }
                    if((nums1[i]-nums1[j])%2 == 0){
                        nums2.push_back(nums1[i]-nums1[j]);
                        evenCheck = true;
                        break;
                    }
                    j++;
                    evenCheck = false;
                }
                if(!evenCheck) break;
            }
        }

        std::vector<int> nums3;
        for(size_t i=0; i<nums1.size(); ++i){
            oddCheck = true;
            if(nums1[i]%2==1) nums3.push_back(nums1[i]);
            else{
                int j = 0;
                while(j<nums1.size()){
                    if(j==i){
                        j++;
                        continue;
                    }
                    if(std::abs(nums1[i]-nums1[j])%2 == 1){
                        nums3.push_back(nums1[i]-nums1[j]);
                        oddCheck = true;
                        break;
                    }
                    j++;
                    oddCheck = false;
                }
                if(!oddCheck) break;
            }
        }

        if(oddCheck || evenCheck) return true;
        else return false;
    }
};

int main(){
    return 0;
}