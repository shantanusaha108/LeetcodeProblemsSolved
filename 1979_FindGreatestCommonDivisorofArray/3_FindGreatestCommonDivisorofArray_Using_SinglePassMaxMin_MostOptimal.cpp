#include<iostream>
#include<vector>
#include<numeric>




//amar bhava samadhan
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxElem = INT_MIN;
        int minElem = INT_MAX;
        for(const auto& elem : nums){
            if(elem > maxElem) maxElem = elem;
            else if(elem  < minElem) minElem = elem; 
        }
        return gcd(maxElem , minElem);
    }
};


int main(){
    return 0;
}