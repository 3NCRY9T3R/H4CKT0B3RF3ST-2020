#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
// binomial cofficient
ll F[10000001];
bool compare(ll a,ll b)
{
    return a>b;
}

ll power(ll a, ll n)
{
    ll res = 1;
    while (n)
    {
        if (n % 2)
        {
            res = (res * 1LL * a) % m;
        }
        n = n / 2;
        a = (a * 1LL * a) % m;
    }
    return res;
}

ll C(ll n, ll k)
{
    if (k > n)
    {
        return 0;
    }
    ll res = F[n];
    res = (res * 1LL * power(F[k], m - 2)) % m;
    res = (res * 1LL * power(F[n - k], m - 2)) % m;
    return res;
}
int main()
{
        F[0] = 1;
        F[1] = 1;
        for (ll i = 2; i <= 1000000; i++)
        {
            F[i] = (F[i - 1] * 1LL * i) % m;
        }
  ll t;
  cin>>t;
  for(ll j=1;j<=t;j++)
  {
      ll n,k;
      cin>>n>>k;
      ll a[n];
      for(ll i=0;i<n;i++)
      {
          cin>>a[i];
      }
      sort(a,a+n,compare);
      ll z=0;
     ll  sum=0;
     if(n>=1&&k!=0)
     {
        while(n>=k)
        {
            ll p=C(n-1,k-1);
            sum=(sum+(a[z]*p))%m;
            n--;
            z++;
        }
    cout<<"Case #"<<j<<":"<<" "<<sum<<endl;
     }
  }
    }
