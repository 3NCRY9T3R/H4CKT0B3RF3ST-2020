#include<bits/stdc++.h>
using namespace std;

/* Function to get minimum number of trials needed in worst 
  case with n eggs and k floors */
int eggDrop(int n,int k) 
{
    int dp[n+1][k+1];
    int res;
    int i,j;
   for(i=1;i<=n;i++)
{
    dp[i][0]=0;
    dp[i][1]=1;
}
for(j=1;j<=k;j++)
{
    dp[1][j]=j;
}
for(i=2;i<=n;i++)
{
    for(j=2;j<=k;j++)
    {
        dp[i][j]=INT_MAX;
        for(int x=1;x<=j;x++)
        {
            res=1+max(dp[i-1][x-1],dp[i][j-x]);
            if(dp[i][j]>res)
            dp[i][j]=res;
        }
    }
}
return dp[n][k];

}


int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;

        //calling function eggDrop()
        cout<<eggDrop(n, k)<<endl;
    }
    return 0;
}
