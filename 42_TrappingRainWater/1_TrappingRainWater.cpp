class Solution{
    public:
        int trap(std::vector<int>& height){
            int low = 0;
            int high = 1;
            int water = 0;
            int size = static_cast<int>(height.size());

            while(high<size && low<=high){
                while(height[high] < height[low]) {
                    high++;
                }
                if(height[high] >= height[low] && low != high-1 && low != high){
                    int minHeight = std::min(height[high] ,height[low] );
                    low++;
                    while(low<high){
                        water += minHeight - height[low];
                        low++;
                    }
                    low++;
                }
            }
            return water;
        }
};



