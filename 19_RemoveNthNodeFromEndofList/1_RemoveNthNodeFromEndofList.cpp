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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n == 0) return head;
        else if(!head->next && n==1) return nullptr;

        ListNode* curr = head;
        int size = 0;
        while(curr){
            size++;
            curr=curr->next;
        }

        ListNode* prev = NULL;
        curr = head;
        int i = 1;
        while(i < (size-n)+1){
            prev = curr;
            curr = curr->next;
            i++;
        }

        //for when we need to delete the very first element
        //so we need to delete the very first elem , the loop
        //will not run has the condition will become false 
        //and prev will stay NULL
        if (prev == NULL) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        prev->next = curr->next;
        delete curr;
        return head;
    }
};