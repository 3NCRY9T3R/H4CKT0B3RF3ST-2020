//Hello visitor have a great day:)
//Author : Saksham Goel
#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,j,k,sum=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	   int temp=0; // sum including the current element.
	   sum=a[0]; // max sum upto current element.
	   for(i=0;i<n;i++)
	   {
	        temp+=a[i];
	        if(temp>sum)
	        {
	            sum=temp;
	        }
	        if(temp<0)
	        {
	            temp=0;
	        }
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
