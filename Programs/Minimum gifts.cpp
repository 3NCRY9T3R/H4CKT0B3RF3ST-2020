/*Minimum Gifts


A Company has decided to give some gifts to all of its employees. For that, company has given some rank to each employee. Based on that rank, company has made certain rules to distribute the gifts.

The rules for distributing the gifts are:

Each employee must receive at least one gift.

Employees having higher ranking get a greater number of gifts than their neighbours.

What is the minimum number of gifts required by company?



Constraints

1 < T < 10

1 < N < 100000

1 < Rank < 10^9



Input

First line contains integer T, denoting the number of test cases.

For each test case:

First line contains integer N, denoting the number of employees.

Second line contains N space separated integers, denoting the rank of each employee.



Output

For each test case print the number of minimum gifts required on new line.



Example 1

Input

2

5

1 2 1 5 2

2

1 2

Output

7

3


*/






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
