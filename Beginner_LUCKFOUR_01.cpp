// Made by KUNTAL OJHA 08/01/2022
// CodeChef Begineers level.
// Link: https://www.codechef.com/submit/LUCKFOUR

#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string N;
        int count=0;
	    cin>>N;
        for (int  i = 0; i<=N.length; i++)
        {
            if( N.[i]=="4")
            {
                count++;
            }
        }
        cout<<count<<endl;
        
        /*
	    while()
	    {
	        a=N%10;
	        if(a==4)
	        {
	            b++;
	        }
	        N=N/10;
	    }
	   // cout<<b<<endl;
       */
	}
	return 0;
}
