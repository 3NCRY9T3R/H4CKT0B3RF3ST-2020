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
    ll n,w,t,r;
    cin>>n>>w>>t>>r;
    int a[3];
    a[0]=w;
    a[1]=t;
    a[2]=r;
    sort(a,a+3,compare);
    ll sum=1;
    sum=(sum*C(n,a[0]))%m;
    sum=(sum*C((n-a[0]),a[1]))%m;
    sum=(sum*C(n-(a[0]+a[1]),a[2]))%m;
    cout<<sum<<endl;
    }
