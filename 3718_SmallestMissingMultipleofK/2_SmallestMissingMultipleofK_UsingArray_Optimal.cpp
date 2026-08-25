#include<iostream>
#include<vector>



class Solution {
public:
    int missingMultiple(std::vector<int>& nums, int k) {
        std::vector<bool> check(101,false);
        for(const auto& elem : nums){
            check[elem] = true;
        }
        int temp = k;
        while(temp <= 100){
            if(!check[temp]){
                return temp;
            }
            temp += k;
        }
        return temp;
    }
};


int main(){
    return 0;
}