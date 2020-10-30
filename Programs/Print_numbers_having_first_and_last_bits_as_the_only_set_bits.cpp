// C++ implementation to print numbers in the range 1 to n 
// having first and last bits as the only set bits 
#include <bits/stdc++.h> 

using namespace std; 

typedef unsigned long long int ull; 

// function to print numbers in the range 1 to n having 
// first and last bits as the only set bits 
void printNumWithFirstLastBitsSet(ull n) 
{ 
	ull power_2 = 1, num; 
	
	// first number is '1'	 
	cout << power_2 << " "; 
	
	while (1)	 
	{ 
		// obtaining next perfect power of 2 
		power_2 <<= 1; 
		
		// toggling the last bit to convert 
		// it to as set bit 
		num = power_2 ^ 1; 
		
		// if out of range then break; 
		if (n < num) 
			break; 
			
		// display	 
		cout << num << " ";	 
	}		 
} 

// Driver program to test above 
int main() 
{ 
	ull n = 10; 
	printNumWithFirstLastBitsSet(n); 
	return 0; 
} 
