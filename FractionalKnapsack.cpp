#include<iostream>
using namespace std;

void knapsack(float*,float*,float,float);
int main()
{ 
  float value[50],weight[50],max,n;
  int i;
  cout<<"Enter the maximum capacity of knapsack: ";
  cin>>max;
  cout<<"Enter the number of item: ";
  cin>>n;
  cout<<"Enter the values of item,according to per unit value in descending order:\n";
  for( i=0;i<n;i++)
  {
  cin>>value[i];
  }
  cout<<"Enter the values of weight according to value of item:\n";
   for( i=0;i<n;i++)
  {
  cin>>weight[i];
  }
  cout<<"Elements enter by you is \n";
  for( i=0;i<n;i++)
  {cout<<"\nvalue "<<value[i]<<" weight "<<weight[i];
  }
  knapsack(value,weight,max,n);
}

void knapsack(float value[],float weight[],float max,float n)
  { float current=0,rem;
  int i = 0;
    float currentval=0;
      while((current<=max)&& (weight[i]<=max-current))
       {    current=current+weight[i];
        currentval=currentval+value[i];
        i++;
        }
     rem=max-current;
    if(current<max)
       {current =current+rem;
       currentval=currentval+((rem * value[i])/weight[i] );
       }

   cout<<"\n\nmaximum profit is: "<<currentval;
   cout<<"\ncurrent weight is: "<<current;
  }
