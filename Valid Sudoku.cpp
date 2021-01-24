#include <bits/stdc++.h>
class Solution {
  public:
    bool validSudoku(vector<vector<int>>& board) {
      unordered_set<string> seen;
      
      for(int i =0;i<9;i++)
      {
        for(int j=0;j<9;j++)
        {
          if(board[i][j]!=0)
          {
            if(seen.find(to_string(board[i][j])+"is in row-"+to_string(i))!=seen.end()||
            seen.find(to_string(board[i][j])+"is in col-"+to_string(j))!=seen.end()||
            seen.find(to_string(board[i][j])+"is in subbox-"+to_string(i/3)+"-"+to_string(j/3))!=seen.end())
            {
              return false;
            }
            
            seen.insert(to_string(board[i][j])+"is in row-"+to_string(i));
            seen.insert(to_string(board[i][j])+"is in col-"+to_string(j));
            seen.insert(to_string(board[i][j])+"is in subbox-"+to_string(i/3)+"-"+to_string(j/3));
          }
        }
      }

      return true;
    }
};
