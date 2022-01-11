// Made by KUNTAL OJHA 11/01/2022
// CodeChef DSA Learning Searies
// Topic NO 0 
// Topic: Easy Problem to Get Started
// Link: https://www.codechef.com/CCSTART2/submit/EXTRICHK

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	if((a+b)>c && (a+c)>b && (b+c)>a)
	{
	  	if(a==b && b==c)
    	{
	      cout<<"1";
    	} else if (a==b || b==c || c==a)
    	{
	        cout<<"2";
    	} else
	    {
	        cout<<"3";
	    }  
	}else
	{
	    cout<<"-1";
	}
	return 0;
}
