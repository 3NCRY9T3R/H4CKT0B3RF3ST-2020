#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector< vector<int> > arr;
    int n,t,q,i,j;

    cin>>n>>q;

    arr.resize(n);

    for(i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        for(j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            arr[i].push_back(x);
        }

    }

    for(t = 0; t < q; t++)
    {
        cin>>i>>j;
        cout<<arr[i][j]<<endl;
    }

    return 0;
}
