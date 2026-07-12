#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>



//amar bhava samadhan
class Solution {
public:
    std::vector<int> arrayRankTransform(std::vector<int>& arr) {
        std::vector<int> rankVec(arr.begin(),arr.end());
        std::sort(rankVec.begin(),rankVec.end());
        std::unordered_map<int,int> hashmap;

        int rank = 0;
        for(auto elem : rankVec){
            if(hashmap.contains(elem)){
                continue;
            }
            hashmap[elem] = ++rank;
        }

        for(size_t i=0; i<arr.size(); ++i){
            arr[i] = hashmap[arr[i]];
        }

        return arr;
    }
};

int main(){
    return 0;
}