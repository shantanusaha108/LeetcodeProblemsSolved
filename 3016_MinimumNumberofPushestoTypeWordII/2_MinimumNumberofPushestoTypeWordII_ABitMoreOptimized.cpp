#include<iostream>
#include<algorithm>
#include<vector>
#include<string>




class Solution {
public:
    int minimumPushes(std::string word) {
        std::vector<int> countSort(26,0);
        for(auto elem : word){
            countSort[elem - 'a']++;
        }

        std::sort(countSort.rbegin(),countSort.rend());

        int minPass = 0;
        int index = 0;
        while(index < countSort.size() && countSort[index]){
            minPass += countSort[index] * (index / 8 + 1);
            ++index;
        }

        return minPass;
    }
};


int main(){
    return 0;
}