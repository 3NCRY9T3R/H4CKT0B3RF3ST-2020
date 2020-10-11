/*
Consider a sequence A1,A2,…,AN, where initially, Ai=i for each valid i. You may perform any number of operations on this sequence (including zero). In one operation, you should choose two valid indices i and j, compute the greatest common divisor of Ai and Aj (let's denote it by g), and change both Ai and Aj to g.
You are given a sequence B1,B2,…,BN. Is it possible to obtain this sequence, i.e. change A to B, using the given operations?
*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int b[n],s=1;
       for(int i=0;i<n;i++)
       {
           cin>>b[i];
       }
       for(int i=0;i<n;i++)
       {
           if((i+1)%b[i]!=0)
           {
               s=0;
               break;
           }
       }
           if(s==0)
           {
               cout<<"NO"<<"\n";
           }
           else
           {
               cout<<"YES"<<"\n";
           }
       
    }

	return 0;
}
