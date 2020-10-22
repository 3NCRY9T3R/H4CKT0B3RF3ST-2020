// C++ program to print numbers from n to 1 using recursion.
#include<bits/stdc++.h>
using namespace std;
int fun(int n){
	if(n == 0){          // base case
	return n;
	}
	else{
	cout << n << " ";      // printing n
	}
	fun(n-1);          // recursive call 
}
int main(){
	int t; 
	cin >> t;            // test case
	while(t--){
	int n; 
	cin >> n;           // taking input number n
	fun(n);             // function call
    }
}
