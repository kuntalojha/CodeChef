// Made by KUNTAL OJHA 05/01/2022
// CodeChef Begineers level.
// https://www.codechef.com/problems/FLOW006

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int i=0,N,j=0;
	    cin>>N;
	    while(N>0)
	    {
	        i=N%10;
	        N=N/10;
	        j=j+i;
	    }
        cout<<j<<endl;
	    
	}
	return 0;
}
