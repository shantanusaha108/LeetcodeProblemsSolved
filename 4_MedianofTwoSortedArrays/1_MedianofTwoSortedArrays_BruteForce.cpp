#include<iostream>
#include<vector>

void printVector(std::vector<int>& nums){
    for(auto num : nums){
        std::cout<<num<<" ";
    }
    std::cout<<std::endl;
}

void mergeVector(std::vector<int>& mergedArray, std::vector<int>& nums1, std::vector<int>& nums2){
    int i = 0;
    int j = 0;
    while(i < nums1.size() && j < nums2.size()){
        if(nums1[i] < nums2[j]){
            mergedArray.push_back(nums1[i]);
            i++;
        }else if(nums1[i] > nums2[j]){
            mergedArray.push_back(nums2[j]);
            j++;
        }else{
            mergedArray.push_back(nums1[i]);
            i++;
            mergedArray.push_back(nums2[j]);
            j++;
        }
        
    }

    while(i<nums1.size()){
        mergedArray.push_back(nums1[i]);
        i++;
    }
    while(j<nums2.size()){
        mergedArray.push_back(nums2[j]);
        j++;
    }
}

class Solution{
    public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        if(nums1.size()==0 && nums2.size()==0) return 0;

        std::vector<int> mergedArray;
        mergeVector(mergedArray, nums1,nums2);
        
        int n = mergedArray.size();
        if(mergedArray.size()%2==0){
            return ((mergedArray[(n/2)-1] + mergedArray[(n/2)])/2.0) * 1.0;
        }else{
            return (mergedArray[(n)/2]) * 1.0;
        }
    }
};


int main(){
    std::vector<int> nums1 = {1,2,3,4,5};
    std::vector<int> nums2 = {6,7,8,9,10,11,12,13,14,15,16,17};

    Solution sol;
    std::cout<<"Median : "<<sol.findMedianSortedArrays(nums1,nums2)<<std::endl;
    return 0;
}