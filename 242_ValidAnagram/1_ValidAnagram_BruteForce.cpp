#include<iostream>



class Solution {
	public:
		bool isAnagram(string s, string t) {
			if(s.size() != t.size()){return false;} 
			int temp = 0;
			std::unordered_set<size_t> hashSet;
			for(size_t i=0; i<s.size(); i++){
				for(size_t j=0; j<t.size(); j++){
					if(s[i] == t[j] && !hashSet.contains(j)){
						temp++;
						hashSet.insert(j);
						break;
					}
				}
			}
			if(temp == s.size()){
				return true;
			}
			return false;
		}
};






