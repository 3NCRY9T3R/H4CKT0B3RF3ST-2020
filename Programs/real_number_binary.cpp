#include <bits/stdc++.h>
#define int long long
using namespace std;

double realBinarySearch(double num, int p) {
    num = floor(1000000*num)/1000000;
   int left = 0, right = 10e6;
   int mid;
   double ans;
    int no=num; 
   while (left <= right) {
      mid = (left + right) / 2;
      int res=(mid*mid)+sqrt(mid);
      if (res <= no) {
         left = mid + 1;
         ans = mid;
      } else {
         right = mid - 1;
      }
   }

   double incr = 0.1;
   for (int i = 0; i < p; i++) {
       double sqt=sqrt(ans);
       sqt = floor(1000000*sqt)/1000000;
       double an= (ans*ans);
       an=floor(1000000*an)/1000000;
       double x=an+sqt;
       x = floor(1000000*x)/1000000; 
      while (x<= num) {
         ans += incr;
         sqt=sqrt(ans);
        sqt = floor(1000000*sqt)/1000000;
        an= (ans*ans);
       an=floor(1000000*an)/1000000;
         x=an+sqt;
        x = floor(1000000*x)/1000000;
      }
      ans -= incr;
      incr /= 10;
   }
   return ans;
}
int32_t main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        double no;
        cin>>no;
        cout<<fixed<<setprecision(6)<<realBinarySearch(no,6)<<endl;
    }
    return 0;
}
