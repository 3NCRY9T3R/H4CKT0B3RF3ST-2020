/*
Given a 6X6 2D Array, arr:
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0

An hourglass in A is a subset of values with indices falling in this pattern in arr's graphical representation:
a b c
  d
e f g
There are 16 hourglasses in arr. An hourglass sum is the sum of an hourglass' values. Calculate the hourglass sum for every hourglass in arr, then print the maximum hourglass sum. The array will always be 6X6.
Example
arr :
-9 -9 -9  1 1 1 
 0 -9  0  4 3 2
-9 -9 -9  1 2 3
 0  0  8  6 6 0
 0  0  0 -2 0 0
 0  0  1  2 4 0
 
The 16 hourglass sums are:
-63, -34, -9, 12, 
-10,  0, 28, 23, 
-27, -11, -2, 10, 
 9,  17, 25, 18
  
The highest hourglass sum is 28 from the hourglass beginning at row 1, column 2:
0 4 3
  1
8 6 6
*/

#include <bits/stdc++.h>

using namespace std;

int func(vector<vector<int>> arr,int m, int n){
    int ans=0;
    int orm=m;
    int orn=n;
    for(int i=m;i<m+3;i++){
        for(int j=n;j<n+3;j++){
            ans+=arr[i][j];
            //n++;
        }
        //m++;
    }
    int red=arr[orm+1][orn]+arr[orm+1][orn+2];
    ans = ans-red;
    return ans;
}


// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int ans=0;
    int sum=INT_MIN;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            ans=func(arr,i,j);
            cout<<"for "<<i<<" "<<j<<" the sum is : "<<ans;
            sum = max(sum,ans);
        }
    }
    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}


