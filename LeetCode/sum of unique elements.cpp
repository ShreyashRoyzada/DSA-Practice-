class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> m;
        for(int i = 0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        int res = 0;
        for(auto itr = m.begin();itr!= m.end();itr++)
        {
            if(itr->second == 1)
            {
                res = res + itr->first;
            }
        }
        
        return res;
    }
};
