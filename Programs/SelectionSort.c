#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[],int n)
{
  int min_index,i,j;
  for(i=0;i<n-1;i++)
  {
      min_index=i;
      for(j=i+1;j<n;j++)
      {
          if(arr[j]<arr[min_index])
            min_index=j;
      }
      //swapping both the numbers
      int temp=arr[min_index];
      arr[min_index]=arr[i];
      arr[i]=temp;
  }

  //Printing Sorted array
  printf("Sorted array is- \n");
  for(int k=0;k<n;k++)
      {
          printf("%d ",arr[k]);
      }
}
int main()
{
    int size=0;
    printf("Enter size of array- ");
    scanf("%d",&size);
    int inputArr[100];
    printf("Enter elements of array-\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&inputArr[i]);
    }
    selectionSort(inputArr,size);
    return 0;
}
