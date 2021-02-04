/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    bool hasCycle(ListNode *head) {
        ListNode* hare = head;
        ListNode* tur = head;
        if(tur == NULL) return false;
        if(tur->next == NULL) return false;
        while((tur->next !=NULL)||(hare->next->next != NULL))
        {
            hare = hare->next->next;
            tur = tur->next;
            if(hare == tur)
            {
                return true;
            }
            if(tur->next == NULL) return false;
            if(hare->next == NULL) return false;
            if(hare->next->next == NULL) return false;
            
        }
        return false;
    }
};

