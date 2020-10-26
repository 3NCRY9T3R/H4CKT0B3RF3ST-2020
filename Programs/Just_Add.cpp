#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define m 10000007

long long power(long long a, long long b) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int main()
{
    ll n,k;
    cin>>n>>k;
    while(n)
    { ll a,b,c,d;
    ll ans;
         b=power(n,k);
        a=(2*power(n-1,k))%10000007;
        d=power(n,n);
        c=(2*power(n-1,n-1))%10000007;
        ans=((a+b)%10000007+(c+d)%10000007)%10000007;
        cout<<ans<<endl;
        cin>>n>>k;
    }
}
