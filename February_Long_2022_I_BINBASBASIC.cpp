// CodeChef Februsry Long challenge 2022 I Division 3 (Rated)
// Problem Vivision 03
// 1 * Coder in CodeChef Till 06/02/2022 
// Problem Name: Binary Base Basics
// Problem Code: BINBASBASIC
// Problem Link: https://www.codechef.com/FEB221C/problems/BINBASBASIC
/*

You are given a binary string S and an integer K. 
In one operation, you can pick any bit and flip it, 
i.e turn 0 to 1 or 1 to 0. Can you make the string S a palindrome using exactly K operations?

Print YES if this is possible, and NO if it is not.

------Input Format-------

The first line of input contains one integer T, denoting the number of test cases.
 The description of T test cases follows.
Each test case consists of two lines of input.
The first line of each test case contains two space-separated integers N and K,
denoting the length of the binary string and the number of operations to be performed.
The second line contains the binary string S.

-------Output Format------
For each test case, print the answer on a new line — YES if the S can be 
made a palindrome using exactly K operations, and NO otherwise.

You may print each character of YES and NO in either uppercase or 
lowercase (for example, yes, yEs, Yes will all be considered identical).

Constraints

1≤T≤1000
1≤N≤1000
0≤K≤N
S is a binary string, i.e, contains only characters 0 and 1

Subtasks
Subtask #1 (100 points): Original constraints

Sample Input 1 
2
3 0
110
6 1
101100

Sample Output 1 

NO
YES

Explanation
Test case 1: S is not a palindrome, and no operations can be performed on it because K=0.

Test case 2: Flip the first bit to obtain S=001100, which is a palindrome.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int t,k;
        cin>>t>>k;
        string s;
        cin>>s;
        int left=0;
        int right=s.length()-1;
        int count=0;
        for(left;left<right;left++,right--)
        {
            if(s[left] != s[right])
            {
                count++;
            }
        }
        if(count<=k)
        {
            if(s.length()%2==1)
            {
                cout<<"YES"<<endl;
            }else
            {
                if((k-count)%2==0)
                {
                    cout<<"YES"<<endl;
                }else
                {
                    cout<<"NO"<<endl;
                }
            }
        }else
        {
            cout<<"NO"<<endl;
        }
    }
}