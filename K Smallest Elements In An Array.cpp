#include <limits.h>
class Solution {
  public:
    vector<int> kSmallestElements(vector<int>& elements, int k) {
      
      vector<int> answer;
      int min = INT_MAX, min_in = 0;
      bool ch = false;
      if(k == elements.size())
      {
        k--;
        ch = true;
      }
      while(k)
      {
      for(int i = 0;i<elements.size();i++)
      {
        if(elements[i]<min)
        {
          min = elements[i];
          min_in = i;
        }
      }
      answer.push_back(min);
      elements.erase(elements.begin()+min_in);
      k--;
      }
      
      if(ch)
      {
        answer.push_back(elements[0]);
      }
      return answer;
    }
};
