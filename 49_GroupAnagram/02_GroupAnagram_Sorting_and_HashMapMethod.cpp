#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<string>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
         
        std::unordered_map<std::string , std::vector<std::string>> tempMap;
        for(std::string s : strs){
            std::string key = s;
            std::sort(key.begin(),key.end());
            tempMap[key].push_back(s);
        }

        std::vector<std::vector<std::string>> result;
        for(auto& p : tempMap){
            result.push_back(p.second);
        }
        return result;
    }
};


int main(){
    return 0;
}