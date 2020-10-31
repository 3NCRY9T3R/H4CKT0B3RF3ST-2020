#include <stdio.h>
void bubble(int arr[],int n)
{
  if(n==1)
  {
  return;
  }
  for(int i=0;i<n-1;i++)
  {
  if(arr[i]>arr[i+1])
  {
  int temp=arr[i];
  arr[i]=arr[i+1];
  arr[i+1]=temp;
  }
  }
  bubble(arr,n-1);
 }
 int main()
 {
  int arr[]={55,26,34,11,78,96,47,88};
  int n=8;
  bubble(arr,n);
  printf("srted array is:\n");
  for (int i=0;i<n;i++)
  {
  printf("%d\t",arr[i]);
  }
  return 0;
 }
