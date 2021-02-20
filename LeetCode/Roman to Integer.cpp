class Solution {
public:
    int romanToInt(string s) {
        map<char,int> val;
        val['I'] = 1;
        val['V'] = 5;
        val['X'] = 10;
        val['L'] = 50;
        val['C'] = 100;
        val['D'] = 500;
        val['M'] = 1000;
        int res = 0;
        bool flag = true;
        
        for(int i = 0;i<s.size()-1;i++)
        {
            if(val[s[i+1]]>val[s[i]])
            {
                res = res+(val[s[i+1]] - val[s[i]]);
                if(i == s.size()-2)
                {
                    flag = false;
                }
                i++;
                    
            }
            else
            {
                res = res+val[s[i]];
            }
        }
        if(flag)
        {
            res = res + val[s[s.size()-1]];
        }
        return res;
    }
};
