// Search in a sorted 2D array 
// Using the concept of Binary Search
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,m;
    cout<<"Enter the Number of Rows(s) and Column(s) of 2D Array : ";
    cin>>n>>m;
    ll a[n][m];
    cout<<"\nEnter the Elment(s) of the Arrray :"<<endl;
    for(ll i=0;i<n;++i)
    {
        for(ll j=0;j<m;++j)
        {
            cin>>a[i][j];
        }
    }
    ll x;
    cout<<"\nEnter the Element to be searched :";
    cin>>x;
    vector<ll>v;
    cout<<endl;
    ll i=0;
    ll j=m-1;
    ll f=1;
    while(i>=0ll&&i<n&&j>=0ll&&j<n)
    {
        if(a[i][j]==x)
        {
            v.push_back(i+1);
            v.push_back(j+1);
            f=0;
            break;
        }
        else if(a[i][j]>x)
        j--;
        else
        i++;
    }
    if(f)
    v.push_back(-1);
    if(v[0]!=-1)
    {
        cout<<"Hurray the Element you searched is present in the 2D Array at position                   : ";
        cout<<v[0]<<","<<v[1];
    }
    else
    {
        cout<<"Ooops the Element you searched is unfortunately not present in the 2D Array";
    }
    
}
