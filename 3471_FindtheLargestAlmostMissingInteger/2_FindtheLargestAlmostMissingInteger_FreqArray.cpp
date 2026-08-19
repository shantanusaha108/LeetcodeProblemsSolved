#include<iostream>
#include<vector>



//amar bhava samadhan
class Solution {
public:
    int largestInteger(std::vector<int>& nums, int k) {
        int i = 0;
        int j = k-1;

        std::vector<int> trackElem(51,0);

        while(j<nums.size()){ 
            int temp = i;
            std::vector<int> subArrTrack(51,0);
            while(temp<=j){
                if( !(trackElem[nums[temp]] > 1) && !(subArrTrack[nums[temp]]) ){
                    trackElem[nums[temp]]++;
                    subArrTrack[nums[temp]]++;
                }
                temp++;
            }
            i++;
            j++;
        }

        for(int i=50 ; i>=0; --i){
            if( trackElem[i] == 1){
                return i;
            }
        }

        return -1;
    }
};


int main(){
    return 0;
}