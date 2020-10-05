/*Sort the array in a wave such that a1 >= a2 <= a3 >= a4 <= a5.....
Eg- 
input- 1  2  3  4 
output- 2  1  4  3
*/

#include<iostream> 
#include<algorithm> 
#include<vector>
using namespace std; 

int main(){
vector<int> A = { 1,2,3,4 };
    sort(A.begin(),A.end());                  //in built sort function 
    for(int i=0;i<A.size()-1;i+=2){
       int temp=A[i];
       A[i]=A[i+1];
       A[i+1]=temp;
    }
    for (int i = 0; i < A.size(); i++)       //displaying the wave array
        cout << A[i] << " "; 

    return 0; 
}
