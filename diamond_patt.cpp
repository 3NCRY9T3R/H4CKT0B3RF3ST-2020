#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;

    while(i <= n){
        int j = 1;
        int space  = 1;
        while(space <= n-i){
            cout << " ";
            space++;
        }
        while(j <= i)
        {
            cout << "*";
            j++;
        }
        j = i-1;
        while(j >= 1)
        {
            cout << "*";
            j--;
        }
        i++;
        cout << endl;
    }
    return 0;
}
