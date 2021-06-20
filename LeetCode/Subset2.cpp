class Solution {
public:
    set<vector<int>> s;
    
    void solve(vector<int> ip, vector<int> op){
        if(ip.size()==0){
            sort(op.begin(),op.end());
            s.insert(op);
            return;
        }
        
        vector<int> op1 = op;
        vector<int> op2 = op;
        
        op1.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        
        solve(ip,op1);
        solve(ip,op2);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> op;
        solve(nums,op);
        
        vector<vector<int>> ans;
        
        for(auto i = s.begin(); i!=s.end(); i++){
            ans.push_back(*i);
        }
        return ans;
    }
};
