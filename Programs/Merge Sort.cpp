#include <iostream>
using namespace std;

void merge(int input[],int si,int ei)
{
int mid=(si+ei)/2;
    int arr[10000];
    
    
    int i=si,j=mid+1,k=0;
  while(i<=mid && j<=ei){
      if(input[i]>input[j]){
          arr[k]=input[j];
          k++;
          j++;
      }
      else{
          arr[k]=input[i];
          k++;
          i++;
      }
  }
    for(;i<=mid;i++)
    {
        arr[k]=input[i];
        k++;
    }
    for(;j<=ei;j++)       
    {
        arr[k]=input[j];
        k++;
    }
    int p=0;
    for(int i=si;i<=ei;i++){
        input[i]=arr[p++];
    }
}
 
void mergeSorts(int input[], int si,int ei){
    
     if(si>=ei)
    {
        return;
    }
    int mid=(si+ei)/2;
    
    
        mergeSorts(input,si,mid);
     mergeSorts(input,mid+1,ei);
    merge(input,si,ei);}

void mergeSort(int input[], int size){
        mergeSorts(input,0,size-1);
}

int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}
