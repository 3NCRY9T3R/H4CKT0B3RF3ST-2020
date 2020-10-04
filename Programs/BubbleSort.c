#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,A[100],temp;
  printf("Enter total number of elements- \n");
  scanf("%d",&n);
  printf("Enter the elements \n");
  for(int i=0;i<n;i++)
  {
      scanf("%d",&A[i]);
  }

  for(int j=0;j<n-1;j++)
  {
      for(int k=0;k<n-j-1;k++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j]+A[j+1];
                A[j]=temp-A[j];
                A[j+1]=temp-A[j+1];
            }

        }
  }
//Printing sorted array using bubble sort -
  printf("\n The sorted array is - \n");
  for(int l=0;l<n;l++)
  {
      printf("%d ",A[l]);
  }

return;
}
