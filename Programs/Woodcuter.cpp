#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
ll n;
cin>>n;
ll v1[n];
ll v2[n];
for(ll i=0;i<n;i++)
{
    cin>>v1[i]>>v2[i];
}

ll temp1,temp2;
ll res=0;
temp1=v1[0]-v2[0];
v2[0]=v1[0];
v1[0]=temp1;
res++;
if(n==1)
{
    cout<<res<<endl;

}
else
{
    ll i;
    for(i=1;i<n-1;i++)
    {
    temp1=v1[i]-v2[i];
    temp2=v1[i]+v2[i];
    if(v2[i-1]<temp1 && v1[i]<v1[i+1])
    {
        res++;
        v2[i]=v1[i];
        v1[i]=temp1;
    }
    else if(v2[i-1]<v1[i]&& temp2<v1[i+1])
    {
        res++;
        v2[i]=temp2;
    }
    else
    {
        v2[i]=v1[i];
    }
    }
    if(v2[i-1]<v1[i])
    {
        v2[i]=v1[i]+v2[i];
        res++;
    }
cout<<res<<endl;
}
}
