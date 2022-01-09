// Made by KUNTAL OJHA 09/01/2022
// CodeChef DSA Learning Searies
// Topic NO 0 
// Topic: Easy Problem to Get Started
// Link: https://www.codechef.com/CCSTART2/problems/BUYPLSE


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int Array[4];
	int Total_Cost,i;
	for(i=0;i<4;i++)
	{
	    cin>>Array[i];
	}
	Total_Cost=Array[0]*Array[2]+Array[1]*Array[3];
	std::cout << Total_Cost << std::endl;
	return 0;
}

