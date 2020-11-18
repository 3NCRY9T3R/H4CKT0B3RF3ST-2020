//Minimum subsetsum difference -> DP (Dynamic Progrmming)

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void minsub(vector<ll>a)
{
    ll n=a.size();
    ll s=0;
    for(ll i=0;i<n;++i)
    {
        s+=a[i];
    }
    ll k=(s)/2;
    bool dp[n+1][k+1];
    for(ll i=0;i<=n;++i) dp[i][0]=true;
    for(ll i=1;i<=k;++i) dp[0][i]=false;

    for(ll i=1;i<=n;++i)
    {
        for(ll j=1;j<=k;++j)
        {
            if(a[i-1]<=j)
            {
                dp[i][j]=dp[i-1][j-a[i-1]]|dp[i-1][j];
            }
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    for(ll i=s/2;i>=0;--i)
    {
        if(dp[n][i]==true)
        {
            k=i;
            break;
        }
    }
    k=s-2*k;
    cout<<"The Minimum Subset Difference of the given Array is : "<<k;
    cout<<endl;
}
int main()
{
    ll n;
    cout<<"Enter the size of the Array : "<<endl;
    cin>>n;
    vector<ll>v;
    ll a;
    for(ll i=0;i<n;++i)
    {
        cin>>a;
        v.push_back(a);
    }
    minsub(v);
    //happy coding 
}
