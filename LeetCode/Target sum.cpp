class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0,nzero = 0;
        
        for(int i = 0 ;i < nums.size(); i++){
            sum += nums[i];
            if(nums[i] == 0){
                nzero++;
            }
        }
        
        if(target>sum || target<(-sum)){
            return 0;
        }
        
        if((target+sum)%2){
            return 0;
        }
        
        int t = (target + sum)/2;
        int dp[nums.size()+1][t+1];
        
        for(int i=0; i<nums.size()+1; i++){
            for(int j = 0; j<t+1; j++){
                if(i == 0){
                    dp[i][j] = 0;
                }
                if(j == 0){
                    dp[i][j] = 1;
                }
            }
        }

        for(int i=1; i<nums.size()+1; i++){
            for(int j = 1; j<t+1; j++){
                if(nums[i-1]==0){
                    dp[i][j] = dp[i-1][j]; 
                 } 
                else if(nums[i-1]>j){
                    dp[i][j] = dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j-nums[i-1]] + dp[i-1][j];
                }
            }
        }
        
        
        return dp[nums.size()][t]*pow(2,nzero);
    }
};
