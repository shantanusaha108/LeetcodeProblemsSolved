#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        if(height.size()==0) return 0;
        
        int left = 0;
        int right = static_cast<int>(height.size()-1);

        int area = INT_MIN;
        while(left < right){
            area =std::max(
                ((right-left) * std::min(height[right],height[left])) , //current area
                area);

            if(height[left] < height[right]){
                left ++;
                continue;
            }else{
                right --;
                continue;
            }

        }
        return area;
    }
};


int main(){
    return 0;
}