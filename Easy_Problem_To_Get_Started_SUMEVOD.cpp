// Made by KUNTAL OJHA 12/01/2022
// CodeChef DSA Learning Searies
// Topic NO 0 
// Topic: Easy Problem to Get Started
// Link: https://www.codechef.com/CCSTART2/problems/SUMEVOD

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,m=0;
	long int odd_sum=0,even_sum=0;
	cin>>n;
	m=2*n+1;
	while(m--)
	{
	    if(m%2)
	    {
	        odd_sum=odd_sum+m;
	    }else
	    {
	        even_sum=even_sum+m;
	    }
	}
    cout<<odd_sum<<" "<<even_sum;
	return 0;
}



