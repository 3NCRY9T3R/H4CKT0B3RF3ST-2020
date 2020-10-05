#include <stdio.h>
#include <stdlib.h>

//Function to sort the array using 'Insertion sorting' method
void insertionSort(int arr[],int n)
{
 int temp,i,j;
  for(i=1;i<n;i++)
  {
     temp=arr[i];
     j=i-1;
     while(j>=0 && arr[j]>temp)
     {
         arr[j+1]=arr[j];
         j--;
     }
     arr[j+1]=temp;
   }
   //to print array
    printf("Sorted array is -\n");
    for(int k=0;k<n;k++)
    {
      printf("%d\n",arr[k]);
    }
}

int main()
{
    int n=0;
    printf("Enter array size- ");
    scanf("%d",&n);
    int inputArr[100];
    printf("Enter your array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&inputArr[i]);
    }
    insertionSort(inputArr,n);
    return 0;
}

