#include<iostream.h>
using namespace std;
void towerofhanoi(int n,int a,int b,int c)
{
    if(n==1)
    cout<<"Move disk from "<<a<<" to "<<c<<endl;
    else
    {
       towerofhanoi(n-1,a,c,b);
       cout<<"Move disk from "<<a<<" to "<<c<<endl;
       towerofhanoi(n-1,b,a,c);
    }
}
int main()
{
  int n;
  int A=1,B=2,C=3;
  cin>>n;
  towerofhanoi(n,A,B,C);
}
