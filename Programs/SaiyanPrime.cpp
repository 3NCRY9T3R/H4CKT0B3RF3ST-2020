#include <bits/stdc++.h>
using namespace std;
#define int long long






#define svMX 10000000


std::vector<int> svVector;
bool prime[svMX];

void seiveFunction(){
    for(int i = 2;i*i<svMX;i++){
            if(prime[i]){
                for(int j = i*i;j<svMX;j+=i){
                    prime[j] = false;
                }
            }
    }
    prime[0]=prime[1]=false;
    for(int i=2;i<svMX;i++){
        if(prime[i]){
            svVector.push_back(i);
        }
    }
}


int32_t main (){
    memset(prime,true,sizeof prime);
    seiveFunction();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<(int)(svVector[n]*svVector[n])<<endl;
    }
  return 0;
}
