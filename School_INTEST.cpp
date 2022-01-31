// Made by KUNTAL OJHA 31/01/2022
// CodeChef Begineers level.
// Link: https://www.codechef.com/submit/INTEST

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c,count=0;
    cin>>t>>c;
    while(t--)
    {
        int i;
        cin>>i;
        if(i%c==0)
        {
            count ++;
        }
    }
    cout<<count;
}