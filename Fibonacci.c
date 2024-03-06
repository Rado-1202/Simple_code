#include <stdio.h>
int main() {
    long long i, j;
    scanf("%lld", &j);
    long long a[j];
    a[0] = 0;
    a[1] = 1;
    for( i=2; i<j; i++){
        a[i] = a[i-1] + a[i-2];
    }
    for(i=0;i<j;i++){
        printf("%lld ", a[i]);
    }
}
