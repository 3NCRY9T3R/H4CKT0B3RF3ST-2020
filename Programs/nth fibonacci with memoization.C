#include <stdio.h>

int memo[1024];

int fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    if (memo[n] == -1) {
        memo[n] = fib(n-1) + fib(n-2);
    }
    return memo[n];
}

int main () {
    int n;
    memo[0] = 0;
    memo[1] = 1;
    for (int i=2; i<1024; i++) {
        memo[i] = -1;
    }
    scanf("%d", &n);
    printf("%d\n", fib(n));
}
