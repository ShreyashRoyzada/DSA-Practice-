#include<set>
class Solution {
  public:
    vector<vector<int>> threeSum(vector<int>& A) {
      
      sort(A.begin(),A.end());
      set<vector<int>> ans;
      for(int itr = 0;itr<A.size();itr++)
      {
        int target = -(A[itr]);
        int start = itr+1, end = A.size()-1;
        while(start<end)
        {
          if((A[start])+(A[end])>target)
          {
            end--;
          }
          else if((A[start])+(A[end])<target)
          {
            start++;
          }
          else
          {
            vector<int> temp;
            temp.push_back(A[itr]);
            temp.push_back(A[start]);
            temp.push_back(A[end]);
            ans.insert(temp);
            start++;
          }
        }
      }
      
      vector<vector<int>> final;
      for(auto itr = ans.begin();itr!=ans.end();itr++)
      {
        final.push_back(*itr);
      }
      return final;
    }
};
