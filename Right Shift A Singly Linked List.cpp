
class Solution {
  public:
    ListNode* rotateRight(ListNode* head, int k) {
      ListNode* strtptr = head;
      int size = 1;
      while(strtptr->next!=NULL)
      {
        strtptr=strtptr->next;
        size++;
      }
      if((size-k)==0)
      {
        return head;
      }
      
      while(k>size)
      {
          k = k-size;
      }
      
      
      strtptr->next = head;
      
      strtptr = head;
      
      
      for(int i = 0;i<(size-k-1);i++)
      {
        strtptr=strtptr->next;
      }
      head = strtptr->next;
      strtptr->next = NULL;
      return head;
    }
};
