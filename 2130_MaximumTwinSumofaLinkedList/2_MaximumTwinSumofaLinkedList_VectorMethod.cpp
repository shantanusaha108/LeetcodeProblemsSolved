#include<iostream>
#include<vector>



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* lastElem = head;
    std::vector<int> result;
    while(lastElem){
        result.push_back(lastElem->val);
        lastElem = lastElem->next;
    }

    int maxSum = INT_MIN;
    int low = 0;
    int high = result.size()-1;
    while(low<high){
        maxSum = std::max(maxSum , result[low]+result[high]);
        low++;
        high--;
    }

    return maxSum;
    }
};



int main(){
    return 0;
}