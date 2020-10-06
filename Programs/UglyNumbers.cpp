#include<iostream>
#define M 100005
#define ll long long
using namespace std;
vector <ll> dp;
void ugly()
{
    dp.push_back(1);
    ll n2=2,n3=3,n5=5;
    ll i2=0,i3=0,i5=0;
    ll i,mini;
    for(i=1;i<M;i++)
    {
        mini=min(min(n2,n3),n5);
        dp.push_back(mini);
        if(mini==n2)
        {
            i2+=1;
            n2=dp[i2]*2;
        }
         if(mini==n3)
        {
            i3+=1;
            n3=dp[i3]*3;
        }
        if(mini==n5){
            i5+=1;
            n5=dp[i5]*5;
        }
    }
    
}
int main()
 {
 int t;
 cin>>t;
 ugly();
 while(t--)
 {
 int n;
 cin>>n;
 cout<<dp[n-1]<<endl;
 }
	//code
	return 0;
}
