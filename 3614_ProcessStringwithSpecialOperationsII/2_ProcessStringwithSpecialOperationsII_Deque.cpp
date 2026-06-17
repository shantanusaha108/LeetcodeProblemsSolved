class Solution {
public:
    char processStr(string s, long long k) {
        std::deque<char> dq;

        std::vector<char> vec;
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