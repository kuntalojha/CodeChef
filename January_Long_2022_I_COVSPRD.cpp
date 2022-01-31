// CodeChef January Long challenge 2022 II Division 3 (Rated)
// Problem Vivision 03
// NO * Coder in CodeChef Till 10/01/2022 
// Problem Name: TCS Examination
// Problem Code: KEPLESLAW
// Problem Link: https://www.codechef.com/JAN221C/problems/COVSPRD

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int i,N,D,E=1,E1=0;
	    cin>>N>>D;
	    for ( i = 1; i <= D; i++) 
	    {
	        /* code */
	        if(i<11)
	        {
	            E=E*2;
	        }else
	        {
	            E1=E*3;
	        }
	    }
	    if(i<11)
	    {
	       cout<<E<<endl;	
	    }else
	    {
	     cout<<E1<<endl;
	    }
	}
	return 0;
}
