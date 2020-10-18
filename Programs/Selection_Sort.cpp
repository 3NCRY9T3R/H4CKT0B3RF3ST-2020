#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int size,arr[40],i,j,temp;
cout<<"Enter the size of array:";
cin>>size;
cout<<"Enter the elements of array:";
for(i=0;i<size;i++)
{
cin>>arr[i];
}
cout<<"Sorting array using selection sort:<<endl";
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
cout<<"Now the array after sorting is:";
for(i=0;i<size;i++)
{
cout<<arr[i]<<"-->";
}
getch();
}
