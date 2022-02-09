// This code is made by KUNTAL OJHA

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,new_x=0;
	    cin>>n>>x;
	    if(x<=n)
	    {
	        cout<<x<<endl;
	    }
	    if(x>n)
	    {
	        new_x=x%(n+1);
	        cout<<new_x<<endl;
	    }
	}
	return 0;
}
