class Solution {
public:
    string interpret(string command) {
        string parser = "";
        for(int i = 0;i<command.size()-1;i++)
        {
            if(command[i]=='G')
            {
                parser = parser+"G";
            }
            else if((command[i] == '(')&&(command[i+1] == ')'))
            {
                parser+=("o");
                i++;
            }
            else 
            {
                parser+=("al");
                i = i + 3;
            }
        }
        if(command[command.size()-1] == 'G')
        {
            parser+=("G");
        }
        
        return parser;
    }
};
