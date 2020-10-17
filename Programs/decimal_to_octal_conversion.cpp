#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 int o=0;
 int i=1;
 while(n>0){
   int r=n%8;
   n=n/8;
   o=o+(r*i);
   i=i*10;
   
 } 
 cout<<o;
 return 0;
 
}
