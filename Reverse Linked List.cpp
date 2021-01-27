class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        
        ListNode* pass = NULL;
        if(temp == NULL) return temp;
        while(temp->next!=NULL)
        {
                ListNode* temp1 = temp -> next;
                temp -> next = pass;
                pass = temp;
                temp = temp1;
        }
        temp ->next = pass;
        return temp;
        
    }
};
