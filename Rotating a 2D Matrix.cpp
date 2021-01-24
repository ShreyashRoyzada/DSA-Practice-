
class Solution {
  public:
    vector<vector<int>> rotate(vector<vector<int>>& matrix) {
      
      int size = matrix.size();
      for(int j = 0;j<size-1;j++)
      {
        for(int i =j;i<size-1-j;i++)
        {
        int t1 = matrix[j][i];
        int t2 = matrix[i][size-1-j];
        int t3 = matrix[size-1-j][size-1-i];
        int t4 = matrix[size-1-i][j];
        
        matrix[j][i] = t4;
        matrix[i][size-1-j] = t1;
        matrix[size-1-j][size-1-i] = t2;
        matrix[size-1-i][j] = t3;
        }
      }
      
      return matrix;
    }
};
