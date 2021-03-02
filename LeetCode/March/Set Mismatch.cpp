class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> a;
        map<int,int> m;
        for(int i = 0 ;i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        for(auto i = m.begin(); i!= m.end(); i++)
        {
            if(i->second == 2)
            {
                a.push_back(i->first);
                break;
            }
        }
        for(int i = 1 ;i <= nums.size(); i++)
        {
            if(m.find(i) == m.end())
            {
                a.push_back(i);
                break;
            }
        }
        return a;
        
    }
};
