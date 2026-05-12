#include<iostream>
#include<vector>
#include<string>



class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        if(s.size()==0) return 0;
        if(s.size()==1) return 1;
        std::unordered_map<char,int> hashMap;
        // std::unordered_set<char> hashSet;

        int longestSequence = INT_MIN;
        int tempSequenceCounter = 0;
        for(size_t i=0; i<s.size(); i++){
            if(hashMap.contains(s[i])){
                i = hashMap[s[i]];
                hashMap.clear();
                tempSequenceCounter = 0;
                continue;
            }
            hashMap[s[i]] = i;
            tempSequenceCounter ++;
            longestSequence = std::max(longestSequence,tempSequenceCounter);
        }
        return longestSequence;
    }
};


int main(){
    return 0;
}