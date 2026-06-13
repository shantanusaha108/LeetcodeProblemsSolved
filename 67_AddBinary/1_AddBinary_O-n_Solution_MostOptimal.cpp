#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdint>//for uint8_t



//amar bhava samadhan
class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        
        //indexes to traverse the 2 given string
        int aHigh = a.size()-1;
        int bHigh = b.size()-1;

        //for carry bit
        bool carry = false;

        //result string to be returned
        std::string result;

        while(aHigh >=0 && bHigh>=0){

            //the 0s and 1s in string 'a' and 'b' are in char
            //so using (int) or static_cast<int> converts their ascii value to int
            //so we do '0' - '0' = 0 and '1' - '0' = 1 , and then store the 0 and 1 in
            //aElem and bElem
            uint8_t aElem = a[aHigh] - '0';
            uint8_t bElem = b[bHigh] - '0';

            if(aElem == 0 && bElem == 0){ // 0 and 0
                if(carry){
                    result.push_back('1');
                    carry = false;
                }else{
                    result.push_back('0');
                }
            }else if((aElem == 0 && bElem == 1) || (aElem == 1 && bElem == 0) ){ // 0 and 1 or 1 and 0
                //we simpligy the above condition to aElem == 0 || bElem == 0  ->this
                //will only work because of this particular if else if structure

                if(carry){
                    result.push_back('0');
                    carry = true;
                }else{
                    result.push_back('1');
                    carry = false;
                }
            }else if(aElem && bElem){ // 1 and 1
                if(carry){
                    result.push_back('1');
                    carry = true;
                }else{
                    result.push_back('0');
                    carry = true;
                }
            }

            aHigh --;
            bHigh --;
        }

        while(aHigh >= 0){
            if(carry){
                if(a[aHigh] - '0'){
                    result.push_back('0');
                    carry = true;
                }else{
                    result.push_back('1');
                    carry = false;
                }
            }else{
                result.push_back(a[aHigh]);
            }
            aHigh--;
        }

        while(bHigh >= 0){
            if(carry){
                if(b[bHigh] - '0'){
                    result.push_back('0');
                    carry = true;
                }else{
                    result.push_back('1');
                    carry = false;
                }
            }else{
                result.push_back(b[bHigh]);
            }
            bHigh--;
        }

        if(carry) result.push_back('1');

        std::reverse(result.begin() , result.end());
        return result;
    }
};

int main(){
    return 0;
}