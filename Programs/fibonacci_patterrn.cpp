#include<bits/stdc++.h>
using namespace std;

void fibo(int n){
	int N=n*(n+1)/2;
	int f[N+1];
	f[1]=0;
	f[2]=1;
	for(int i=3;i<=N;i++){
		f[i] = f[i-1] + f[i-2];
	}
	int x=1;
	for(int i=1;i<=n;i++){
		for(int count=1;count<=i;count++){
			cout<<f[x]<<" ";
			x++;
		}
		cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	fibo(n);

	return 0;
}
