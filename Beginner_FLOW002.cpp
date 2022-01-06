// Made by KUNTAL OJHA 04/01/2022
// CodeChef Begineers level.
// Link: https://www.codechef.com/submit/FLOW002
#include <bits/stdc++.h> 
using namespace std;
int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	while (T--) {
		// Read the input a, b
		int a, b;
		scanf("%d %d", &a, &b);

		// Compute the ans.
		// Complete the below line.
		int ans = a%b;
		printf("%d\n", ans);
	}

	return 0;
}

/*
    OR 
#include <bits/stdc++.h> 

using namespace std;

int main() {
	// Read the number of test cases.
	int T;
	cin>>T;
	while (T--) {
		// Read the input a, b
		int a, b;
		cin>>a>>b;

		// Compute the ans.
		// Complete the below line.
		int ans = a%b;
		cout<<ans<<endl;
	}

	return 0;
}
*/