#include<iostream>
#include<vector>


class Solution{
	public:
		std::vector<int> productExceptSelf(std::vector<int>& nums){
			if(nums.size() == 0) return {};
			int n = (int)nums.size();
			std::vector<int> result(n,1);
            //prefix
			for(size_t i=1; i<nums.size(); i++){
				result[i] = result[i-1]*nums[i-1];
			}
            //postfix
            int postfix = 1;
			for(int i = (int)nums.size()-1; i>=0; i--){
                result[i] = result[i]*postfix;
				postfix *= nums[i]; 
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

	