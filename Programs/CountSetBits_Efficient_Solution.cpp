//Program -> To count set bits in a number
//Given a number. Count number of set-bits in binary-representation of that number

/*
There are several methods to do so.

(1) Simple Method -
Check every bit one by one if it is set or not
So Time-Complexity = O(Total bits in number)

(2) Better Solution -
(Using Brian Kerningam's Algorithm)
Time-Comlexity = O(Count of set-bits in number)

(3) Efficient Solution -
Look-up table method ->
Time-Complexity = O(1)
But it requires some preprocessing.
Here, We divide our input (let's assume - 64-bit no.) into 8 chunks of 8-bits each.
Precompute set bits in these chunks then use these results in our input in O(1) time.
*/

//So Solution 3 -
//Lookup Table Method ->

#include <iostream>
using namespace std;

int setBitsTable[256];
//Because 8-bits chunks. So size = 0 -> ((2^8)-1) = 0 -> 255

void preprocessingOfChunks()
{
	setBitsTable[0] = 0;
	
		for(int index=1 ; index<256 ; index++)
			setBitsTable[index] = (index & 1) + setBitsTable[index/2];
}

int countSetBits (int number)
{
	//For 64-bit representation - 8 chunks of 8-bits each
	//For 32-bit representation - 4 chunks of 8-bits each
	
	//Here we solve considering 64-bit representation
	
	int result = setBitsTable[number & 0xff];		//0xff = Binary Representation - 11111111
	
		for(int tempCount=1 ; tempCount<8 ; tempCount++)
		{
			number = number >> 8;
			result += setBitsTable[number & 0xff];
		}
		
	return result;
}

int main()
{
	preprocessingOfChunks();	//For Pre-processing
	
	int number;

		cin>>number;
		
		cout<<"The Number of set-bits in "<<number<<" is = "<<countSetBits(number)<<endl;
	
	return 0;
}
