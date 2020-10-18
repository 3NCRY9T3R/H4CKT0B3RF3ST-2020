#include<algorithm>
using namespace std;

int main() {
	//code
	int t,n,k,a[100000];
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cin>>k;
	    sort(a,a+n);
	    cout<<a[k-1]<<endl;
	}
	return 0;
}
