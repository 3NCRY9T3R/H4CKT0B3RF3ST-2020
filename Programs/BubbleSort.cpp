#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int arr[10],n,i,j,c;
cout<<"Enter the size of array:";
cin>>n;
cout<<"Enter the elements of array:";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
for(j=n-2;j>=0;j--)
{
for(i=0;i<j;i++)
{
if(arr[i]<arr[j])
{
c=arr[i];
arr[i]=arr[j];
arr[j]=c;
}
}
}
cout<<"Array after iteration is:";
for(i=0;i<n;i++)
{
cout<<arr[i]<<endl;
}
getch();
}
