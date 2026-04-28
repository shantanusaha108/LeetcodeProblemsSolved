#include<iostream>
#include<unordered_map>




class Solution {
	public:
		bool isAnagram(std::string s, std::string t) {
            if(s.size() != t.size()){return false;}
            std::unordered_map<char,int> hashMap;
            for(size_t i=0; i<s.size(); i++){
                hashMap[s[i]]++;
            }
            for(size_t i=0; i<t.size(); i++){
                hashMap[t[i]]--;
            }
            for(auto& [ch,count] : hashMap){
                if(count != 0){
                    return false;
                }
            }
            return true;
		}
};