#include<iostream>
#include<vector>


class Solution{
  public:
    int numberOfSpecialChars(std::string word){
        if(word.size()==0) return 0;

        std::vector<bool> upper(26,false);
        std::vector<bool> lower(26,false);

        for(char ch : word){
            if(ch >= 'A' && ch <= 'Z'){
                upper[ch - 'A'] = true;
            }else if(ch >= 'a' && ch <= 'z'){
                lower[ch - 'a'] = true;
            }
        }
      
        std::vector<bool> upperVisited(26,false);
        std::vector<bool> lowerVisited(26,false);
      
        int specialCharCount = 0;
        for(size_t i=0; i<word.size(); i++){
            char ch = word[i];

            if(ch >= 'A' && ch <= 'Z'){
                upperVisited[ch - 'A'] = true;
            }else if(ch >= 'a' && ch <= 'z'){

                if(lower[ch-'a'] && upperVisited[(ch-32)-'A'] &&
                 lowerVisited[ch-'a']){
                    specialCharCount--;
                    lower[ch-'a'] = false;
                    upper[(ch-32)-'A'] = false;
                    continue;
                }

                if(lower[ch-'a'] && upper[(ch-32)-'A'] && 
                upperVisited[(ch-32)-'A']==false && lowerVisited[ch-'a'] == false){
                    specialCharCount++;
                    lowerVisited[ch-'a'] = true;
                }
            }
        }

        return specialCharCount;
    }
};


int main(){
    std::string word = "abDBAbb";
    Solution sol;
    int n = sol.numberOfSpecialChars(word);
    std::cout<<"Hello World"<<std::endl;
    return 0;
}