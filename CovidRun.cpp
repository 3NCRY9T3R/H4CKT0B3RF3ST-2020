#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,k,x,y,t,a=0,c;
	cin >> t;
	while(t--){
	    cin >> n >> k >> x >> y;
	    c = x;
	    for(int i=0; i<n; i++)
	    {
	        if(x==y)
	        {
	            a = 1;
	            break;
	        }
	        x=x+k;
	        if(x>n)
	        {
	            x = (x%n);
	        }
	        if(c==x){
	            break;
	        }
	    }
	    if(a==0)
	    {
	        std::cout << "NO" << std::endl;
	    }
	    else
	    {
	        std::cout << "YES" << std::endl;
	    }
	    a=0;
	}
	return 0;
}
