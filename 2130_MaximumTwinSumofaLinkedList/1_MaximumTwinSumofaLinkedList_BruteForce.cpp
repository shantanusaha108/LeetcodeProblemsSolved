#include<iostream>
#include<vector>
#include<climits>



class Solution {
public:
    int pairSum(ListNode* head) {
    ListNode* twin1 = head;
    int LLsize = 0;
    while(twin1){
        ++LLsize;
        twin1 = twin1->next;
    }
    twin1 = head;

    int i = 0;
    int maxSum = INT_MIN;
    while(i <= (LLsize/2)-1){
        ListNode* twin2 = twin1;
        int j = i+1;
        while(j <= (LLsize-1-i) && twin2->next != NULL){
            twin2 = twin2->next;
            j++;
        }

        maxSum = std::max(maxSum , twin1->val + twin2->val);
        twin1 = twin1->next;
        i++;
    }

    return maxSum;
    }
};


int main(){
    return 0;
}