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

                if(mass2 >= asteroids[asteroids.size()-1]) return true;
                //so if any point if mass2 becomes greater than the biggest asteroid
                //so we safely return true cuz then it means planet is gonna destroy
                //all other asteroids

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