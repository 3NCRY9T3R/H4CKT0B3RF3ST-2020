long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> arr(n);
    long large = 0, check = 0;
    fill(arr.begin(),arr.end(),0);
    for(int i = 0; i < queries.size(); i++){
        int a = queries[i][0] - 1,
            b = queries[i][1],
            k = queries[i][2];
            arr[a] += k;
            if(b < n)
                arr[b] -= k;
    }

    for(int i = 0; i < n; i++){
        check += arr[i];
        if(check > large)
            large = check;
    }

    return large;
}
