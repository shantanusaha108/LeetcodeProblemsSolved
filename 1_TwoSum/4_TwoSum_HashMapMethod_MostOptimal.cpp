#include<iostream>
#include<vector>
#include<unordered_map>

class Solution{
	public:
		std::vector<int> twoSum(std::vector<int> nums , int target ){
			std::unordered_map<int,int> hashMap;
			for(size_t i = 0; i<nums.size(); i++){
				int temp = target - nums[i];
				auto it = hashMap.find(target-nums[i]);
				if(it != hashMap.end()){
					return {it->second , (int)i};
				}
				hashMap[nums[i]] = (int)i;
			}
			return {};
		}
};


int main(){
	int size;
	std::cout<<"Enter the size of the array : "<<std::endl;
	std::cin>>size;
	std::vector<int> nums;
	for(size_t i = 0; i<size; i++){
		int temp = 0;
		std::cout<<"Enter the "<<i<<" element of the array : "<<std::endl;
		std::cin>>temp;
		nums.push_back(temp);
	}
	int target = 0;
	std::cout<<"Enter the target value : "<<std::endl;
	std::cin>>target;
	Solution sol;
	std::vector<int> answer = sol.twoSum(nums,target);
	if(answer.size()==2){
		std::cout<<"The required elements are : "<<answer[0]<<" and : "<<answer[1]<<std::endl;
	}else{
		std::cout<<"The required elements are not present in the array."<<std::endl;
	}

	return 0;
}
