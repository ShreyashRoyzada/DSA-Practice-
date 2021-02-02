class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1;
        bool ch = true;
        int ans = 0;
        for(int j = i;j>=0;j--)
        {
            if(ch && s[j] ==' ')
            {
                ans = ans+0;
            }
            else if(s[j]!= ' ')
            {
                ans++;
                ch = false;
            }
            
            if(ch == false && s[j] == ' ')
            {
                break;
            }
        }
        
        return ans;
    }
};
