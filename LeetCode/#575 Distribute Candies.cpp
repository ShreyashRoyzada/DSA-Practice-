class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        map<int,int> type;
        for(int i = 0; i<candyType.size(); i++)
        {
            type[candyType[i]]++;
        }
        int allowed = candyType.size()/2;
        set<int> s;
        while(allowed!=0)
        {
        for(auto i = type.begin(); i!=type.end(); i++)
        {
            if(allowed == 0)
            {
                break;
            }
            if(i->second == 0)
            {
                continue;
            }
            s.insert(i->first);
            i->second--;
            allowed--;
        }
        }
        return s.size();
    }
};
