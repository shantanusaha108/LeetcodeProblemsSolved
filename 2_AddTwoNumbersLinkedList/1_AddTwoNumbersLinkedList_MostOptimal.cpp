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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode* curr = NULL;

        bool carry = false;
        while(l1 && l2){
            ListNode* temp = new ListNode();
            
            if(carry){
                int sum = carry + l1->val + l2->val;
                if(sum > 9){
                    carry = true;
                    temp->val = sum%10;
                }else{
                    carry = false;
                    temp->val = sum;
                }
            }else{
                int sum = l1->val + l2->val;
                if(sum > 9){
                    carry = true;
                    temp->val = sum%10;
                }else{
                    carry = false;
                    temp->val = sum;
                }
            }

            

            if(!head){
                head = temp;
                curr = temp;
            }else{
                curr->next = temp;
                curr = temp;
            }
               
            l1 = l1->next;
            l2 = l2->next;
        }

        while(l1){
            ListNode* temp = new ListNode();
            if(carry){
                int sum = carry + l1->val;
                if(sum > 9){
                    carry = true;
                    temp->val = sum%10;
                }else{
                    carry = false;
                    temp->val = sum;
                }
            }else temp->val = l1->val;
            curr->next = temp;
            curr = temp;
            l1 = l1->next;
        }
        while(l2){
            ListNode* temp = new ListNode();
            if(carry){
                int sum = carry + l2->val;
                if(sum > 9){
                    carry = true;
                    temp->val = sum%10;
                }else{
                    carry = false;
                    temp->val = sum;
                }
            }else temp->val = l2->val;
            curr->next = temp;
            curr = temp;
            l2 = l2->next;
        }

        if(carry){
            ListNode* temp = new ListNode();
            temp->val = 1;
            curr->next = temp;
            curr = temp;
        }
        curr->next = NULL;
        return head;
    }
};



int main(){
    return 0;
}