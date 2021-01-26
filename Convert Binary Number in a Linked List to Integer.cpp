class Solution {
public:
    int i = 0, ans = 0;
    void reverse(ListNode* node)
    {
        if(node==NULL)
        {
            return;
        }
        
        reverse(node->next);
        if(node->val==1)
        {
            ans=ans+pow(2,i);
        }
        i++;
    }
    
    int getDecimalValue(ListNode* head) {
        reverse(head);
        return ans;
    }
};
