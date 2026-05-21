#include<iostream>
#include<vector>




class Solution{
    public:
        int trap(std::vector<int>& height){
            int low = 0;
            int high = 1;
            int water = 0
            while(low<static_casr<int>(height.size())-1 && high<static_casr<int>(height.size()) && low<high){
                if(height[high] < height[low]) {
                    high++;
                }else if(height[high] >= height[low] && low != height-1){
                    int minHeight = std::min(height[high] ,height[low] );
                    low++;
                    while(low<high){
                        water += minHeight - height[low];
                        low++;
                    }
                }else{
                    low = high;
                    high++;
                    
                }
            }
            return water;
        }
};


class Solution{
    public:
        int trap(std::vector<int>& height){
            int low = 0;
            int high = 1;
            int water = 0;
            while(high<static_cast<int>(height.size()) && low<=high){
                while(height[high] < height[low]) {
                    high++;
                }
                if(height[high] >= height[low] && low != high-1 && low != high){
                    if(height[high] >= height[high+1]){
                        int minHeight = std::min(height[high] ,height[low] );
                        low++;
                        while(low<high){
                            water += minHeight - height[low];
                            low++;
                        }
                        low++;
                    }else{
			    high++;
		    }
                }
                // else{
                //     high++;
                //     low = high-1;
                // }
            }
            return water;
        }
};



int main(){
    return 0;
}
