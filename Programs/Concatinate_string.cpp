// Concatinating two strings using function call in C++

#include<bits/stdc++.h>
using namespace std;
string concatinate(string x, string y){  // function call
	return x + y;          // returning the concatinated string
};
int main(){
	int t;
	cin >> t;          // test case
	while(t--){
		string a1, b1; 
		cin >> a1 >> b1;       // input string a and b
    
	cout << concatinate(a1,b1) <<endl; // printing the concatinated string      
    } 
}
