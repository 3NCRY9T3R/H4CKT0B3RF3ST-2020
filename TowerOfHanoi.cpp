/*
Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. 
The objective of the puzzle is to move the entire stack to another rod, obeying the following 
simple rules:
1) Only one disk can be moved at a time.
2) Each move consists of taking the upper disk from one of the stacks and placing it on top of 
another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
3) No disk may be placed on top of a smaller disk.

*/

//Time Complexity O(2^n)

#include <iostream>
using namespace std;

//returns number of steps and prints them
int tower_of_hanoi(char src,char dest,char helper,int n){
	static int steps=0;
	if(n==0)
		return steps;
	tower_of_hanoi(src,helper,dest,n-1);
	cout<<"Move Disk "<<n<<" from "<<src<<" to "<<dest<<"\n";
	steps++;
	tower_of_hanoi(helper,dest,src,n-1);
	return steps;
}

int main()
{	
	int s=tower_of_hanoi('A','B','C',3);
	cout<<"Steps="<<s;
	return 0;
}