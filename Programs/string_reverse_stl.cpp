// Reversing a string using C++ STL
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; 
	cin >> t;               // Checking for t number of testcases
	while(t--){
	string s;
	cin >> s;   // input string
  
	reverse(s.begin(), s.end());        // reversing the string using .begin() and .end()
  
	cout << s ;   // printing the reversed string
}
	return 0;
}
