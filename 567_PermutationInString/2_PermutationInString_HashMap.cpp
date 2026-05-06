#include<iostream>
#include<vector>
#include<unordered_map>


class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        vector<int> s1Count(26, 0), windowCount(26, 0);

        
        for (int i = 0; i < s1.size(); i++) {
            s1Count[s1[i] - 'a']++;
            windowCount[s2[i] - 'a']++;
        }

        int matches = 0;
        for (int i = 0; i < 26; i++) {
            if (s1Count[i] == windowCount[i]) matches++;
        }

        int left = 0;
        for (int right = s1.size(); right < s2.size(); right++) {

            if (matches == 26) return true;

            
            int index = s2[right] - 'a';
            windowCount[index]++;

            if (windowCount[index] == s1Count[index]) {
                matches++;
            } else if (windowCount[index] == s1Count[index] + 1) {
                matches--;
            }

            
            index = s2[left] - 'a';
            windowCount[index]--;

            if (windowCount[index] == s1Count[index]) {
                matches++;
            } else if (windowCount[index] == s1Count[index] - 1) {
                matches--;
            }

            left++;
        }

        return matches == 26;
    }
};