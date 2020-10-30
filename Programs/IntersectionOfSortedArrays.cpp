//Have A Good Day Traveller:)
//Author: Saksham Goel

/*
Problem Description: 
We have to print intersection of two sorted arrays:
for eg:
array1: 1 2 2 3 3 4
array2: 2 2 3 3 4 5

answer/output: 2 3 4
*/
#include<bits/stdc++.h>
#include<queue>
#include<vector>
#define MOD 1000000007
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define int long long int
#define lli long long int
#define mp(x,y) make_pair(x,y)
using namespace std;

int32_t main(){
	fastio;
	int n1,n2;
	cin>>n1>>n2;
	vector<int> v1(n1),v2(n2);
	for(int i=0;i<n1;i++)
		cin>>v1[i];
	for(int i=0;i<n2;i++)
		cin>>v2[i];
	int prev,i=0,j=0;
	while(i<n1 and j<n2){
		if(v1[i]==v2[j]){
			if(v1[i]!=prev)
				cout<<v1[i]<<" ";
		prev=v1[i];
		i++;
		j++;
		}
		else{
			if(v1[i]<v2[j])
			i++;
			else 
			j++;
		}
	}
}
