#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	
	int mx = 1,count = 1;
	for(int i = 0;i<s.size()-1; i++){
	    if(s[i] == s[i+1]){
	        count++;
	        if(count>mx){
	            mx = count;
	        }
	    }
	    else{
	        count = 1;
	    }
	}
	cout<<mx;
	return 0;
}
