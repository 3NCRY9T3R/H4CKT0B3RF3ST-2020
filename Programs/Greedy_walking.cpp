#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
// binomial cofficient
ll F[10000001];

// binary exponentiation
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
// calculating binomial cofficient 
/*ll C(ll n, ll k)
{
    if (k > n)
    {
        return 0;
    }
    ll res = F[n];
    res = (res * 1LL * power(F[k], m - 2)) % m;
    res = (res * 1LL * power(F[n - k], m - 2)) % m;
    return res;
}*/
int  main()
{
    // factorial of number
        F[0] = 1;
        F[1] = 1;
        for (ll i = 2; i <= 1000000; i++)
        {
            F[i] = (F[i - 1] * 1LL * i) % m;
        }
        int n;
        cin>>n;
        while(n!=0)
        {
            ll a[n];
            ll b[n];
            for(ll i=0;i<n;i++)
            {
                cin>>a[i];
            }
             for(ll i=0;i<n;i++)
            {
                cin>>b[i];
            }
            ll sum=0;
             for(ll i=0;i<n;i++)
            {
                sum+=abs(a[i]-b[i]);
            }
            ll ans=F[sum];
             for(ll i=0;i<n;i++)
            {
              ll p=abs(a[i]-b[i]);
              ans=(ans*1LL*power(F[p],m-2))%m;
            }
            cout<<ans<<endl;
            cin>>n;
            if(n==0)
            {
                break;
            }
        }
}
