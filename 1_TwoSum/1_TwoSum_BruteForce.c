#include<iostream>
#include<vector>

class Solution{
	public:
		std::vector<int> twoSum(std::vector<int> &nums , int target){
			for(size_t i=0 ;i<nums.size(); i++){
				for(size_t j=i+1 ; j<nums.size(); j++){
					if(nums[i] + nums[j] == target){
						return {i,j};
					}
				}
			} 
            return {};
		}
};	






int main(){
    std::vector<int> nums ;
    std::cout<<"Enter the total number of elements : "<<std::endl;
    int size_of_nums;
    std::cin>>size_of_nums;
    int temp;
    for(size_t i=0;i<size_of_nums;i++){
        std::cout<<"Enter the "<<i<<" element of the array : "<<std::endl;
        std::cin>>temp;
        nums.push_back(temp);
    }
    int target=0;
    std::cout<<"Enter the target sum : "<<std::endl;
    std::cin>>target;

    Solution sol;
    std::vector<int> answer = sol.twoSum(nums,target);
    if(answer.size()==2){
            std::cout<<"The required elements are found at index : "<<answer[0]<<" and "<<answer[1]<<std::endl;
    }else{
        std::cout<<"No valid elements"<<std::endl;
    }
	return 0;
}
