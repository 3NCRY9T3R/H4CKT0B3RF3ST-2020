// Quick sort with Execution Time in C

#include <stdio.h>
#include<time.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int i,j;
int part(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = part(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

void printArray(int arr[], int size)
{
    for (i = 0; i < size; ++i)
        printf("%d  ", arr[i]);
    printf("\n");
}

int main()
{
    clock_t start,end;
    double cpu_time_used;

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    printf("Old Array:- 64 34 25 12 22 11 90\n");
    int n = sizeof(arr) / sizeof(arr[0]);
    start = clock();
    quickSort(arr, 0, n - 1);
    printf("Sorted array:- ");
    printArray(arr, n);
    end = clock();
    cpu_time_used = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("Execution Time:- %lf",cpu_time_used);
}
