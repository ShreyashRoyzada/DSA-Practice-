class Solution {
public:
        int countConsistentStrings(string allowed, vector<string>& words) {
        int res = words.size();
            bool ar[26] {0};
            for(int i =0;i<allowed.size();i++)
            {
                ar[allowed[i]-'a'] = true;
            }
            for(int i = 0;i<words.size();i++)
            {
                for(int j=0 ; j<words[i].size();j++)
                {
                    if(ar[words[i][j]-'a']!= true)
                    {
                        res--;
                        break;
                    }
                }
            }
            return res;
            
    }
};
