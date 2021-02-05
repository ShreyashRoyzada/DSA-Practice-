class Solution {
public:
    int findLHS(vector<int>& nums) {
        std::map<int,int> m;
        for(int i = 0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int max=0;
        auto e = prev(m.end(),1);
        for(auto itr = m.begin();itr != e;itr++)
        {
            auto n = next(itr,1);
            if(abs((n->first)-(itr->first)) == 1)
            {
                if((n->second)+(itr->second)>=max)
                {
                    max = (n->second)+(itr->second);
                }
            }
        }
        
        return max;

    }
};
