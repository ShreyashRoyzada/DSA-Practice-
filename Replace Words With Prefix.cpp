
class Solution {
  public:
    string replaceWordsWithPrefix(vector<string>& prefixes, string sentence) {
      string word;
      string ans;
      for(int i=0; i<sentence.size(); i++)
      {
        if(sentence[i]==' ')
        {
          word.erase();
          ans.push_back(sentence[i]);
        }
        else 
        {
          word.push_back(sentence[i]);
          ans.push_back(sentence[i]);
          for(int j=0;j<prefixes.size();j++)
          {
            if(word==prefixes[j])
            {
              while(sentence[i]!=' ')
              {
                i++;
              }
              i--;
              break;
            }
          }
        }
      }
      return ans;
    }
};
