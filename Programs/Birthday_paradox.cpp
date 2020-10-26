// it was nice probability problem where the probability is discussed 
//implementation
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
	double p;
	cin>>p;
	if(p<1)
	{
  double x=log(1/(1-p)); 
  cout<<ceil(sqrt(2*365*x))<<endl;
	}
	else
	{
		cout<<366<<endl;
	}
  

}
