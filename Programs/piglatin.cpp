/*Piglatin word
Place the first vowel of the original word as the start of the new word along with the remaining alphabets with "AY"

For example-
input- LONDON
output- ONDONLAY
*/

#include <iostream>
#include <stdlib.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int pos=-1;
    char ch;
    cout<<"\nEnter the word: ";
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);                           //converting the word to uppercase
    int l=s.length();
    for(int i=0;i<l;i++){
        ch=s[i];
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){                   //checking for vowel
          pos =i;
          break;
        }
    }
    if(pos!=-1)
    {
       string ans= s.substr(pos)+s.substr(0,pos)+"AY";
       cout<<"\nPiglatin word: "<<ans;
    }
    else
    {
        cout<<"No piglatin";
    }
    return 0;
}
