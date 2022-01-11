// Made by KUNTAL OJHA 11/01/2022
// CodeChef DSA Learning Searies
// Topic NO 0 
// Topic: Easy Problem to Get Started
// Link: https://www.codechef.com/CCSTART2/problems/DIFACTRS

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,count=0;
	cin>>n;
	int Array[n];
	  for (int i = 1; i <=n; i++) 
	  {
	      if(n%i==0)
	      {
	          Array[count]=i;
	          count++;
	      }
	  }
	  cout<<count<<endl;
	  
	  for (int j = 0; j <count; j++) {
	      cout << Array[j]<<" ";
	  }
	  
	return 0;
}
