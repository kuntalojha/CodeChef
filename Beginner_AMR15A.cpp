// Made by KUNTAL OJHA 05/01/2022
// CodeChef Begineers level.
// https://www.codechef.com/problems/AMR15A


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	int READY_FOR_BATTLE=0,NOT_READY=0;
	cin>>n;
	while(n--)
	{
	    int a;
	    cin>>a;
	    if(a%2==0)
	    {
	        READY_FOR_BATTLE++;
	    }else
	    {
	        NOT_READY++;
	    }
	}
	if(READY_FOR_BATTLE>NOT_READY)
	{
	    std::cout << "READY FOR BATTLE" << std::endl;
	}else
	    std::cout << "NOT READY" << std::endl;
	return 0;
}
