#include <stdio.h>

int is_palindrome(int num) {
    int cpy = num, rev=0;
    while (cpy != 0) {
        rev = rev * 10 + cpy%10;
        cpy /= 10;
    }
    return (rev == num);
}
int is_prime(int num) {
    int i;
    for (i=2; i*i < num; i++) {
        if (num%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int i, count;
    for (i = 999999999, count=0; i>99999999 && count<3; i--) {
        if (is_palindrome(i)) {
            if (is_prime(i)) {
                printf("%d\n", i);
                count++;
            }
        }
    }
}
