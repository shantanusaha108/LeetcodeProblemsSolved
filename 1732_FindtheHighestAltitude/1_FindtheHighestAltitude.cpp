class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        if(gain.size() == 0) return 0;
        int highestAltitude = 0;
        for(size_t i=0; i<gain.size(); ++i){
            if(i==0) highestAltitude = std::max(highestAltitude , 0 + gain[i]);
            else {
                highestAltitude = std::max(highestAltitude , gain[i-1] + gain[i]);
                gain[i] = gain[i-1] + gain[i];
            }
        }
        return highestAltitude;
    }
};

int main(){
    return 0;
}