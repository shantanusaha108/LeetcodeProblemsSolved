#include<iostream>
#include<vector>



class Solution {
public:
    bool uniformArray(std::vector<int>& nums1) {

        bool evenCheck = true;
        bool oddCheck = true;

        for(size_t i=0; i<nums1.size(); ++i){
            evenCheck = true;
            if(nums1[i]%2==0) continue;
            else{
                int j = 0;
                while(j<nums1.size()){
                    if(j==i){
                        j++;
                        continue;
                    }
                    if((nums1[i]-nums1[j])%2 == 0){
                        evenCheck = true;
                        break;
                    }
                    j++;
                    evenCheck = false;
                }
                if(!evenCheck) break;
            }
        }

        for(size_t i=0; i<nums1.size(); ++i){
            oddCheck = true;
            if(nums1[i]%2==1) continue;
            else{
                int j = 0;
                while(j<nums1.size()){
                    if(j==i){
                        j++;
                        continue;
                    }
                    if(std::abs(nums1[i]-nums1[j])%2 == 1){
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