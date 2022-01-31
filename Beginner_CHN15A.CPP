// Made by KUNTAL OJHA 25/01/2022
// CodeChef Begineers level.
// Link: https://www.codechef.com/submit/CHN15A


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k,count=0;
	    cin>>n>>m;
	    while(n--)
	    {
	        cin>>k;
	        k=k+m;
	        if(k%7==0)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
