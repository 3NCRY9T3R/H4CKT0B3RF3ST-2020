#include <bits/stdc++.h>
using namespace std;
void SieveOfEratosthenes(int n)
{
	int primenos[n+1]={};
	memset(primenos, 1, sizeof(primenos));
	for (int p=2; p*p<=n; p++)
	{
		if (primenos[p] == 1)
			for (int i=p*p; i<=n; i=i+p)
				primenos[i] = 0;
	}
	for (int p=2; p<=n; p++)
    {
		if (primenos[p])
			cout << p << " ";
    }
} 
int main() 
{ 
	int n=10; //Any number of choice
	cout << "Following are the prime numbers under " << n << endl; 
	SieveOfEratosthenes(n); 
	return 0; 
} 
