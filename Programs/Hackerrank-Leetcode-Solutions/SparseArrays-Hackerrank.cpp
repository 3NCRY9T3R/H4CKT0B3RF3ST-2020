vector<int> matchingStrings(vector<string> strings, vector<string> queries) {

    vector<int> result;
    // int q = queries.size(), s = strings.size();
    for(int i = 0; i < queries.size(); i++){
        int reps = 0;
        for(int j = 0; j < strings.size(); j++){
            if(!queries[i].compare(strings[j]))
                reps++;
        }
        result.push_back(reps);
    }

    return result;
}
