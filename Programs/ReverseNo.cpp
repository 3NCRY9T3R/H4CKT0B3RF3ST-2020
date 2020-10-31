#include <iostream>
using namespace std;
int main()
{  int i,n,n1,n2,n3,n4;
   cout<<"enter a number";
   cin>>n;
   n4=n%10;
   n=n/10;
   n3=n%10;
   n=n/10;
   n2=n%10;
   n=n/10;
   n1=n%10;
   cout<<"the reversed no. is: "<<(n4*1000)+(n3*100)+(n2*10)+(n1*1)<<endl;
   return 0;
}
