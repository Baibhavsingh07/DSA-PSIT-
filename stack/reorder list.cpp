class Solution {
public:

    ListNode* reverseList(ListNode* head) {
        ListNode *curr = head, *prev = NULL, *temp = NULL;
        while(curr){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr=temp;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        if(!head->next) return;
        ListNode *fwd = head;
        ListNode *fast_fwd = head;
        while(fast_fwd and fast_fwd->next){
            fast_fwd = fast_fwd->next->next;
            fwd = fwd->next;
        }
        ListNode *dummyPtr = reverseList(fwd);
        ListNode *curr = head;
        ListNode *curr_next = NULL;
        ListNode *temp = NULL;
        while(curr->next && dummyPtr->next){
            curr_next = curr->next;
            curr->next = dummyPtr;
            temp = dummyPtr->next;
            dummyPtr->next = curr_next;
            curr = curr_next;
            dummyPtr = temp;
        }

    }
};