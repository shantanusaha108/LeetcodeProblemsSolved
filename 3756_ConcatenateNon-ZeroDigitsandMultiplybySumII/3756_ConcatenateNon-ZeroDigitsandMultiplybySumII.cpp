#include<iostream>
#include<algorithm>
#include<vector>
#include<string>


using namespace std;


class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int sum = 0;
        string xString = "0";
        long long MOD = 1e9 + 7;
        vector<int> sumS;
        for(const auto& elem : queries){
            for(int i=elem[0]; i<=elem[1]; i++){
                if(s[i] != '0') {
                    xString += s[i];
                    sum += s[i] - '0';
                }
            }
            long long temp = std::stoll(xString) * sum;
            if(temp > INT_MAX){
                sumS.push_back(temp%MOD);
            }else{
                sumS.push_back(temp);
            }
            xString = "0";
            sum = 0;
        }

        return sumS;
    }
};

int main(){
    Solution sol;
    string s = "10203004";
    vector<vector<int>> q = {{0,7},{1,3},{4,6}};
    vector<int> result = sol.sumAndMultiply(s,q);
    return 0;
}