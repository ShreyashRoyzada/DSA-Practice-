
class Solution {
  public:
    ListNode* removeKthToLast(ListNode* head, int k) {
      
      int size = 0;
      ListNode* temp = head;
      while(temp!=NULL)
      {
        size++;
        temp = temp->next;
      }
      
      temp = head;
      
      if((size-k)==0)
      {
        head = head->next;
      }
      else
      {
      for(int i = 0;i<size-k-1;i++)
      {
        temp=temp->next;
      }
      temp->next = temp->next->next;
      }
      // if(size)
      return head;
    }
};
