class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode dummy(0,head);

        ListNode* lastNode = &dummy;
        ListNode* beforeDelNode = &dummy;
        
        
        for(int i=0; i<=n; i++){
            lastNode = lastNode->next;
        }

        while(lastNode){
            beforeDelNode = beforeDelNode->next;
            lastNode = lastNode->next;
        }

        ListNode* deletedNode = beforeDelNode->next;
        beforeDelNode->next = beforeDelNode->next->next;
        delete deletedNode;
        return dummy.next;
    }
};