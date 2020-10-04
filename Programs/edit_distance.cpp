/*
Given two strings s and t. Find the minimum number of operations that need to be performed on str1 to convert it to str2. The possible operations are:

Insert
Remove
Replace
 

Example 1:

Input: 
s = "geek", t = "gesek"
Output: 1
Explanation: One operation is required 
inserting 's' between two 'e's of str1.

Example 2:

Input : 
s = "gfg", t = "gfg"
Output: 
0
Explanation: Both strings are same.
 

Your Task:
You don't need to read or print anything. Your task is to complete the function editDistance() which takes strings s and t as input parameters and returns the minimum number of operation required to make both strings equal. 

 

Expected Time Complexity: O(n2)
Expected Space Complexity: O(n2)
 

Constraints:
1 <= Length of both strings <= 100
Both the strings are in lowercase.
*/

#include<bits/stdc++.h>
using namespace std;
int dp[200][200];

int solve(string s1, string s2, int m, int n)
{
	int insert,remove, replace;
	if(m==0)return n;
	if(n==0) return m;
    
    if(dp[m][n]!=-1)return dp[m][n];
    
	if(s1[m-1]==s2[n-1])
		return dp[m][n] = solve(s1,s2,m-1,n-1);

	else
	{
		 insert = solve(s1,s2,m,n-1)+1;
		 remove = solve(s1,s2, m-1, n) + 1;
		 replace = solve(s1,s2,m-1, n-1) +1;


	}
	return dp[m][n] = min(insert, min(remove, replace));

}

int main() {
ios_base::sync_with_stdio(false); cin.tie(NULL);
long long t;cin>>t;
while(t--)
{   memset(dp,-1,sizeof dp);
	int m, n;
	cin>>m>>n;
	string s1, s2;
	cin>>s1>>s2;

	cout<<solve(s1,s2,m,n)<<endl;

	
}
return 0;
}
