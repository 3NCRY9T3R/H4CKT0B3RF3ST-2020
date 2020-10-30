// C++ program to calculate the largest length of the string and also concatinate that string
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;             // test case
    while(t--){
        string a, b;
        cin >> a >> b;           // input string a and b
     if(a.length() >= b.length())      // comparing string length
     
        cout << a.length() << endl;    // printing the length if a is the string having largest length
        else
        cout << b.length() << endl;     //  printing the length if a is the string having largest length
        
        cout << a.append(b) << endl; // concatinating both strings together
        
    
    
        
    }
}
