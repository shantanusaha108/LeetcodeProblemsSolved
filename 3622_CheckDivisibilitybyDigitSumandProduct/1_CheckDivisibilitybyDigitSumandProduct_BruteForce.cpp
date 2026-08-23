#include<iostream>




class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int sum = 0;
        int product = 1;
        while(temp){
            sum += temp % 10;
            product *= temp % 10;
            temp /= 10;
        }
        if(n % (sum+product) == 0) return true;
        else return false;
    }
};


int main(){
    return 0;
}