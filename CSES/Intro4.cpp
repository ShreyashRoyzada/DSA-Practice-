#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int n = 0;
	vector<int> v;
	cin>>n;
	for(int i =0; i<n; i++){
	    int temp = 0;
	    cin>>temp;
	    v.push_back(temp);
	}
	unsigned long long int count = 0;
	for(int i = 1; i<n; i++){
	    while(v[i]<v[i-1]){
	        count++;
	        v[i]++;
	    }
	}
	cout<<count;
	return 0;
}
