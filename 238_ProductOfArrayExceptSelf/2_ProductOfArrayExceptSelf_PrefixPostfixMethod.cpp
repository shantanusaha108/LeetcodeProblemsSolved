#include<iostream>
#include<vector>

class Solution{
	public:
		std::vector<int> productExceptSelf(std::vector<int>& nums){
			if(nums.size() == 0) return {};
			int prefix[nums.size()];
			int postfix[nums.size()];
			std::vector<int> result;
			for(size_t i=0; i<nums.size(); i++){
				if(i==0) {
					prefix[i]=1;
					continue;
				}
				prefix[i]=(prefix[i-1] * nums[i-1]);
			}
			for(int i = (int)nums.size()-1; i>=0; i--){
				if(i == nums.size()-1){
					postfix[i] = 1;
					continue;
				}
				postfix[i] = postfix[i+1] * nums[i+1];
			}
			for(size_t i=0; i<nums.size(); i++){		
				result.push_back(prefix[i] * postfix[i]);
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
	std::cout<<"The required array is : "<<std::endl;
	for(size_t i = 0; i< (int)size; i++){
		std::cout<<result[i]<<" ";
	}
	return 0;
}

	