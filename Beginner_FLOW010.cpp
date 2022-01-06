// Made by KUNTAL OJHA 04/01/2022
// CodeChef Begineers level.
// Link: https://www.codechef.com/submit/FLOW010
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
        char A;
        cin>>A;
	    if(A=='B' || A=='b') cout<<"BattleShip"<<endl;
	    else if(A=='C' || A=='c') cout<<"Cruiser"<<endl;
	    else if(A=='D' || A=='d') cout<<"Destroyer"<<endl;
        else if(A=='F' || A=='f') cout<<"Frigate"<<endl;
	}
	return 0;
}
