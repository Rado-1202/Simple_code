#include <stdio.h>
int main() {
    long long i, j, l, m = 0, n = 1;
    scanf("%lld", &j);
    if(j>=1){
        printf("0 ");
        if(j>=2){
            printf("1 ");
            if(j>=3){
                for(i=3;i<=j;i++){
                    l = m + n;
                    m = n;
                    n = l;
                    printf("%lld ", l);
                }
            }
        }
    }
}