
// C++ program to implement
// the above approach
 
#include <bits/stdc++.h>
using namespace std;
 
// Function to find the count of numbers in
// range[1, X] having K consecutive set bits
int cntN1X(string str, int len, int K, 
    int cntOne, int dp[32][32][2][2], 
                bool KOne, bool tight)
{
    // If length of current number is
    // equal to length of string
    if (len == str.length()) {
         
        // If count of consecutive set bits
        // in the current string is >= K
        return (KOne == 1);
    }
     
    // If already computedx
    // equal occurred 
    if (dp[len][cntOne][KOne][tight] 
                                   != -1) {
        return dp[len][cntOne][KOne][tight];
    }
 
    // If tight is 1, then element present
    // at current index is element present 
    // in str at current index. Otherwise, 1.
    int end = tight ? (str[len] - '0'): 1;
     
    // Stores count of numbers whose
    // len th bit is i.
    int res = 0;
     
    // Iterate over all possible 
    // value present at current index.
    for(int i = 0; i <= end; i++) {
         
        // Stores count of consecutive 1s
        int temp = (i==1) ? (cntOne + 1): 0;
         
        // Update res.
        res += cntN1X(str, len + 1,
        K, temp, dp, (KOne | (temp == K)), 
                    (tight & (i==end)));
    }
     
    return dp[len][cntOne][KOne][tight]
                                    = res;
}
 
 
// Function to find
// binary representation of N
string convertBinary(int N)
{
    // Stores binary 
    // representation of N.
    string res;
     
    // Traverse each bit of N.
    while(N) {
         
        // Append current bit
        // in res 
        res.push_back(N % 2 + '0');
         
        // Update N.
        N /= 2;
    }
     
    // Append 0 in binary representation
    // Of N
    while(res.length() < 32) {
        res.push_back('0');
    }
     
    // Reverse binary representation of N
    reverse(res.begin(), res.end());
     
    return res;
}
 
// Function to count numbers in
// range[L, R] having K consecutive 1s.
int cntN1XL_R(int L, int R, int K)
{
    // Stores binary representation 
    // of (L - 1)
    string Ls = convertBinary(L - 1);
     
    // Stores binary representation 
    // of R
    string Rs = convertBinary(R);
     
    // Stores values of overlapping
    // subproblems
    int dp[32][32][2][2];
     
    // Initalize dp[][][][] array.
    memset(dp, -1, sizeof(dp));
     
    // Stores count of numbers from 
    // [1, L - 1] having K consecutive 1s
    int resL = cntN1X(Ls, 0, K, 0,
                            dp, 0,1);
     
    // Initalize dp[][][][] array.
    memset(dp, -1, sizeof(dp));
     
     
    // Stores count of numbers from 
    // [1, R - 1] having K consecutive 1s
    int resR = cntN1X(Rs, 0, K, 0,
                            dp, 0, 1);
     
    // Return total counts having K 
    // consecutive 1s in range[L, R]
    return (resR - resL);
}
 
// Driver Code
int main()
{
    int L = 8;
    int R = 100;
    int K = 3;
    cout<<cntN1XL_R(L, R, K);
     
}
