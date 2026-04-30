#include<iostream>
#include<vector>



class Solution{
	public:
		std::vector<int> productExceptSelf(std::vector<int>& nums){
			if(nums.size() == 0) return {};
			std::vector<int> result;
			for(int temp1 : nums){
				int productTemp = 1;
				for(int temp2 : nums){
					if(temp2 == temp1) continue;
					productTemp *= temp2;
				}
				result.push_back(productTemp);
			}
			return result;
		}
};


int main(){
	int size;
	int tempvar;
	std::vector<int> nums;
	std::cout<<"enter the size of the nums array : "<<std::endl;
	std::cin>>size;
	for(int i = 0; i<size; i++){
		std::cout<<"enter the value for element at "<<i<<" :"<<std::endl;
		std::cin>>tempvar;
		nums.push_back(tempvar);
	}

	Solution sol;
	std::vector<int> result = sol.productExceptSelf(nums);
	for(size_t i = 0; i< (int)size; i++){
		std::cout<<result[i]<<std::endl;
	}
	return 0;
}

	
