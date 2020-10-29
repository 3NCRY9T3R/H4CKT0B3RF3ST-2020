#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n],i,maxi=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(k%a[i]==0)
	        {
              maxi=max(maxi,a[i]);
	        }
	    }
	    if(maxi==0)
	    cout<<"-1\n";
	    else
	    cout<<maxi<<endl;
	}
	return 0;
}
