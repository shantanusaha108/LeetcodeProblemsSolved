#include<iostream>



class Solution{
	public:
		bool isAnagram(std::string s, std::string t){
			if(s.size() != t.size()) return false;
			int checkAnagram[26] = {0};//initialized all elements in the array to 0

			for(size_t i=0; i<s.size(); i++){
				checkAnagram[s[i] - 'a']++;
				checkAnagram[t[i] - 'a']--;
			}

			for(int check : checkAnagram){
				if(check != 0){
					return false;
				}
			}
			return true;
        }
};
