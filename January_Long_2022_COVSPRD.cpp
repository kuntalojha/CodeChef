#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int i,N,D,E=1,E1=0;
	    cin>>N>>D;
	    for ( i = 1; i <= D; i++) 
	    {
	        /* code */
	        if(i<11)
	        {
	            E=E*2;
	            
	        }else
	        {
	            E1=E*3;
	        }
	    }
	    if(i<11)
	    {
	       cout<<E<<endl;	
	    }else
	    {
	     cout<<E1<<endl;
	    }
	}
	return 0;
}
