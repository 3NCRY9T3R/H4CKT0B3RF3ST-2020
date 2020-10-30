vector<int> rotateLeft(int d, vector<int> arr) {

    for(int i = 0; i < d; i++) {
        int temp = arr[0];
        arr.push_back(temp);
        arr.erase(arr.begin());
    }
    return arr;
}
