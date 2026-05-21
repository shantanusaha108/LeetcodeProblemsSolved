#include<iostream>
#include<vector>
#include<string>

class Solution {
public:
    std::vector<std::string> fizzBuzz(int n) {
        std::vector<std::string> answer;
        answer.reserve(n);//preallocates memory and avoids multiple reallocations while pushing

        for(size_t i=1 ; i<=n; i++){
            if(i%3==0 && i%5==0){
                answer.push_back("FizzBuzz");
            }else if(i%3==0){
                answer.push_back("Fizz");
            }else if(i%5==0){
                answer.push_back("Buzz");
            }else{
                answer.push_back(std::to_string(i));
            }
        }
        return answer;
    }
};


int main(){
    return 0;
}