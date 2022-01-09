// Made by KUNTAL OJHA 09/01/2022
// CodeChef DSA Learning Searies
// Topic NO 0 
// Topic: Easy Problem to Get Started
// Link: https://www.codechef.com/CCSTART2/problems/ISBOTH/


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int Number;
	cin >> Number;
	if(Number%5==0 && Number%11==0)
	{
	    cout<<"BOTH";
	} else if(Number%5==0 || Number%11==0)
	{
	    cout<<"ONE";
	} else
	cout<<"NONE";
	return 0;
}