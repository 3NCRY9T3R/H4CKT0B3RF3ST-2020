// C++ program to find a missing no in an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;                 // checking for t number of testcases
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int sum = 0;
        
        for(int i = 1; i < n; i++){   // taking input array
            cin >> arr[i];
         }
         for(int j = 1; j < n; j++){   // calculating the sum of the array
             sum = sum +arr[j];
             }

            
             int missing =  n*(n+1)/2 - (sum);  // finding missing number
             
             cout << missing << endl; // printing the missing number
    }
    return 0;
    
}
