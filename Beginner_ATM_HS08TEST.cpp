// Made by KUNTAL OJHA 07/01/2022 && 08/01/2022
// CodeChef Begineers level.
// Link: https://www.codechef.com/submit/HS08TEST

#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int i;
    float j;
    cin>>i>>j;
    if((i+0.50)<=j && i%5==0)
    {
        cout << fixed << setprecision(2) << (j-i)-0.50;
    }else
    {   
        cout << fixed << setprecision(2) << j;
    }
	return 0;
}
