//Problem - One Odd Occuring
//Given an array of integers where all elements appear even number of times except only one element which appears odd no. of times
//Find that one odd-occurring element

/*
There are many ways to solve this -

(1) Simple Method -
Traverse array linearly and for every element, check how many times it occur in array by traversing array linearly again for that element
And if an element comes odd number of times , the return that
So Time-Complexity = O(n^2)

(2) Better Solution -
Use Hashing to count no. of occurances of every element
So , Time-Complexity = O(n)
And , Auxiliary-Space = O(n)

(3) Efficient Solution -
Using XOR Operator -
Use following property of XOR -
	-> x^0 = x
	-> x^y = y^x
	-> x^x = 0
So ,
We do xor of all elements of array so that-
	-> All even ocuuring elements cancel out each-other i.e., become 0
	-> So Finally, We have the element which is odd occuring
So Here -
Time-Complexity = O(n)
Auxiliary Space = O(1)
*/

//So Solution 3 -
//Using XOR Operator ->

#include <iostream>
using namespace std;

int findOddOccuringElement (int givenArray[] , int numberOfElements)
{
	int result = 0;		//Because :- x^0 = x
	
		for(int iteratorIndex=0 ; iteratorIndex<numberOfElements ; iteratorIndex++)
			result = result ^ givenArray[iteratorIndex];
			
	return result;
}

int main()
{
	int sizeOfArray;
	
		cin>>sizeOfArray;
		
	int array[1000];
	
		for(int index=0 ; index<sizeOfArray ; index++)
			cin>>array[index];
			
	int answer = findOddOccuringElement (array,sizeOfArray);
	
		cout<<"One odd-occurring element in array is = "<<answer<<endl;
		
	return 0;
}
