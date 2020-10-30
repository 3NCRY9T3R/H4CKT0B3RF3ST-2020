long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> arr(n);
    fill(arr.begin(),arr.end(),0);
    for(int i = 0; i < queries.size(); i++){
        int a = queries[i][0]-1,
            b = queries[i][1]-1,
            k = queries[i][2];
        for(int j = a; j <= b; j++)
            arr[j] += k;
    }
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}

//9 out of 16 test cases resolved . since it is O(n^2) cases with more than 10000 cases cause TLE error
