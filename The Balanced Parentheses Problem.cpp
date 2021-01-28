
class Solution {
  public:
    bool isValid(string s) {
      map<char,int> check;
      for(int i = 0;i<s.size();i++)
      {
        check[s[i]]++;
      }
      if((check['(']!=check[')']) || (check['[']!=check[']']) || (check['{']!=check['}']))
      {
        return false;
      }
      return true;
    }
};
