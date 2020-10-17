#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int digit;
cin>>digit;
int a=0;
  while(n>0){
    int last_digit=n%10;
      if(last_digit == digit){
        a=a+1;
     }
     n=n/10;
   }
   cout<<a;
   return 0;
}
