


//amar bhava samadhan
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        std::sort(costs.begin() , costs.end());
        int count = 0;
        int temp = 0;
        for(auto ch : costs){
            if(temp+ch <= coins ){
                temp += ch;
                count++;
            }
        }
        return count;
    }
};