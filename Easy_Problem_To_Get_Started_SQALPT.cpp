// Made by KUNTAL OJHA 13/01/2022
// CodeChef DSA Learning Searies
// Topic NO 0 
// Topic: Easy Problem to Get Started
// Link: https://www.codechef.com/CCSTART2/submit/SQALPAT

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,count=0,x=0;
	cin>>n;
	for (int i = 1; i <=n; i++) 
	{
	    for (int j = 1; j <=5; j++) 
	    {
	        if(i%2==0 && j==1)
	        {
	            x=count;
	            x=x+5;
	            while(x>count)
	            {
	                cout<<x<<" ";
	                x--;
	            }
	            count=count+5;
	            break;
	        }else
	        {
	            count++;
                cout<<count<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
