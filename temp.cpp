// #include<iostream>
// #include<string>

// class Solution {
// public:
//     bool isPalindrome(string s) {
//         if(s.size() == 0) return false;

//         // std::vector<char> tempStr;
//         // for(size_t i=0; i<s.size(); i++){
//         //     if(s[i] >= 'a' && s[i] <= 'z'){
//         //         tempStr.push_back(s[i]);
//         //     }else if(s[i] >= 'A' && s[i] <= 'Z'){
//         //         tempStr.push_back(std::tolower(s[i]));
//         //     }else{
//         //         continue;
//         //     }
//         // }

//         size_t i=0 , j=s.size()-1;
//         size_t count = 1;
//         while(i<s.size() && j>=0){
//             if(tempStr[i] == tempStr[j]){
//                 count++;
//                 i++;
//                 j--;
//             }

//             if(s[i] >= 'A' && s[i] <= 'Z') s[i] = std::tolower(s[i]);
//             if(s[j] >= 'A' && s[j] <= 'Z') s[j] = std::tolower(s[j]);

//             if(!(s[i] >= 'a' && s[i] <= 'z') || !(s[i] >=0 && s[i] <=9) ){
//                 i++;
//             }
//             if(!(s[i] >= 'a' && s[i] <= 'z') || !(s[i] >=0 && s[i] <=9) ){
//                 j++;
//             }
//         }
//         if(count == tempStr.size()) return true;
//         return false;
//     }
// };






// #include<iostream>
// #include<string>

class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 0 || s.size() == 1) return true;

        std::vector<char> tempStr;
        for(size_t i=0; i<s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                tempStr.push_back(s[i]);
            }else if(s[i] >= 'A' && s[i] <= 'Z'){
                tempStr.push_back(std::tolower(s[i]));
            }else{
                continue;
            }
        }
        size_t i=0 , j=tempStr.size()-1;
        size_t count = 1;
        while(i<j){
            if(tempStr[i] == tempStr[j]){
                count++;
                i++;
                j--;
            }
        }
        if(count == tempStr.size()) return true;
        return false;
    }
};