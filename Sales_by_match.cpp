/*
Alex works at a clothing store. There is a large pile of socks that must be paired by color for sale. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.
For example, there are n=7 socks with colors ar=[1,2,1,2,1,3,2]. There is one pair of color 1 and one of color 2. There are three odd socks left, one of each color. The number of pairs is 2. */

#include <bits/stdc++.h>
using namespace std;
vector<string> split_string(string);
// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {
    int cnt =0 ;
for(int i=0;i<n;i++){
    if(ar[i]!=0){
    for(int j=i+1;j<n;j++){
        if(ar[i]==ar[j]){
            cnt++;
            ar[j]=0;
            break;
        }
    }
    }
}
return cnt;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string ar_temp_temp;
    getline(cin, ar_temp_temp);
    vector<string> ar_temp = split_string(ar_temp_temp);
    vector<int> ar(n);
    for (int i = 0; i < n; i++) {
        int ar_item = stoi(ar_temp[i]);
        ar[i] = ar_item;
    }
    int result = sockMerchant(n, ar);
    fout << result << "\n";
    fout.close();
    return 0;
}
vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });
    input_string.erase(new_end, input_string.end());
    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }
    vector<string> splits;
    char delimiter = ' ';
    size_t i = 0;
    size_t pos = input_string.find(delimiter);
    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));
        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }
    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));
    return splits;
}
