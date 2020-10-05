#include <bits/stdc++.h> 
using namespace std; 

bool check(string a) 
{ 
	stack<char> s; 
	char x; 

	for (int i = 0; i < a.length(); i++) { 
		if (a[i] == '(' || a[i] == '[' || a[i] == '{') { 
			s.push(a[i]); 
			continue; 
		} 
 
		if (s.empty()) 
			return false; 

		switch (a[i]) { 
    		case ')': if (s.top() != '(') 
    				    return false;
    				  s.pop();  
    			      break;
 
    		case '}':if (s.top() != '{') 
    				    return false;
    				  s.pop();  
    			      break; 
    
    		case ']': if (s.top() != '[') 
    				    return false;
    				  s.pop();  
    			      break;
		} 
	} 

	// Check Empty Stack 
	return (s.empty()); 
} 

// Driver program to test above function 
int main() 
{ 
	string exp = "{()}[]"; 

	if (check(exp)) 
		cout << "Balanced"; 
	else
		cout << "Not Balanced"; 
	return 0; 
} 
