// CodeChef January Long challenge 2022 I Division 3 (Rated)
// Problem Vivision 03
// NO * Coder in CodeChef Till 10/01/2022 
// Problem Name: TCS Examination
// Problem Code: KEPLESLAW
// Problem Link: https://www.codechef.com/JAN221C/problems/KEPLERSLAW


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    int t1,t2,r1,r2;
	    cin>>t1>>t2>>r1>>r2;
	    a=r1*r1*r1*t2*t2;
	    b=t1*t1*r2*r2*r2;
	    if(a==b)
	    {
	        cout<<"YES"<<endl;
	    }else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}

