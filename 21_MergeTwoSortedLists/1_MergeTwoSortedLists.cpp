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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* forList1 = list1;
        ListNode* forList2 = list2;
        ListNode* resultantHead = NULL;
        ListNode* resultantNode = NULL;

        while(forList1 || forList2){
            ListNode* temp = NULL;
            if(forList1 && forList2){
                if(forList1->val <= forList2->val){
                    temp = forList1;
                    forList1 = forList1->next;
                }else{
                    temp = forList2;
                    forList2 = forList2->next;
                }
            }else if(forList1){
                temp = forList1;
                forList1 = forList1->next;
            }else{
                temp = forList2;
                forList2 = forList2->next;
            }


            if(resultantHead == NULL){
                resultantHead = temp;
                resultantNode = temp;
            }else{
                resultantNode->next = temp;
                resultantNode = temp;
            }
        }

        return resultantHead;
    }
};