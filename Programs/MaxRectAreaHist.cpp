//Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars.
//For simplicity, assume that all bars have same width and the width is 1 unit.
#include <iostream>
using namespace std;
#include<stack>
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        stack<int> hist;
        int i = 0;
        int max = 0;
        while(i<n){
            if(hist.empty()||arr[i]>=arr[hist.top()]){
                hist.push(i++);
            }
            else{
                int top = hist.top();
                hist.pop();
                int area = arr[top]*(hist.empty()?i:i-hist.top()-1);
                if(area>max){
                    max = area;
                }
            }
        }
        while(hist.empty()==false){
            int top = hist.top();
            hist.pop();
            int area = arr[top]*(hist.empty()?i:i-hist.top()-1);
            if(area>max){
                max = area;
            }
        }
        cout<<max<<endl;
    }
	return 0;
}
