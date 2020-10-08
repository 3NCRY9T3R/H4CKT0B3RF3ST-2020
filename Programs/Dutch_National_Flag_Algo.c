#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void func(int *arr, int size_arr) {
	int low, med, high;
	low = med = 0;				//Element present at the 0th index of the array.
	high = size_arr - 1;		//Element present at the end of the array.

	while (med <= high) {

		//If the element pointed by Med is 0, then swap it with the element present at low and increment both
		//low and med.
		if (*(arr + med) == 0) {
			swap((arr + low), (arr + med));
			low++;
			med++;
		}

		//No change.
		else if (*(arr + med) == 1) {
			med++;
		}


		//If the element pointed by Med is 2, then swap it with the element present at high and decrement
		//high only.
		else {
			swap((arr + med), (arr + high));
			high--;
		}
	}
}

void display(int arr[], int size_arr) {
	for (int i = 0; i < size_arr; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main() {
	int arr[] =  {0, 0, 1, 2, 0, 1, 2};
	int num = sizeof(arr) / sizeof(arr[0]);

	func(arr, num);

	display(arr, num);
}
