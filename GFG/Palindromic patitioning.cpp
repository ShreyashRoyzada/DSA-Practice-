// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool ispalin(string s, int i, int j){
        if(i>=j){
            return true;
        }
        
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    
    int dp[1001][1001];
    int solve(string s,int i, int j){
   
        if(i>=j){
            return 0;
        }
        
        if(ispalin(s,i,j)){
            return 0;
        }
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        int mn = INT_MAX;
        for(int k = i; k<=j-1;k++){
 
            int left= 0,right = 0;
            if(dp[i][k]!=-1){
                left = dp[i][k];
            }
            else{
                left = solve(s,i,k);
                dp[i][k]=left;
            }
            
            if(dp[k+1][j]!=-1){
                right = dp[k+1][j];
            }
            else{
                right = solve(s,k+1,j);
                dp[k+1][j] = right;
            }
            
            int temp = left + right + 1;
            if(temp<mn){
                mn = temp;
            }
        }
        
        
        if(mn == INT_MAX){
            return INT_MAX/100;
        }
        
        return dp[i][j] = mn;
        
    }
    int palindromicPartition(string str)
    {
        memset(dp,-1,sizeof(dp));
       
        return solve(str,0,str.size()-1);
        // code here
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
