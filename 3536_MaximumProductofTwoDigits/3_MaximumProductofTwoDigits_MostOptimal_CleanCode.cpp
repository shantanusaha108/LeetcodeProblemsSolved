#include<iostream>
#include<climits>




class Solution {
public:
    int maxProduct(int n) {
        int temp = n;
        int max = 0;
        int secMax = 0;
        while(temp!=0){
            int temp2 = temp%10;

            if(temp2 >= max){
                secMax = max;
                max = temp2;
            }else if(temp2 > secMax){
                secMax = temp2;
            }

            temp /= 10;
        }

        return max*secMax;
    }
};

int main(){
    return 0;
}