// Made by KUNTAL OJHA 09/01/2022
// CodeChef DSA Learning Searies
// Topic NO 0 
// Topic: Easy Problem to Get Started
// Link: https://www.codechef.com/CCSTART2/submit/SECLAR


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,j,k;
	cin>>i>>j>>k;
	if(i>j && i>k)
	{
	    if(j>k)
	    {
	        cout<<j;
	    }
	    else
	    {
	        cout<<k;
	    }
	} else if(j>i && j>k)
	{
	    if(i>k)
	    {
	        cout<<i;
	    }
	    else
	    {
	        cout<<k;
	    }
	} else 	if(k>j && k>i)
	{
	    if(j>i)
	    {
	        cout<<j;
	    }
	    else
	    {
	        cout<<i;
	    }
	}
	return 0;
}
