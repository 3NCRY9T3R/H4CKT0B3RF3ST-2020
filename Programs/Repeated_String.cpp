/*
Given a string ,s, of lowercase English letters that can be repeated infinitely many times.
Given an integer,n, find and print the number of letter a's in the first n letters of this infinite string.
For example, if the string s="abcac" and n=10, the substring we consider is abcacabcac, the first 10 characters of infinite string. There are 4 occurrences of a in the substring.*/

#include <bits/stdc++.h>
using namespace std;
// Complete the repeatedString function below.
int count_of_a(string s){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a') cnt++;
    }
    return cnt;
}

long repeatedString(string s,long n){
    long k = (n/s.size())*(count_of_a(s));
    int p = n%s.size();
    int store = 0;
    for(int i=0;i<p;i++){
        if(s[i]=='a')
        store++;
    }    
    return k+store;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    string s;
    getline(cin, s);
    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    long result = repeatedString(s, n);
    fout << result << "\n";
    fout.close();
    return 0;
}
