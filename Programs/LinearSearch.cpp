#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int arr[10],i,num,n,c=0,pos;
cout<<"Enter the size of array:";
cin>>n;
cout<<"Enter the elements of an array:";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"Enter number to be searched:";
cin>>num;
for(i=0;i<n;i++)
{
if(arr[i]==num)
{
c=1;
pos=i+1;
break;
}
}
if(c==0)
{
cout<<"Number not found:";
}
else
{
cout<<"Number at position:"<<pos;
}
getch();
}
