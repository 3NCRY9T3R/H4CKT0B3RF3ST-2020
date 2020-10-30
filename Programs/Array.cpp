#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,r;
    cin>>r>>q;
    int *arr[r];
    for(int i=0;i<r;i++)
    {
        cin>>n;
        arr[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<q;i++)
    {
        int value1,value2;
        cin>>value1>>value2;
        cout<<arr[value1][value2]<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
