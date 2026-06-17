//lazy reversal technique using deque and a rev flag
class Solution {
public:
    string processStr(string s){
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

        std::string s;
        s.reverse(dq.size());
        if(reverse && !dq.empty() ){
            while(!dq.empty()){
                s.push_back(dq.front());
                dq.pop_front();
            }
        }else{
            while(!dq.empty()){
                s.push_back(dq.back());
                dq.pop_back();
            }
        }

        return s;
    }
};