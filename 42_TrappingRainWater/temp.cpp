class Solution{
    public:
        int trap(std::vector<int>& height){
            int low = 0;
            int high = 1;
            int water = 0;
            int size = static_cast<int>(height.size());

            while(low<size-1 && high<size && low<=high){
                if(height[high] < height[low]) {
                    high++;
                }
                else if(height[high] >= height[low] && low != high-1){
                    int minHeight = std::min(height[high] ,height[low] );
                    low++;
                    while(low<high){
                        water += minHeight - height[low];
                        low++;
                    }
                }//else{
                //     high++;
                //     low = high-1;
                // }
            }
            return water;
        }
};
