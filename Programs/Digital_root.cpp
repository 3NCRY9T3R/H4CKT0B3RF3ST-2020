// A C++ program to implement the Digital root.

#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;


int addDigits(int num) {
	// digital root concept
	if (num == 0)
		return 0;
   
	if (num % 9 == 0)
		return 9;
	return num % 9;
}
int main() {
	int a = 27518;
	cout << addDigits(a);
	return 0;
}
