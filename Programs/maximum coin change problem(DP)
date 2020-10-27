//maximum coin change problem ->DP (Dynamic Programming).

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void maxcoins(vector<ll>v,ll k)
{
    ll n=v.size();
    ll dp[n+1][k+1];
    for(ll i=0;i<=n;++i) dp[i][0]=1;
    for(ll i=1;i<=k;++i) dp[0][i]=0;
    for(ll i=1;i<=n;++i)
    {
        for(ll j=1;j<=k;++j)
        {
            if(v[i-1]<=j)
            dp[i][j]=dp[i][j-v[i-1]]+dp[i-1][j];      // making an optimal choice..
            else
            dp[i][j]=dp[i-1][j];                     // rejection..
        }
    }
    cout<<"So the Maximal possible ways are:"<<endl;
    cout<<dp[n][k]<<endl;
}
int main()
{
    ll n,k;
    cout<<"Enter the Amount: ";
    cin>>k;
    cout<<"\n";
    cout<<"Enter the total no of coins for change : ";
    cin>>n;
    cout<<endl;
    vector<ll>a;
    ll c;
    for(ll i=0;i<n;++i)
    {
        cin>>c;
        a.push_back(c);
    }
    maxcoins(a,k);
    //happy coding....
}
