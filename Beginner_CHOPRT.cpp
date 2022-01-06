// Made by KUNTAL OJHA 05/01/2022
// CodeChef Begineers level.
// Link: https://www.codechef.com/submit/FLOW010
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int A,B;
	    cin>>A>>B;
	    if(A>B) cout<<">"<<endl;
	    if(A<B) cout<<"<"<<endl;
	    if(A==B) cout<<"="<<endl;
	}
	return 0;
}
