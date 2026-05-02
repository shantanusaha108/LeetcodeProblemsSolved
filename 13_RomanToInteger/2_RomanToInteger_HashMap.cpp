#include<iostream>
#include<unordered_map>
#include<string>


class Solution{
	public:
		int romanToInt(std::string s){
			if(s.size() == 0) return 0;
			std::unordered_map<char,int> hashMap;
			hashMap['I'] = 1;
			hashMap['V'] = 5;
			hashMap['X'] = 10;
			hashMap['L'] = 50;
			hashMap['C'] = 100;
			hashMap['D'] = 500;
			hashMap['M'] = 1000;
			int result = 0;
			for(size_t i=0; i<s.size(); i++){
				if(!hashMap.contains(s[i])){
					std::cout<<"Invalid Input, only the following inputs allowed : "<<std::endl<<"Symbol       Value"<<std::endl<<"I             1"<<std::endl<<"V             5"<<std::endl<<"X             10"<<std::endl<<"L             50"<<std::endl<<"C             100"<<std::endl<<"D             500"<<std::endl<<"M             1000"<<std::endl;
					return 0;
				}
				if(i == s.size()-1){
					result += hashMap[s[i]];
					break;
				}
				if(hashMap[s[i]] < hashMap[s[i+1]]){
					result = result - hashMap[s[i]];
					continue;
				}
				result += hashMap[s[i]];
			}
			return result;
		}
};
