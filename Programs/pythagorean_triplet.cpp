#include <bits/stdc++.h>
using namespace std;
void evaluate(long long int n)
{

    if (n == 1 || n == 2)
        printf("-1");

    else if (n % 2 == 0) {
        long long int var =  n * n / 4;
        printf("%lld %lld",var - 1, var + 1);
    }

    else if (n % 2 != 0) {
        long long int var =  n * n + 1;
        printf("%lld %lld",var / 2 - 1, var / 2);
    }
}
int main()
{
    long long int n ;
    cin>>n;
    evaluate(n);
    return 0;
}
