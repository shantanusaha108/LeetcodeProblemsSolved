#include<iostream>
#include<vector>

class Solution {
public:
    int totalNumbers(std::vector<int>& digits) {
        std::vector<bool> unique(1000,false);
        int ans = 0;
        for(size_t i=0; i<digits.size(); ++i){
            if(digits[i] % 2 != 0) continue;
            for(size_t j=0; j<digits.size(); ++j){
                if(j==i) continue;
                for(size_t k=0; k<digits.size(); ++k){
                    if(k==j || k==i || digits[k]==0) continue;
                    int num = digits[i] + (digits[j]*10) + (digits[k]*100);
                    if(!unique[num]){
                        unique[num] = true;
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};

int main(){
    return 0;
}