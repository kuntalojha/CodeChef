// Made by KUNTAL OJHA 04/01/2022
// CodeChef Begineers level.
// https://www.codechef.com/submit/FLOW013

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int A,B,C;
	    cin>>A>>B>>C;
	    if((A+B+C)==180)
	    {
	        std::cout << "YES" << std::endl;
	    }
	    else
	    {
	        std::cout << "NO" << std::endl;
	    }
	}
	return 0;
}
