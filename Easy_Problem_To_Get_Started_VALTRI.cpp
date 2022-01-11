// Made by KUNTAL OJHA 10/01/2022
// CodeChef DSA Learning Searies
// Topic NO 0 
// Topic: Easy Problem to Get Started
// Link: https://www.codechef.com/CCSTART2/submit/VALTRI

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int BUS_NUMBER;
	cin>>BUS_NUMBER;
	if((BUS_NUMBER%5==0) || BUS_NUMBER%6==0 )
	{
	    std::cout << "YES" << std::endl;
	} else
	{
	    std::cout << "NO" << std::endl;
	}
	return 0;
}
