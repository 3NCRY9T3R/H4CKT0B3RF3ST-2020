// A C++ program to implement the binary adder/ full adder.

#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;


string addBinary(string a, string b) {
        int extra=0;
        int l1,l2;
        l1=a.size()-1;
        l2=b.size()-1;
        string s="";
        while(l1>=0 && l2>=0)
        {
            if(a[l1]=='1' && b[l2]=='1')
            {
                if(extra && a[l1]=='1' && b[l2]=='1')
                {  
                    s.push_back('1');
                }
                else
                {  s.push_back('0');
                   extra=1;
                } 
            }
            else if((a[l1]=='1' && b[l2]=='0') || (a[l1]=='0' && b[l2]=='1'))
            {
                if(extra)
                    s.push_back('0');
                else
                    s.push_back('1'); 
            }
            else 
            {
                if(extra)
                {
                    s.push_back('1');
                    extra=0;
                }
                else
                    s.push_back('0');
            }
            l1--;l2--;
        }
        while(l1>=0)
        {  
            if(extra && a[l1]=='1')
               s.push_back('0');
            else if(extra && a[l1]=='0')
            { s.push_back('1');
              extra=0;
            }
            else
               s.push_back(a[l1]);
            l1--;
        }
        while(l2>=0)
        {
            if(extra && b[l2]=='1')
               s.push_back('0');
            else if(extra && b[l2]=='0')
            { s.push_back('1');
              extra=0;
            }
            else
               s.push_back(b[l2]);
            l2--;
        }
        if(extra)
            s.push_back('1');
    int n = s.size(); 
 
    for(int i = 0; i < n / 2; i++) 
        swap(s[i], s[n - i - 1]); 
    return s;
    }
int main(){
string b1 = "110"; //Decimal Equivalent : 6
string b2 = "010"; //Decimal Equivalent : 2
string b3 = addBinary(b1,b2);
//b3 = 1000 Eq: 8
}
