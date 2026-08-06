#include<iostream>



//amar bhava samadhan
class Solution {
public:
    int smallestNumber(int n, int t) {
        int i = n;
        while(true){
            int temp = i;
            int product = 1;
            while(temp != 0){
                product *= temp%10;
                temp = temp/10;
            }
            if(product%t == 0) return i;
            i++;
        }
        return 0;
    }
};

int main(){
    return 0;
}