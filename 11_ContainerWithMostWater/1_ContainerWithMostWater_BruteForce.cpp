#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>


class Solution {
public:
    int maxArea(std::vector<int>& height) {
        if(height.size()==0) return 0;
        int area = INT_MIN;
        for(size_t i=0; i<height.size(); i++){
            for(size_t j=i+1; j<height.size(); j++){
                int minHeight = std::min(height[i] , height[j]);
                area = std::max(static_cast<int>((j-i) * minHeight) , area);
                //since j<i , j-i is length and the minimum height is the height of the container
                //so area = length * breath(height)
            }
        }
        return area;
    }
};

int main(){
    return 0;
}