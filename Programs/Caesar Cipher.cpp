#include <iostream> 
using namespace std; 

string encrypt(string text, int s) 
{ 
	string result = ""; 

	// traverse text 
	for (int i=0;i<text.length();i++) 
	{ 
		if (isupper(text[i])) 
			result += char(int(text[i]+s-65)%26 +65); 

	// Encrypt Lowercase letters 
	else
		result += char(int(text[i]+s-97)%26 +97); 
	} 

	// Return the resulting string 
	return result; 
} 

int main() 
{ 
	string text="ATTACKATONCE"; 
	int s = 4; 
	cout << "Text : " << text; 
	cout << "\nShift: " << s; 
	cout << "\nCipher: " << encrypt(text, s); 
	return 0; 
} 
