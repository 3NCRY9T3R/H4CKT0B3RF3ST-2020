#include <stdio.h>
void selection(int arr[],int n)
{
  int i,j,min;
  for(i=0;i<n-1;i++)
  {
  min=i;
  for(j=i+1;j<n;j++)
  {
  if(arr[j]<arr[min])
  {
  min=j;
  }
  }
  int temp=*(&arr[min]);
  *(&arr[min])=*(&arr[i]);
  *(&arr[i])=temp;
  }
 }
 int main()
 {
  int arr[]={55,26,34,11,78,96,47,88};
  int n=8;
  selection(arr,n);
  printf("Sorted array is:\n");
  for(int i=0;i<n;i++)
  {
  printf("%d\t",arr[i]);
  }
  return 0;
}
