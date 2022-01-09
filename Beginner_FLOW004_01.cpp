// Made by KUNTAL OJHA 08/01/2022
// CodeChef Begineers level.
// Link: https://www.codechef.com/submit/FLOW004
// Sume of any number first and last digits.
// Very good one

#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int Number,First_Number,Second_Number;
	    cin>>Number;
        First_Number=Number%10;
	    while(Number)
	     {
	         Second_Number=Number%10;
             Number=Number/10;
	     }
	    cout<<First_Number+Second_Number<<endl;
	}
	return 0;
}
