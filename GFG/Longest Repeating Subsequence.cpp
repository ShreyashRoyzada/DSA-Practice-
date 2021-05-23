// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    string b = str;
		    int dp[str.size()+1][b.size()+1];
		    
		    for(int i = 0; i<str.size()+1; i++){
		        for(int j = 0; j<b.size()+1;j++){
		            dp[i][j]  = 0;
		        }
		    }
		    
		    
		    for(int i = 1; i<str.size()+1; i++){
		        for(int j = 1; j<b.size()+1;j++){
		            if(str[i-1] == b[j-1] && i!=j){
		                dp[i][j] = dp[i-1][j-1] +1;
		            }
		            else{
		                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
		            }
		        }
		    }
		    
		    return dp[str.size()][b.size()];
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
