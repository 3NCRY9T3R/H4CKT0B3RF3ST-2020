#include <bits/stdc++.h>
using namespace std;

long long numberOfWays(int coins[],int n,int value)
{
    long long dp[value+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=coins[i];j<=value;j++)
        {
            dp[j]+=dp[j-coins[i]];
        }
    }
    return dp[value];

}




int main() {

    //taking total count of testcases
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    //taking value
	    int value;
	    cin>>value;

	    //taking number of coins
	    int numberOfCoins;
	    cin>>numberOfCoins;
	    int coins[numberOfCoins];

	    //inserting coins to the array
	    for(int i=0;i<numberOfCoins;i++)
	    cin>>coins[i];

	    //calling function numberOfWays
	    cout<<numberOfWays(coins,numberOfCoins,value)<<endl;

	}
	return 0;
}  
