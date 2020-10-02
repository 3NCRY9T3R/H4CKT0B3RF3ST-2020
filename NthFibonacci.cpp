#include<iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
int fn;
    int f1 = 0;
     int f2 = 1;
   for(int i = 0; i < n; i++)
    {

    fn = f1 + f2;
    f1 = f2;
    f2 = fn;
}
   cout << f1;
}
