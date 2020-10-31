// C++ Program to calculate the sum of an array of length n
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;                    // test case
    while(t--){
        int n;
        cin >> n;                 // input number
        int a[n];
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];           // input array
            
        }
        for(int j = 0; j < n; j++){
            sum = sum + a[j];         // calculating the sum
            
        }
        cout << sum <<endl;     // printing the sum
    }
}
