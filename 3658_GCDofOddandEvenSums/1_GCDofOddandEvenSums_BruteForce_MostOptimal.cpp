#include<iostream>
#include<numeric>//for gcd




//amar bhava samadhan
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        if(n <= 0) return 0;
        int sumOdd = 0;
        int sumEven = 0;

        int temp  = 1;
        while(temp <= n){
            sumOdd += 2*temp - 1;
            ++temp;
        }
        temp = 1;
        while(temp <= n){
            sumEven += 2*temp;
            ++temp;
        }
       

        return std::gcd(sumOdd,sumEven);
    }
};


int main(){
    return 0;
}