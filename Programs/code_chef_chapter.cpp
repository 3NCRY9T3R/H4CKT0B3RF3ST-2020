#include <bits/stdc++.h>
#define int long long
using namespace std;

bool isSame(vector<int>v){
    int i=0,j=1;
    while(j<v.size()){
        if(v[i]!=v[j]){
            return false;
        }
        else{
            i++;
            j++;
        }
    }
    return true;
}
int32_t main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        set<int>s;
        for(int j=0;j<n;j++){
            int a;cin>>a;
            s.insert(a);
        }
        vector<int>v(s.begin(),s.end());
        int mid=(0+(s.size()-1))/2;
        for(int j=0;j<mid;j++){
            v[j]++;
        }
        for(int j=mid+1;j<s.size();j++){
            v[j]--;
        }
        if(isSame(v)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
