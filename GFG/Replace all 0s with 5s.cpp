// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int recurs(int n){
    if(n == 0){return 0;}
    
    int dig = n%10;
    if(dig == 0){
        dig = 5;
    }
    
    return recurs(n/10)*10 + dig;
}

int convertFive(int n) {
    if(n == 0)
        return 0;
        
    return recurs(n);
    // Your code here
}
