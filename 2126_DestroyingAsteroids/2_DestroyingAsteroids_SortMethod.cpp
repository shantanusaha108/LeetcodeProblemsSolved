#include<iostream>
#include<algorithm>
#include<vector>

class Solution {
public:
    bool asteroidsDestroyed(int mass, std::vector<int>& asteroids) {
        std::sort(asteroids.begin(),asteroids.end());
        long long mass2 = mass;
        for(auto elem : asteroids){
            if(mass2 >= elem){
                mass2 += elem;
                continue;   
            }else{
                return false;
            }
        }

        return true;
    }
};


int main(){
    return 0;
}