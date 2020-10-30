vector<int> dynamicArray(int n, vector<vector<int>> queries) {

    vector<int> result;
    vector<vector<int>> seqList;
    seqList.resize(n);
    int lastAnswer = 0;
    for(int i = 0; i < queries.size(); i++) {

        int seq = (queries[i][1] ^ lastAnswer) % n;
        if(queries[i][0] == 1){
            seqList[seq].push_back(queries[i][2]);
        }

        if(queries[i][0] == 2){
            lastAnswer = seqList[seq][queries[i][2] % seqList[seq].size()];
            result.push_back(lastAnswer);
            cout << endl << lastAnswer;
        }
    }

    return result;
}
