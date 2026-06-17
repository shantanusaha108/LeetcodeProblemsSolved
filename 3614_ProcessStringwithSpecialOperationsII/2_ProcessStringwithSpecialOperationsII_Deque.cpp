#include<iostream>
#include<string>
#include<deque>



class Solution {
public:
    char processStr(std::string s, long long k) {
        std::deque<char> dq;
        bool reverse = false;
        for(size_t i=0; i<s.size(); ++i){
            if(s[i] >= 'a' && s[i] <= 'z'){
                if(reverse){
                    dq.push_front(s[i]);
                }else dq.push_back(s[i]);
            }else if(s[i] == '*'){
                if(!dq.empty()){
                    if(reverse){
                        dq.pop_front();
                    }else dq.pop_back();
                }
            }else if(s[i] == '#'){
                size_t size = dq.size();
                if(!dq.empty()){
                    if(reverse){
                        for(size_t i=0 ;i<size; i++){
                            dq.push_front(dq[size-1]);
                        }
                    }else{
                        for(size_t i=0 ;i<size; i++){
                            dq.push_back(dq[i]);
                        }
                    }
                }

            }else if(s[i] == '%'){
                if(reverse){
                    reverse = false;
                }else reverse = true;
            }
        }

        
        if(reverse && !dq.empty() && k<=dq.size()-1){
            return dq[dq.size()-1-k];
        }else if(!reverse && !dq.empty() && k<=dq.size()-1){
            return dq[k];
        }else return '.';
    }
};

int main(){
    Solution sol;
    std::string c = "%#bz%xum##i##vzo#pwc*#dkwbh####%uf%s*%cgppqhqa%h#l##o%ij%%cz%iga##e###u%#e####jfwx##%%*x%m*%#";
    long long k = 6523; //output should be 'z'
    std::cout<<sol.processStr(c,k)<<std::endl;
    return 0;
}