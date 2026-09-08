#include<iostream>


class Solution {
public:
    int countCommas(int n) {
        if(n<1000) return 0;
        int count = 0;
        int temp = 1000;
        while(temp <= n){
            count ++;
            temp++;
        }
        return count;
    }
};

int main(){
    return 0;
}