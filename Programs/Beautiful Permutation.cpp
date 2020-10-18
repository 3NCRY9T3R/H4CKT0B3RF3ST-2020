#include<bits/stdc++.h>
#define ll long long
#define pb push_back 
#define vl vector<long long>
#define vi vector<int>
#define endl "\n"

using namespace std;

void solve()
{
int n;
cin>>n;
if(n==1) cout<<1<<endl;
else if(ceil(log2(n))==floor(log2(n))) cout<<-1<<endl;
else
{
	cout<<"2 3 1";
	for(int i=4;i<=n;i++)
	{
		if(ceil(log2(i))==floor(log2(i)))
		{	
			cout<<" "<<i+1<<" "<<i;
			++i;
		}
		else cout<<" "<<i;
	}
	cout<<endl;
}




}






	



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
