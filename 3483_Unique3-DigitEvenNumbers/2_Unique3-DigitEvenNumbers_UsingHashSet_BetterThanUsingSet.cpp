#include<iostream>
#include<vector>
#include<unordered_set>

class Solution {
public:
    int totalNumbers(std::vector<int>& digits) {
        std::unordered_set<int> unique;
        int result = 0;
        for(size_t i=0; i<digits.size(); ++i){
            if(digits[i] % 2 != 0) continue;
            for(size_t j=0; j<digits.size(); ++j){
                if(j==i) continue;
                for(size_t k=0; k<digits.size(); ++k){
                    if(k==j || k==i || digits[k]==0) continue;
                    unique.insert(digits[i] + (digits[j]*10) + (digits[k]*100));
                }
            }
        }
        return static_cast<int>(unique.size());
    }
};

int main(){
    return 0;
}