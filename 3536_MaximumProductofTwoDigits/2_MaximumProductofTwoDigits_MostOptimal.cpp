#include<iostream>
#include<climits>




//amar bhava samadhan
class Solution {
public:
    int maxProduct(int n) {
        
        int temp = n;

        int max = temp%10;
        temp /= 10;
        int secMax = 0;
        while(temp!=0){
            int temp2 = temp%10;
            if(temp2 >= max){
                secMax = max;
                max = temp2;a
            }
            if(temp2 >= secMax && temp2 < max){
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