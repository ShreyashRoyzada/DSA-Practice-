#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t = 0;
	vector<int> v;
	
	cin>>t;
	for(int i = 0; i<t ;i++)
	{
	    v.clear();
	    int n = 0,k = 0;
	    cin>>n>>k;
	    for(int j = 0; j<n; j++)
	    {
	        int temp = 0;
	        cin>> temp;
	        v.push_back(temp);
	    }
	    int e = 0;
	    while(k && e<v.size())
	    {
	        
	            if(v[e]>=1){
	                v[e]--;
	                v[v.size()-1]++;
	                k--;
	            }
	            e++;
	        
	    }
	    for(int j = 0; j<n; j++)
	    {
	        cout<<v[j]<<" ";
	    }
	    
	    cout<<endl;
	}
	
	
	return 0;
}
