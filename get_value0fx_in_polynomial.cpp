#include <bits/stdc++.h>
#define int long long
using namespace std;

int binary_search(int s,int e,int a,int b,int c,int k){
    int ans=0;
    while(s<=e){
        int x=(s+e)/2;
        int poly=(a*x*x)+(b*x)+c;
        if(poly<k){
            s=x+1;
        }
        else{
            ans=x;
            e=x-1;
        }
    }
    return ans;
}
int32_t main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c,k;
        cin>>a>>b>>c>>k;
        cout<<binary_search(0,10e6,a,b,c,k)<<endl;
    }
    return 0;
}
