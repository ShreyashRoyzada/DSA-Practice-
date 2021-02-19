class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> h;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == '(')
            {
                h.push(i);
            }
            else if((s[i] == ')') && (h.size()!=0))
            {
                h.pop();
            }
            else if(s[i] == ')')
            {
                s.erase(s.begin()+i);
                i--;
            }
        }
        while(h.size())
        {
            s.erase(s.begin()+h.top());
            h.pop();
        }
        
        return s;
    }
};
