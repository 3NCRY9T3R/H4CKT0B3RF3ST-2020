/* Program for Partition of array
Given a number x
place all the numbers <=k on left side
and all numbers >k on right side
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> partitionArray(vector<int> arr,int x){
    int i=0,j=arr.size()-1,temp;
    while(i<=j){
      while(arr[i]<=x)
        i++;
      while(arr[j]>x)
        j--;
      if(i<j&&(arr[i]>x||arr[j]<=x)){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;     
        i++;
        j--;
      }        
    }
    return arr;
}
int main() {
    int n,k,i=0;//n=number of elements,k=partition number
    cin>>n>>k;
    vector<int> arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    arr=partitionArray(arr,k);
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
