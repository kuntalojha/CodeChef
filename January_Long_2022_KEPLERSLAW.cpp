#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int t1,t2,r1,r2,i,j;
	    float a,b;
	    cin>>t1>>t2>>r1>>r2;
	    t1=pow(t1,2);
	    r1=pow(r1,3);
	    t2=pow(t2,2);
	    r2=pow(r2,3);
	    a=t1/r1;
	    i=a;
        cout<<i<<endl;
	    b=t2,r2;
	    j=b;
        cout<<j<<endl;
	    if(i==j)
	    {
	        cout<<"Yes"<<endl;
	    }else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
