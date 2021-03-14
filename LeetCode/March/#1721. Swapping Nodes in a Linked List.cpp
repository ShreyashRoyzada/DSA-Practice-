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
    ListNode* swapNodes(ListNode* head, int k) {
        
        int sz = 0;
        ListNode* ptr1 = head;
        while(ptr1)
        {
            sz++;
            ptr1=ptr1->next;
        }
        
        ListNode* ptr2 = head,*ptr3 = head;
        int j = k-1,i = sz-k;
        while(j)
        {
            j--;
            ptr2 = ptr2->next;
        }
        
        while(i)
        {
            i--;
            ptr3= ptr3->next;
        }
        int ptr = ptr2->val;
        ptr2->val = ptr3->val;
        ptr3->val = ptr;
        return head;
    }
};
