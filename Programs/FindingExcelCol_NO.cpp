
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n;
    string str;
    cin>>str;
    n=str.length();
    i=0;
    while(n--)
    {
        // cout<<"(int)(str[i++])"<<(int)str[i]<<endl;
        j= (int)(str[i]-'A'+1);
        k+=pow(26,n)*(j);
        
        i++;
    }
    cout<<k<<endl;
}


