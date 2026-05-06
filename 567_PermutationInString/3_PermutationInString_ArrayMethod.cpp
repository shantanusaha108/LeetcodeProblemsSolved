#include<iostream>
#include<vector>
#include<string>

class Solution {
    public:
        bool checkInclusion(std::string s1, std::string s2) {
            if(s1.size() > s2.size()) return false;

            std::vector<int> s1Map(26,0);
            std::vector<int> s2Map(26,0);

            for(int i=0; i<s1.size(); i++){
                s1Map[(int)(s1[i] - 'a')]++;
                s2Map[(int)(s2[i] - 'a')]++;
            }

            if(s1Map == s2Map) return true;

            for(size_t i=0; i<s2.size(); i++){
                if(s1Map == s2Map) return true;

                
            }
            
        }
};

int main(){
    return 0;
}