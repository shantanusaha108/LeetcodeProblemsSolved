#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>


//amar bhava samadhan
class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(std::vector<int>& arr) {
        std::sort(arr.begin(),arr.end());
        arr[0] = 1;
        for(size_t i=1; i<arr.size(); ++i){
            if(std::abs(arr[i]-arr[i-1]) > 1){
               arr[i] = arr[i-1]+1;
            }
        }
        return arr[arr.size()-1];
    }
};

int main(){
    return 0;
}