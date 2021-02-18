class Solution {
public:
    
    
    int numberOfArithmeticSlices(vector<int>& A) {
        if(A.size()<3) return 0;
        vector<int> res (A.size(),0);
        
        for(int i = 2;i<A.size();i++)
        {
            if(A[i]-A[i-1] == A[i-1]-A[i-2])
            {
                if(res[i-1]>0)
                {
                    res[i] = res[i-1]+1;
                }
                else
                {
                res[i]++;
                }
            }
        }
        int ans = 0;
        for(int i = 0;i<res.size();i++)
        {
            ans = ans+res[i];
        }
        return ans;
    }
};
