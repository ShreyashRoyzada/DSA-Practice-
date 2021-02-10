class Solution {
public:
    string removeOuterParentheses(string S) {
        
        int check = 0;
        string ans="";
        for(int i = 0;i<S.size();i++)
        {
            if(S[i] == '(')
            {
                check++;
                if(check>1)
                {
                    ans+=S[i];
                }
            }
            else
            {
                if(S[i] == ')')
                {
                check--;
                if(check>0)
                {
                    ans+=S[i];
                }
                }
            }
            
        }
        return ans;
    }
};
