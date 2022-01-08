// Made by KUNTAL OJHA 08/01/2022
// CodeChef Begineers level.
// Link: https://www.codechef.com/submit/LUCKFOUR

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N,a=0,b=0;
	    cin>>N;
	    while(N)
	    {
	        a=N%10;
	        if(a==4)
	        {
	            b++;
	        }
	        N=N/10;
	    }
	    cout<<b<<endl;
	}
	return 0;
}
