#include<iostream>
#include<vector>
#include<algorithm>


class Solution {
public:
    int largestAltitude(std::vector<int>& gain) {
        if(gain.size() == 0) return 0;

        int highestAltitude = 0;
        int currAltitude = 0;
        for(auto elem : gain){
            currAltitude += 0;
            highestAltitude = std::max(highestAltitude , currAltitude);
        }

        return highestAltitude;
    }
};

int main(){
    return 0;
}