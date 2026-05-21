#include<iostream>
#include<string>
#include<vector>
#include<cctype>

class Solution{
    public:
        std::string longestCommonPrefix(std::vector<std::string>& strs){
            if(strs.size() == 0) return "";
            if(strs.size() == 1) return strs[0];

            int longestPrefix = 0;
            for(size_t i=0; i < std::min(strs[0].size(),strs[1].size()); i++){
                if(strs[0][i] == strs[1][i]){
                    longestPrefix++;
                }else{
                    break;
                }
            }

            if(longestPrefix == 0) return "";

            int i = 1;
            while(i<strs.size()-1){
                int tempCount = 0;
                while(tempCount < longestPrefix && tempCount < std::min(strs[i].size(),strs[i+1].size())){
                    if(strs[i][tempCount] == strs[i+1][tempCount]){
                        tempCount++;
                    }else{
                        break;
                    }
                }
                if(tempCount == 0){
                    return "";
                }
                longestPrefix = std::min(longestPrefix,tempCount);
                i++;
            }

            std::string result;
            result.reserve(longestPrefix);
            for(size_t k=0; k<longestPrefix; k++){
                result.push_back(strs[0][k]);
            }

            return result;
        }
};

int main(){

    Solution sol;
    std::vector<std::string> strs = {"flower","flow","flight"};
    std::string result = sol.longestCommonPrefix(strs);

    for(auto ch : result){
        std::cout<<ch;
    }

    return 0;
}