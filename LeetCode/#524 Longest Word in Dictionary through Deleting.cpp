class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
      int max = INT_MIN;
        if(s.size()==0)
        {
            return "";
        }
      for(int i = 0;i<d.size();i++)
      {
          int ptr1 = 0, ptr2 = 0;
          int TempMax = 0;
          while(ptr2<d[i].size())
          {
              if(s[ptr1] == d[i][ptr2])
              {
                  ptr1++;
                  ptr2++;
                  TempMax++;
              }
              else
              {
                  ptr1++;
              }
              
              if(ptr1==s.size()&&ptr2!=d[i].size())
              {
                  d.erase(d.begin()+i);
                  i--;
                  TempMax = 0;
                  break;
              }
          }
          
          if(TempMax > max)
          {
              max = TempMax;
          }
              
      }
      cout<< max;
      string res = "";
      int min = 'z';
      for(int i = 0;i<d.size();i++)
      {
          
          if(d[i].size() == max)
          {
              if(d[i][0]<min)
              {
                  res = d[i];
                  min = d[i][0];
              }
          }
      }
        return res;
    }
};
