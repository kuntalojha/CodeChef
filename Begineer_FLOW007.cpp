// Made by KUNTAL OJHA 05/01/2022
// CodeChef Begineers level.
// https://www.codechef.com/problems/FLOW007

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,reverse=0,r;
        cin>>n;
        for(;n>0;n=n/10)
        {
            r=n%10;
            reverse=reverse*10+r;
        }
        cout<<reverse<<endl;
    }
	return 0;
}

