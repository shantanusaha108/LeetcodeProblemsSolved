#include<iostream>
#include<vector>


//amar bhava samadhan
class Solution {
public:
    std::vector<int> sequentialDigits(int low, int high) {
        std::vector<int> result;
        bool dontPushInVec = false;

        for(size_t i=low ; i<=high; ++i){
            int temp = i;
            dontPushInVec = false;

            int prev = temp%10;
            temp = temp/10;
            while(temp != 0){
                int curr = temp%10;
                temp = temp/10;

                if(curr != prev-1){
                    dontPushInVec = true;
                    break;
                }
                prev = curr;
            }

            if(dontPushInVec) continue; 
            result.push_back(i);
        }
        return result;
    }
};


int main(){
    Solution sol;
    int low = 178546104;
    int high = 812704742;
    std::vector<int> result = sol.sequentialDigits(low,high);
    for(const auto& elem : result){
        std::cout<<", "<<elem;
    }
    return 0;
}