#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        int k = sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+k);
        int temp=arr[0];
        int g=1;
        int min =0;
        for(int i=0;i<n;i++) {
            if(temp!=arr[i]){
                g++;
                temp=arr[i];

            }
            min+=g;


        }
        cout<<min<<endl;


    }

    return 0;
}
