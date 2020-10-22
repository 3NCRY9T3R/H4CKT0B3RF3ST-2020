// C++ program to find a factorial of a given no. using recursion
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
	if(n == 0){    // base condition
		return 1;
	}
	else{
		return ( n*fact(n-1));   //recursive call 
	}
	

}
int main(){
	int t;
	cin >> t;           // checking for t no. of testcases
	while(t--){
		int n;
		cin >> n;              // taking input number
		fact(n);
		cout << fact (n) << endl; // printing the factorial
	}
}
