#include<iostream>
#include<unordered_map>


class Solution{
	public:
		bool isAlienSorted(std::vector<string>& words, string order){
			if(words.size() == 0) return true;

			std::vector<int> rank(26,0);
			for(size_t i=0; i<order.size(); i++){
				rank[order[i] - 'a'] = i;
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
					if(rank[words[i][j] - 'a'] < rank[words[i+1][j] - 'a']){
						letterInW1SmallThanLetterInW2 = true;
						break;
					}else if((rank[words[i][j] - 'a'] == rank[words[i+1][j] - 'a'])){
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
