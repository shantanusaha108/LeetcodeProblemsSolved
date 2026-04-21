#include<iostream>
#include<vector>
#include<unordered_map>


class Solution{
	public:
		std::vector<int> twoSum(std::vector<int> nums, int target){
			std::unordered_map<int,int> hashMap;
			for(size_t i = 0; i<nums.size(); i++){
				int temp = target - nums[i];
				if(hashMap.find(temp)){
					return {(int)i,hashMap[temp]};
				}
				hashMap[nums[i]]=i;
			}
			return {};
		}
};



int main(){
	int size = 0;
	std::cout<<"Enter the size of the array : "<<std::endl;
	std::cin>>size;
	std::vector<int> nums;
	for(size_t i =0; i<size; i++){
		int temp = 0;
		std::cout<<"Enter the"<<i<<" element of the array : "<<std::endl;
		std::cin>>temp;
		nums.push_back(temp);
	}
	int target = 0;
	std::cout<<"Enter the target variable : "<<std::endl;
	std::cin>>target;
	Solution sol;
	std::vector<int> answer = sol.twoSum(nums,target);	
	if(answer.size()==2){
		std::cout<<"The required indexs are "<<answer[0]<<"and "<<answer[1]<<std::endl;
	}else{
		std::cout<<"req indexes not found";
	}
	return 0;
}

