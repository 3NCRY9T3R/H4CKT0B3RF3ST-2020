#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l,r;
		cin>>l>>r;
		if(l*2<=r)cout<<"-1\n";
		else cout<<r<<endl;
	}
}
