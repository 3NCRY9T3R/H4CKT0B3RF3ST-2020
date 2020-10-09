#include <iostream>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--){
	    long long int n,size=0;
	    cin>>n;
	    long long int arr[n],arr1[n],arr2[n],a=0;
	    for(long long int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	   for(long long int f=n-1;f>=0;f--){
	       arr2[a++]=arr[f];
	   }
	   int fl=0,flg=0;
	   for(long long int f=0;f<n;f++){
	       if(arr[f]!=arr2[f]){
	           fl=1;
	           break;
	       }
	   }
	        /*for(lon long int i=0;i<n;i++){
	            if(i==0){
	                arr1[size++]=arr[0];
	            }
	            else{
	                if(arr[i]!arr[i-1]){
	                    arr1[size++]=arr[i];
	                }
	            }
	        }*/
	        
	        for(int i=1;i<=7;i++){
	            flg=0;
	            for(long long int j=0;j<n/2+1;j++){
	                if(arr[j]==i){
	                    flg=1;
	                    break;
	                }
	                
	            }
	            if(flg==0){
	                fl=1;
	                break;
	            }
	        }
	        if(fl==0){
	        for(long long int i=0;i<n;i++){
	            if(arr[i]<1 || arr[i]>7){
	                fl=1;
	                break;
	            }
	            
	        }
	        }
	        if(fl==0){
	            cout<<"yes"<<"\n";
	        }
	        else{
	            cout<<"no"<<"\n";
	        }
	        //cout<<"\n";
	    }
	
	return 0;
}
