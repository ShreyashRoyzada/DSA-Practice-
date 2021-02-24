class Solution {
public:
    int scoreOfParentheses(string S) {
        stack<int> s;
        int res = 0;
        
        for(int i = 0; i<S.size(); i++)
        {
            if(S[i] == '(')
            {
                s.push(res);
                res = 0;
            }
            else 
            {
               res = s.top() + max((2*res),1);
                s.pop();
            }
        }
        
        return res;
    }
};
