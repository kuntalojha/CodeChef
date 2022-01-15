// Made by KUNTAL OJHA 12/01/2022
// CodeChef DSA Learning Searies
// Topic NO 0 
// Topic: Easy Problem to Get Started
// Link: https://www.codechef.com/CCSTART2/submit/REVSTRPT

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for (int i=1; i<=n; i++) 
	{
	    for (int j=0; j<n; j++) 
	    {
	        if(j>=n-i)
	        cout<<"*";
	        else
	        cout<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
