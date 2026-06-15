class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n == 0) return head;
        else if(!head->next && n==1) return nullptr;

        ListNode* lastNode = head;
        ListNode* beforeDelNode = NULL;
        
        while(lastNode){
            if(n > 0){
                lastNode = lastNode->next;
                n--;
                continue;
            }
            if(beforeDelNode == NULL) beforeDelNode = head;
            else beforeDelNode = beforeDelNode->next;
            lastNode = lastNode->next;
        }

        //for when we need to delete the very first element
        //so we need to delete the very first elem , the loop
        //will not run has the condition will become false 
        //and prev will stay NULL
        if (beforeDelNode == NULL) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        ListNode* deletedNode = beforeDelNode->next;
        beforeDelNode->next = beforeDelNode->next->next;
        delete deletedNode;
        return head;
    }
};