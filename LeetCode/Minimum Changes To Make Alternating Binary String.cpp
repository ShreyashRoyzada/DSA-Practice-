class Solution {
public:
    int minOperations(string s) {
        int size = s.size();
        string a,b;
        char val = '0';
        while(size)
        {
            a.push_back(val);
            if(val == '0') val = '1';
            else    val = '0';
    
            b.push_back(val);
            size--;
        }
        
        int compa=0,compb=0;
        
        for(int i = 0;i<s.size();i++)
        {
            if(s[i]!=a[i])
            {
                compa++;
            }
            
            if(s[i]!=b[i])
            {
                compb++;
            }
        }
        
        return min(compa,compb);
    }
};
