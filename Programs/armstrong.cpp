// C++ program to find whether a given no is an armstrong number or not

#include<bits/stdc++.h>
using namespace std;
 int main()
{
  
        int N;
        cin >> N;
        int x = N;
        int nd = 0;
        while(x>0)
        {
               
               x = x/10;
               nd++;
               
}
       int arr[nd];
      int i = -1;
      int T=N;
       while(N>0)
       {
               int y;
               y = N%10;
               arr[i+1] = y;
               N=N/10;
       }
      int sum = 0;
      for(int j=0; j<=i; j++)
      {
              sum+= (int)pow(arr[j],nd);
      }
      if(sum==N){
            cout << "Armstrong Number" ;

      }
      else{

              cout << "Not Armstrong Number" ;
      }
      return 0;
}


