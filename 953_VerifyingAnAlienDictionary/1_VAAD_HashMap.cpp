#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>


class Solution{
	public:
		bool isAlienSorted(std::vector<std::string>& words, std::string order){
			if(words.size() == 0) return true;

			std::unordered_map<char,int> hashMap;
			for(size_t i=0; i<order.size(); i++){
				hashMap[order[i]] = i;
			}

			for(size_t i=0; i<words.size()-1; i++){
				bool letterInW1SmallThanLetterInW2 = false;
					
				size_t sizeOfShortWord = 0;
				if(words[i].size() < words[i+1].size()){
					sizeOfShortWord = words[i].size();
				}else{
					sizeOfShortWord = words[i+1].size();
				}

				for(size_t j=0; j<sizeOfShortWord; j++){ 
					if(hashMap[words[i][j]] < hashMap[words[i+1][j]]){
						letterInW1SmallThanLetterInW2 = true;
						break;
					}else if((hashMap[words[i][j]] == hashMap[words[i+1][j]])){
						continue;
					}
					else{
						return false;
					}
				}
				if(!letterInW1SmallThanLetterInW2 && words[i].size() > words[i+1].size()){
					return false;
				}
			}
			return true;
		}
};


int main(){
	return 0;
}