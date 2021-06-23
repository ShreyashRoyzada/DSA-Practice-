#include <iostream>
using namespace std;

int main() {
	// yourcode goes here
	unsigned long long int n = 0;
	cin>>n;
	while(n!=1){
	    if(n%2==0){
	        cout<<n<<" ";
	        n=n/2;
	    }
	    else{
	        cout<<n<<" ";
	        n = (n * 3)+1;
	    }
	}
	cout<<n;
	return 0;
}
