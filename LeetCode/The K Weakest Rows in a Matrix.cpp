class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> row (mat.size(),0), ans;
            
        for(int i = 0 ;i<mat.size();i++)
        {
            int temp = 0;
            for(int j = 0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1)
                {
                    temp++;
                }
                else    break;
            }
            row[i] = temp;
        }
        
        while(k)
        {
            int min = INT_MAX,index = -1;
            for(int i = 0;i<row.size();i++)
            {
                if(row[i]<min)
                {
                    min = row[i];
                    index = i;
                }
            }
            row[index] = INT_MAX;
            ans.push_back(index);
            k--;
        }
        return ans;
    }
};
