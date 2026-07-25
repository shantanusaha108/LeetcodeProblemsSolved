#include<iostream>
#include<climits>




//amar bhava samadhan
class Solution {
public:
    int maxProduct(int n) {
        int max = INT_MIN;
        int temp = n;
        int index =0;
        int i=0;
        while(temp!=0){
            int temp2= temp%10;
            if(temp2>max){
                max = temp2;
                index=i;
            }
            temp /= 10;
            i++;
        }
        int secMax = INT_MIN;
        temp=n;
        i=0;
        while(temp!=0){
            int temp2=temp%10;
            if(temp2>secMax && temp2<=max && index!=i) secMax = temp2;
            temp/=10;
            i++;
        }

        return max*secMax;
    }
};

int main(){
    return 0;
}