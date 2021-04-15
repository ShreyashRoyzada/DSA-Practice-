class Solution {
public:
    int kthGrammar(int N, int K) {
        if(N == 1)
        {
            return 0;
        }
        int temp = kthGrammar(N-1,(K+1)/2);
        if(temp == 0)
        {
            if(K%2 == 0)
            {
                return 1;
            }
            else{
                return 0;
            }
        }
        else
        {
            if(K%2 == 0)
            {
                return 0;
            }
            else{
                return 1;
            }
        }
    }
};
