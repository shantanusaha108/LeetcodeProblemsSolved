#include<iostream>


class Solution {
public:
    int totalWaviness(int num1, int num2) {
        if(num1 < 100 && num2 < 100) return 0;

        int w = 0;

        int low = num1;
        int high = num2;

        while(low <= high){
            if(low < 100) {
                low++;
                continue;
            }

            int temp = low;
            bool firstElement = true;
            int prevElement = 0;
            int currElement = 0;
            int nextElement = 0;
            while(temp != 0){
                if(temp < 10){ 
                    break;//skip if last element
                }
                if(firstElement){
                    firstElement = false;
                    prevElement = temp % 10;
                    temp = temp / 10;
                    continue;
                }//skip if first element

                currElement = temp % 10;
                int tempForNxtElement = temp;
                tempForNxtElement /= 10;
                nextElement = tempForNxtElement % 10;

                if(currElement < prevElement && currElement < nextElement) w++;
                else if(currElement > prevElement && currElement > nextElement) w++;
                
                prevElement = currElement;

                temp = temp / 10;
    
                
            }

            low++;
        }

        return w;
    }
};



int main(){
    Solution sol;

    std::cout<<sol.totalWaviness(120,130)<<std::endl;
    return 0;
}