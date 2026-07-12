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
        vector<int> sumS;
        for(const auto& elem : queries){
            for(int i=elem[0]; i<=elem[1]; i++){
                if(!(s[i]==0)) {
                    xString += static_cast<char>(s[i]);
                    sum += s[i];
                }
            }
            sumS.push_back(stoi(xString) * sum);
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