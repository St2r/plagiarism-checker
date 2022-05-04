"""
2022-03-26 12:17:26
AC
1.0
Accepted | 1 * (1 / 4) | 12 ms | 1648 KB
Accepted | 1 * (1 / 4) | 12 ms | 1600 KB
Accepted | 1 * (1 / 4) | 2 ms | 1700 KB
Accepted | 1 * (1 / 4) | 9 ms | 1692 KB


"""

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i;
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int j, sum = 0;
    for(i=0; i<n; i++){
        for(j=1; j<a[i]; j++){
            if(a[i]%j == 0){
               sum += j;
            }
        }
        if(sum == a[i]){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        sum = 0;
    }
    return 0;
}