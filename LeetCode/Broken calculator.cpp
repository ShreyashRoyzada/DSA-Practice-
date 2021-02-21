class Solution {
public:
    int brokenCalc(int X, int Y) {
        int res = 0;
        while(Y>X)
        {
            if(Y%2 == 0)
            {
                res++;
                Y = Y/2;
            }
            else
            {
                res++;
                Y++;
            }
        }
        return res + X-Y;
    }
};
