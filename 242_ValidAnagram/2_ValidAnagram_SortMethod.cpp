#include<iostream>
#include<algorithm>
#include <string>


class Solution {
	public:
		bool isAnagram(std::string s, std::string t) {
			if(s.size() != t.size()){return false;} 
			std::sort(s.begin(),s.end());
			std::sort(t.begin(),t.end());
			return s==t;
		}
};


int main(){
    std::string s1,s2;
    std::cout<<"Enter the first string : "<<std::endl;
    std::cin>>s1;
    std::cout<<"Enter the second string : "<<std::endl;
    std::cin>>s2;
    Solution sol;
    if(sol.isAnagram(s1,s2)){
        std::cout<<"The two strings are anagram."<<std::endl;
    }else{
        std::cout<<"Not anagram"<<std::endl;
    }
    return 0;
}
