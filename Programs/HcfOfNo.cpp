#include <iostream>
using namespace std;
int main()
{   int n1,n2,hcf=1,i,m;
    cin>>n1>>n2;
    m=(n1<n2)?n1:n2;
    cout<<"min no."<<m;
    for(i=1;i<=m;i++)
    { if(n1%i==0 && n2%i==0)
      { hcf=i;
      }
    }
    cout<<"hcf"<<hcf;
    return 0;
}
