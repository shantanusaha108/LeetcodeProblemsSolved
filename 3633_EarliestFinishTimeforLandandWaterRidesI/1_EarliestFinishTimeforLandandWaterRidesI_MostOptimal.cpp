#include<iostream>
#include<vector>
#include<climits>



class Solution {
public:
    int earliestFinishTime(std::vector<int>& landStartTime,
                           std::vector<int>& landDuration,
                           std::vector<int>& waterStartTime,
                           std::vector<int>& waterDuration) {
        
        int minLandFinish = INT_MAX;
        for (int i = 0; i < landStartTime.size(); i++) {
            minLandFinish = min(minLandFinish,
                                landStartTime[i] + landDuration[i]);
        }

        int ans = INT_MAX;

    
        for (int j = 0; j < waterStartTime.size(); j++) {
            ans = min(ans,
                      max(minLandFinish, waterStartTime[j]) +
                      waterDuration[j]);
        }

        int minWaterFinish = INT_MAX;
        for (int j = 0; j < waterStartTime.size(); j++) {
            minWaterFinish = min(minWaterFinish,
                                 waterStartTime[j] + waterDuration[j]);
        }

    
        for (int i = 0; i < landStartTime.size(); i++) {
            ans = min(ans,
                      max(minWaterFinish, landStartTime[i]) +
                      landDuration[i]);
        }

        return ans;
    }
};

int main(){
    return 0;
}