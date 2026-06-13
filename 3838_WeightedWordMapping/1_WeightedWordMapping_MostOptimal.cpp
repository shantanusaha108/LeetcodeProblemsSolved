class Solution {
public:
    std::string mapWordWeights(std::vector<std::string>& words, std::vector<int>& weights) {
        std::string result;
        result.reserve(words.size());

        for(const auto& elem : words){
            int tempSum = 0;
            for(char elem2 : elem){
                tempSum += weights[elem2 - 'a'];
            }
            result.push_back('z' - (tempSum%26));
        }

        return result;
    }
};