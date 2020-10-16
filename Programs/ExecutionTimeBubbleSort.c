//Bubble sort with Execution Time in C

#include <stdio.h>
#include<time.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    clock_t start,end;
    double cpu_time_used;

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    printf("Old Array:- 64 34 25 12 22 11 90\n");
    int n = sizeof(arr)/sizeof(arr[0]);
    start = clock();
    bubbleSort(arr, n);
    printf("Sorted Array:- ");
    printArray(arr, n);
    end = clock();
    cpu_time_used = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("Execution Time:- %lf",cpu_time_used);
    return 0;
}
