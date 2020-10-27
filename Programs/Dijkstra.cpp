#include <bits/stdc++.h>
#define s(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define fi first
#define se second
#define pb push_back
using namespace std;
typedef long long int ll;
const ll inf=1e18+9;
void shortest (int i, vector<int> path)
{
	if (i!=1) shortest(path[i], path);
	cout<<i<<' ';
}
int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll n,m;cin>>n>>m;
	vector<vector<ll>> dij(n+1);
	map<pair<ll, ll>, ll> maping;
	f(i,0,m)
	{
		ll a,b,w;cin>>a>>b>>w;
		dij[a].pb(b);
		dij[b].pb(a);
		maping[{a,b}]=w;
		maping[{b,a}]=w;
	}
	priority_queue<ll> q;
	vector<ll> path(n+1);
	vector<ll> dis(n+1, inf);
	q.push(1);
	dis[0]=0;
	dis[1]=0;
	while(!q.empty())
	{
		ll k=q.top();
		q.pop();
		auto i=dij[k].begin();
		for(;i!=dij[k].end();i++)
		{
			ll z=*i;
			if(dis[z]>dis[k]+maping[{k,z}])
			{
				dis[z]=dis[k]+maping[{k,z}];
				path[z]=k;
				q.push(z);
			}
		}
	}
	if(dis[n]==inf)
	{
		cout<<-1<<endl;
	}
	else
	{
		// shortest(n,path);
		vector<ll> ans;
		ll end=n;
		while (end!=0){ans.pb(end),end=path[end];}
		reverse(ans.begin(),ans.end());
		for (auto it:ans)cout<<it<<" ";
	}
	return 0;
}
