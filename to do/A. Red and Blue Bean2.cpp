#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n  = 0;
	cin>>n;
	for(int i = 0; i<n;i++)
	{
	    int r = 0, b = 0, d = 0;
	    cin>>r>>b>>d;
	    
	    if(r == 0 || b == 0)
	    {    
	        cout<<"NO"<<endl;
	        continue;
	    }
	    
	    int sm = min(r,b),mx = max(r,b);
	    while(sm)
	    {
	        sm--;
	        mx = mx - (d + 1);
	    }
	    
	    if(mx>0)
	    {
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	
	return 0;
}
