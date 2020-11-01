#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define mod 1000000007
// using bitmasking 
ll power(ll x,ll n)
{
    ll res=1;
    while(n>0)
    {
        if(n&1)
        {
            res=((res%10)*(x%10))%10;
        }
        n=n>>1;
        x=((x%10)*(x%10))%10;
    }
    return res%10;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll x,n;
    cin>>x>>n;
    cout<<power(x,n)<<endl;
    }
}
