// Binary Search using C++ STL
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[15]= { 12,25,65,8,98,68,24,69,72,77,91,11,19,20,60 }; // input array
	sort(a,a+15);
	cout << " Sorted Array is : ";
	for(int i = 0;i < 15;i++){ // sorting the array
  
	cout << a[i] <<" ";      // printing the sorted array
	}
	cout << endl;
	if(binary_search(a,a+15,24)){    // checking whether 24 is present or not
	 cout << " Element Found";

	}
	else{
	cout << "Element Not Found";
	}
}
