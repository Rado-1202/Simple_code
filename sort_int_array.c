#include <stdio.h>
int main() {
    int i, j, t_n, temp;
    scanf("%d", &t_n);
    int a[t_n];
    for(i=0;i<t_n;i++){
        scanf("%d", &a[i]);
        // check ( i or j ) to 0 index
        for(j=i;j>0;j--){
            // check j index is greater than [j-1] index or not
            if(a[j]<a[j-1]) {
                //if j index is not greater than [j-1] index then swap
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    for(i=0;i<t_n;i++){
        printf("%d ", a[i]);
    }
    return 0;
}
