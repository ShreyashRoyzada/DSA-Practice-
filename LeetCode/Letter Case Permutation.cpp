class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> res;
        string input = S;
        string output = "";
        solvei(input,output,res);
        return res;
    }
    
    void solvei(string inp,string out,vector<string> &res)
    {
        if(inp.size()==0)
        {
            res.push_back(out);
            return;
        }
        
        if(isalpha(inp[0]))
        {
            string op1 = out;
            op1.push_back(toupper(inp[0]));
            string op2 = out;
            op2.push_back(tolower(inp[0]));
            inp.erase(inp.begin()+0);
            solvei(inp,op1,res);      
            solvei(inp,op2,res);
        }
        else
        {
            string op1 = out;
            op1.push_back(inp[0]);
            inp.erase(inp.begin()+0);
            solvei(inp,op1,res);
        }
    }
    
};
