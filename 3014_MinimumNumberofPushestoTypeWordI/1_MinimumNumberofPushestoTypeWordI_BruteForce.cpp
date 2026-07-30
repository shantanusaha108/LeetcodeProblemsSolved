#include<iostream>
#include<vector>
#include<algorithm>
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
        int NoOfTimeToPress = 1;
        int index = 0;
        while(index < countSort.size()){
            if(countSort[index] == 0) break;
            if(index>0 && index % 8 == 0) ++NoOfTimeToPress;
            minPass += countSort[index] * NoOfTimeToPress;
            ++index;
        }

        return minPass;
    }
};


int main(){
    return 0;
}