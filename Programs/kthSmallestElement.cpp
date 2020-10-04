#include "iostream"
#include "algorithm"
#include "string"
#include "vector"
#include "queue"
#include "math.h"
#include "stdlib.h"
#include "conio.h"
#include "ctype.h"
using namespace std;

int kthsmallest(vector<int> a, int k){
	priority_queue <int> pq; 
	for( int i = 0 ; i < k ; i++ )
		pq.push(a[i]);
	for( int i = k ; i < a.size() ; i++ )
		if( pq.top() > a[i] ){
			pq.pop();
			pq.push(a[i]);
		}
	return pq.top();
}

int main() 
{
	vector<int> a = {7, 10, 4, 3, 20, 6, 15};
	int k = 3;
	cout<<"kth smallest element is "<<kthsmallest(a,k);
	return 0; 
} 
