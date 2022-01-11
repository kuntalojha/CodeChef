
// Made by KUNTAL OJHA 10/01/2022
// CodeChef DSA Learning Searies
// Topic NO 0 
// Topic: Easy Problem to Get Started
// Link: https://www.codechef.com/CCSTART2/submit/TRIVALCH

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c,a1,b1,c1;
	cin>>a>>b>>c;
	a1=b+c;
	b1=a+c;
	c1=a+b;
	if(a1>a && b1>b && c1>c)
	{
	    cout<<"YES";
	}
	else
	{
	    cout<<"NO";
	}
	return 0;
}
