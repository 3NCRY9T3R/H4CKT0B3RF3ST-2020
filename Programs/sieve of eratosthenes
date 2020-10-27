//sieve of eratosthenes

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//it finds prime numbers from 1 to n :
void sieve(ll n)
{
    bool p[n+1];                     //declaration of a boolean array
    for(ll i=0;i<=n;++i)            //for loop to initialize the array
    {
        if(i==2||i==3)     
        p[i]=true;
        else if(i%2==0||i%3==0)
        p[i]=false;
        else
        p[i]=true;
    }
    p[0]=false;
    p[1]=false;
    for(ll i=5;i*i<=n;++i)
    {
        if(p[i])
        {
            for(ll j=i*i;j<=n;j+=i)
            p[j]=false;
        }
    }
    ll c=0;
    for(ll i=1;i<n;++i)
    {
        if(p[i])
        {
            cout<<i<<" "; 
            c++;  //counting prime number(s)
        }                           //output goes here
    }
    cout<<endl;
    cout<<"Total Prime Numbers from "<<1<<" to "<<n<<" are :"<<endl;
    cout<<c;
    cout<<endl;
}
int main()
{
    ll n;
    cout<<"HELLO USER"<<endl;
    cout<<"Enter n: "<<endl;
    cin>>n;
    cout<<"You Entred : "<<n<<endl;
    //program to print the prime number(s) from 1 to n :
    if(n==0||n==1)
    cout<<"No Primes in this range."<<endl;
    else
    {
        cout<<"So the Prime Number(s) from 1 to N are :\n";
        sieve(n);    
    }
    //happy coding.....
}
