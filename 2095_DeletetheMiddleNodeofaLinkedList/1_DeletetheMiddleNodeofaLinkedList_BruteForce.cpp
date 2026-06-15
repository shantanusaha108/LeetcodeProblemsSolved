#include<iostream>

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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head) return head;
        ListNode* indexCount = head;
        int index = 0;
        while(indexCount){
            ++index;
            indexCount = indexCount->next;
        }
        if(index == 1){
            head = NULL;
            return head;
        }

        
        ListNode* prev = head;
        ListNode* curr = head->next;
        int i = 1;
        while(i < (index/2)){
            curr = curr->next;
            prev = prev->next;
            i++;
        }

        prev->next = curr->next;
        delete(curr);

        return head;
    }
};


int main(){
    return 0;
}