#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll a1[n];
    ll a2[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a1[i]>>a2[i];
    }
    ll m;
    cin>>m;
    ll b1[m];
    ll b2[m];
    for(ll i=0;i<m;i++)
    {
        cin>>b1[i]>>b2[i];
    }
    ll x1=*min_element(a2, a2+ n); 
    ll y1=*max_element(b1, b1+ m); 
     ll x2=*min_element(b2, b2+ m); 
    ll y2=*max_element(a1, a1+ n);
    ll p1=y1-x1;
    ll p2=y2-x2;
    if(p1<0&&p2<0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<max(p1,p2)<<endl;
    }


}
