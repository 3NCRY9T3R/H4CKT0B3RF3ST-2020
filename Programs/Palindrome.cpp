#include <iostream>
using namespace std;
int main()
{ int n,reverse=0,num;
  cin>>n;
  num=n;
  while(n!=0)
  {  reverse=(reverse*10)+(n%10);
     n/=10;
  }
  if(reverse==num)
    cout<<"the no. is palindrome";
  else
    cout<<"the no, is not palindrome";
  return 0;
}
