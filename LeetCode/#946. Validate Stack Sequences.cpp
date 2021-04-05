class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int j = 0;
        stack<int> s;
        for(int i = 0 ; i<pushed.size() ;i++)
        {
            s.push(pushed[i]);
            while(s.top() == popped[j])
            {
                s.pop();
                j++;
                if(s.size() == 0)
                    break;
            }
        }
        if((s.size() == 0) && (j == popped.size()))
            return true;
        
        return false;
    }
};
