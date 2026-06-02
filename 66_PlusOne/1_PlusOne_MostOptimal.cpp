#include<iostream>
#include<vector>
#include<string>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        
        for(int i = digits.size()-1; i>=0; --i){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};




int main(){
    Solution sol;
    std::vector<int> digits = {1,2,3};
    sol.plusOne(digits);
    return 0;
}