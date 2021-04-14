#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    void inst(stack<int>& s, int k)
    {
        if(s.size() == 0)
        {
            s.push(k);
            return;
        }
        int temp = s.top();
        s.pop();
        inst(s,k);
        s.push(temp);
        return;
    }
    
    void revStack(stack<int>& s)
    {
        if(s.size() == 1)
        {
            return;
        }
        int temp = s.top();
        s.pop();
        revStack(s);
        inst(s,temp);
        return;
    }
};

// { Driver Code Starts.
int main() {
    
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            cout<<"Original Stack- ";
            stack<int> stkcpy = myStack;
            while(!stkcpy.empty())
            {
                cout<<stkcpy.top()<<" ";
                stkcpy.pop();
            }
            cout<<endl;
            ob.revStack(myStack);
            cout<<"Reversed Stack- ";
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;

    return 0;
}
