class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        int n = A.size();
        multiset<int> s(A.begin(),A.end());
        vector<int> ans(n,-1);
        
        for(int i = 0; i<n; i++)
        {
            auto itr= s.upper_bound(B[i]);
            if(itr!=s.end()){
                ans[i] = *itr;
                s.erase(itr);
            }
        }
        
        for(int i = 0; i<n; i++)
        {
            if(ans[i] == -1){
                ans[i] = *s.begin();
                s.erase(s.begin());
            }
        }
        return ans;
    }
};
