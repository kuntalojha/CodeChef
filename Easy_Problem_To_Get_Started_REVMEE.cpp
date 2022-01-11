// Made by KUNTAL OJHA 10/01/2022
// CodeChef DSA Learning Searies
// Topic NO 0 
// Topic: Easy Problem to Get Started
// Link: https://www.codechef.com/CCSTART2/problems/REVMEE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int number,i,j;
	cin>>number;
	int Array[number];
	for ( i = 0; i < number; i++) 
	{
	    cin>>Array[i];
	}
	for ( j = number-1; j >=0; j--) 
	{
	    cout<<Array[j]<<" ";
	}
	return 0;
}
