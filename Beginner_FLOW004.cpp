// Made by KUNTAL OJHA 07/01/2022
// CodeChef Begineers level.
// Link: https://www.codechef.com/submit/FLOW004
// Sume of any number first and last digits.

#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
	int t,l;
	cin>>t;
	l=t;
	while(t--)
	{
	    int n,i=0,j=0,k;
	    cin>>n;
	    k=n;
	    while(n)
	     {
	         if(k==n)
	         {
    	         i=n%10;
	         }
	         if(n<=9)
	         {
	             j=n;
	         }
	         n=n/10;
	     }
	    cout<<i+j<<endl;
	}
	return 0;
}
