#include <stdio.h>

int contains(int a[], int len, int num) 
{
    for (int i=0; i<len; i++) {
        if (a[i] == num) {
            return 1;
        }
    }
    return 0;
}

int main() 
{
    int n, a[1024], i,j;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    printf("[");
    for (i=0; i<n-1; i++) {
        for (j=i+1; j<n; j++) {
            if (contains(a, n, a[i] + a[j])) {
                printf("(%d,%d),", a[i], a[j]);
            }
        }
    }
    printf("\b]\n");
}
