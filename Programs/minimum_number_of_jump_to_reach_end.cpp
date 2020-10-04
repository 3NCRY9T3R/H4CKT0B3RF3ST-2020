/*
Given an array of integers where each element represents the max number of steps that can be made forward from that element.The task is to find the minimum number
of jumps to reach the end of the array (starting from the first element).If an element is 0, then cannot move through that element.

Example 1:

Input:
N = 11
a[] = {1,3,5,8,9,2,6,7,6,8,9}
Output: 3
Explanation: First jump from 1st element,
and we jump to 2nd element with value 3.
Now, from here we jump to 5h element with
value 9. and from here we will jump to
last.
Example 2:

Input:
N = 6
a[] = {1,4,3,2,6,7}
Output: 2
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,i,j;
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++) {  
	        cin>>arr[i];
	    }
	    int step=arr[0],maxlen=arr[0],jump=1,f=0;
	    if(arr[0]==0 || n==1){
	        cout<<-1<<endl;
	        continue;
	    }
	    for(i=1;i<n-1;i++){
	        maxlen=max(maxlen,arr[i]+i);
	        step--;
	        if(step==0){
	            jump+=1;
	            if(maxlen<=i)
	                {
	                    f=1;
	                    cout<<-1<<endl;
	                    break;
	                }
	               step=maxlen-i;
	        }
	    }
	    if(f==0)
	    cout<<jump<<endl;
	}
	    
	return 0;
}
