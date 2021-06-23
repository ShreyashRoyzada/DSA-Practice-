#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n = 0;
	cin>>n;
	vector<int> v(n,0);
	
    for(int i = 0; i<n-1; i++){
	   int temp = 0;
	   cin>> temp;
	   if(v[temp-1]==0){
	       v[temp-1] = temp;
	   }
	}
	
	for(int i = 0; i<n; i++){
	    if(v[i] == 0){
	        cout<<i+1;
	        break;
	    }
	}

	
	return 0;
}
