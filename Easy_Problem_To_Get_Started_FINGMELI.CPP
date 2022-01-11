
// Made by KUNTAL OJHA 10/01/2022
// CodeChef DSA Learning Searies
// Topic NO 0 
// Topic: Easy Problem to Get Started
// Link: https://www.codechef.com/CCSTART2/problems/FINDMELI

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,k,count=0;
	cin>>n>>k;
	while(n--)
	{
	    int a;
	    cin>>a;
	    if(a==k)
	    {
	        count++;
	    }
	}
	if(count>0)
	{
	    std::cout << "1" << std::endl;
	}else
	{
	    std::cout << "-1" << std::endl;
	}
	return 0;
}

