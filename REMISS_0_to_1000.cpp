// Made by KUNTAL OJHA 27/02/2022
// CodeChef Begineers level.
// Problem Difficulty Rating 0 to 1000
// https://www.codechef.com/problems/REMISS
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,mx=0;
	    cin>>a>>b;
	    mx=max(a,b);
	    cout<<mx<<" "<<a+b<<endl;
	}
	return 0;
}
