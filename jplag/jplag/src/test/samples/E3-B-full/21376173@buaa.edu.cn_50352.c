"""
2022-03-27 15:40:06
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1568 KB
Accepted | 1 * (35 / 100) | 3 ms | 1620 KB
Accepted | 1 * (60 / 100) | 8 ms | 1628 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[100],i,j,k=0;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        k=0;
        for(j=1;j<a[i];j++){
            if(a[i]%j==0){
                k+=j;
            }
        }
        if(k==a[i]){
            printf("YES\n");
        }
        if(k!=a[i]){
            printf("NO\n");
        }
    }
    return 0;
}