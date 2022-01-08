// Made by KUNTAL OJHA 07/01/2022
// CodeChef Begineers level.
// Link: https://www.codechef.com/problems/ODDSEVENS

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int A,B;
	    cin>>A>>B;
	    if((A+B)%2==0)
	    {
	        cout<<"Bob"<<endl;
	    }
	    else
	    {
	        cout<<"Alice"<<endl;
	    }
	}
	return 0;
}
