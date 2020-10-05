/* C Program to display the each byte of an integer.
Example: int a=258; then the each byte are 0,0,1,2.
int a=523; then the each byte are 0,0,2,11.
*/

//A integer is stored as binary in C.It takes 4 bytes of memory is required  (32/64-bit architecture) to store an integer.
//4 bytes = 32 bits are allocated memory.

// This program is a simple way to understand how values are stored in Memory in C.

#include<stdio.h>
#include<math.h>

int main() {
	int num;
	int i = 0, k = 0, a[4][8];
	//Intialize the array to zero
	for (int byte = 0; byte < 4; byte++) {
		for (int bit = 0; bit < 8; bit++) {
			a[byte][bit] = 0;
		}
	}
	int rem = 0;
	scanf("%d", &num);
	while (num != 0) {
		rem = num % 2;
		if (i < 8) {
			a[k][8 - i - 1] = rem;
			i++;
		}
		else {
			i = 0;
			k++;
			a[k][8 - i - 1] = rem;
			i++;
		}
		num = num / 2;
	}
	int bit, byte;
	for (byte = 0; byte < 4; byte++) {
		printf("Byte %d : \t", byte + 1);
		for (bit = 0; bit < 8; bit++) {
			printf("%d", a[byte][bit] );
		}
		printf("\n");
	}
	int res[4];
	for (byte = 0; byte < 4; byte++) {
		int dec = 0, i = 0, rem;
		int bit = 7;
		while (bit >= 0) {
			dec += a[byte][bit] * pow(2, i);
			++i;
			bit--;
		}
		//Array which will store each byte.
		res[byte] = dec;

	}

	printf("%d,%d,%d,%d\n", res[3], res[2], res[1], res[0] );

}

//Abhishek_Dutt


