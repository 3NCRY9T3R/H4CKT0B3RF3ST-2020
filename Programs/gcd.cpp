// A recursive C++ program to find the gcd of 2 numbers.

#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){    
    if(b == 0){        // base case
        return a;
    }
    else {
        return gcd(b,a%b);  // recursive function to calculate gcd 
    }
}

int main(){
    int a, b;
    cin >> a >> b; // taking input 
    
    cout << gcd(a,b) <<endl; // printing the gcd of two numbers
}
